#include <iostream>
#include <vector>

using namespace std;

// Function to calculate divided difference table
vector<vector<double>> dividedDifferenceTable(const vector<double>& x, const vector<double>& y) {
    int n = x.size();
    vector<vector<double>> table(n, vector<double>(n, 0));

    // Fill first column with y values
    for (int i = 0; i < n; i++) {
        table[i][0] = y[i];
    }

    // Calculate divided differences
    for (int j = 1; j < n; j++) {
        for (int i = 0; i < n - j; i++) {
            table[i][j] = (table[i + 1][j - 1] - table[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    return table;
}

// Function to evaluate the Newton's interpolating polynomial
double evaluatePolynomial(const vector<vector<double>>& table, double x, int n) {
    double result = table[0][0];
    for (int i = 1; i < n; i++) {
        double term = table[0][i];
        for (int j = 0; j < i; j++) {
            term *= (x - table[j][0]);
        }
        result += term;
    }
    return result;
}

int main() {
    // Example usage
    vector<double> x = {1, 2, 4, 5};
    vector<double> y = {3, 6, 24, 60};

    vector<vector<double>> table = dividedDifferenceTable(x, y);

    double valueAt4p5 = evaluatePolynomial(table, 4.5, x.size());
    cout << "Value at x = 4.5: " << valueAt4p5 << endl;

    return 0;
}
