// BISWARUP ROY
// BTECH/10048/19
// SEC A  'MECH ENGG'


#include <bits/stdc++.h>
using namespace std;



int main() {
   float x[10],y[10],X,p=1,u,h,n,val;
   cout<<"Enter the number of arguments : ";
   cin>>n;
   cout<<"Enter the values of x\n";
   for (int i = 0; i < n; ++i)
   {
      cin>>x[i];
   }

   cout<<"Enter the values of f(x)\n";
   for (int i = 0; i < n; ++i)
   {
      cin>>y[i];
   }

   cout<<"\nValue of x where the functional value is to be determined : ";
   cin>>X;

   h=x[1]-x[0];
   u=(X-x[0])/h;
   val = y[0];

   for (int i = 0; i < n-1; ++i)
   {
      for (int j = 0; j < n-i; ++j)
      {
         y[j]=y[j+1]-y[j];
      }

      p=(p*(u-i))/(i+1);
      val=val+p*y[0];
   }
   
   cout<<"\nResult is = "<<val;
   return 0;
}