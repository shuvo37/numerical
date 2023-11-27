
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
   const int mx=1000;

    double f(double x)
    {
        return (x*x)-4*x-10;
    }

    double eps =1e-6;
    double x0=4.0;
    double x1=2.0;



     double sec()
     {

        double x2,f0,f1,f2;

            int it=0;

            do{

               f0=f(x0);
               f1=f(x1);

              if(fabs(f1-f0)<eps)
                 {

                  return -1;


                 }

              x2=x1-(f(x1)*(x1-x0))/(f(x1)-f(x0));
                f2=f(x2);

               x0=x1;
               x1=x2;
                it++;


            }while(fabs(f2)>eps&&it<mx);


          if(it==mx)
          {
              return -1;
          }

      return x2;


     }








int main(){


     double res=sec();

     cout<<res<<endl;



}
