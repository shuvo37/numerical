        //header
#include<bits/stdc++.h>
using namespace std;

 double xValues[100];
 double yValues[100];
int n;

// Function to calculate the product term for Lagrange interpolation
double productTerm(int i, double x) {
    double term = 1.0;
    for (int j = 0; j <n; j++) {
        if (j != i) {
            term *= (x - xValues[j]) / (xValues[i] - xValues[j]);
        }
    }
    return term;
}

// Function to perform Lagrange Interpolation
double lagrangeInterpolation(double x) {
   
    double result = 0.0;

    for (int i = 0; i <n; i++) {
        result += yValues[i] * productTerm(i, x);
    }

    return result;
}

int main() {
   

        cin>>n;

  // n=    4
// xvalue:1.0 2.0 3.0 4.0
// yvalue:2.0 3.0 5.0 7.0
 

   for(int i=0;i<n;i++)
   {

   cin>>xValues[i];

   }

   for(int i=0;i<n;i++)
   {

   cin>>yValues[i];

   }

    double xToInterpolate = 2.5;


    double interpolatedValue = lagrangeInterpolation(xToInterpolate);

    cout << "Interpolated value at x = " << xToInterpolate << ": " << interpolatedValue << endl;

    return 0;
}
