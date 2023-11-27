
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

  float f(float x)
  {

     return ((x*x*x)-x-1);

  }




int main(){

    float a=1,b=2,c,e=.01;

     if(f(a)*f(b)>0)
     {
        cout<<"wrong guess\n";
     }
     else{


        do{

         c=a-((a-b)*f(a))/(f(a)-f(b));
        if(f(a)*f(c)<0)
        {
         b=c;

        }
        else{

            a=c;
        }
       cout<<" root is "<<f(c)<<endl;
        }while(fabs(f(c))>=e);
            cout<<" final root is "<<c<<endl;
     }

}
