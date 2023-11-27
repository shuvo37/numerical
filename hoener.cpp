
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
   const int mx=1e6;

   double x=2;
  vector<double>coff;

    double horner()
    {

        int n=coff.size();

         double res=coff[n-1];

       for(int i=n-2;i>=0;i--)
       {

         res=res*x+coff[i];


       }

      return res;



    }



int main(){


   for(int i=0;i<4;i++)
   {
      double x;
      cin>>x;
      coff.push_back(x);

   }


  double res= horner();

  cout<<res<<endl;




}
