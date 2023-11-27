
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
   const int mx=1e3;

    double eps=1e-6;
    double x0=0;


    double  f(double x)
    {

        return x*x-3*x+2;
    }

    double derivative(double x)
    {

        return 2 * x-3;

    }


    double newton()
    {
        double f0,f1,x=x0;
         int it=0;
      do{

        f0=f(x);

        f1=derivative(x);

          if(fabs(f1)<eps)
          {
              return  -1;
          }

         x=x-f0/f1;

         it++;

      }while(fabs(f(x))>eps&&it<mx);



       if(it==mx){return -1;}

        return x;

    }





int main(){


     double res=newton();

      cout<<res<<endl;

}
