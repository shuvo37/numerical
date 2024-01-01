#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const double EPSILON = 1e-10;
  vector<vector<double>> a(100, vector<double>(100 + 1));
    vector<double> x(100);
     int n;

void forwardElimination() {
    for (int k = 0; k < n - 1; k++) {
        for (int i = k + 1; i < n; i++) {
            double factor = a[i][k] / a[k][k];
            for (int j = k; j <= n; j++) {
                a[i][j] -= factor * a[k][j];
            }
        }
    }
}

void forwardSubstitution() {
    for (int k = n - 1; k >= 0; k--) {
        double sum = 0.0;
        for (int j = k + 1; j < n; j++) {
            sum += a[k][j] * x[j];
        }
        x[k] = (a[k][n] - sum) / a[k][k];
    }
}

int main() {
   

   
    
    cin >> n;

  
    
    for (int k = 0; k < n; k++) {
        for (int j = 0; j <= n; j++) {
            cin >> a[k][j];
        }
    }

  
    forwardElimination();

  
    forwardSubstitution();

  
   
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}
