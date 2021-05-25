// BISWARUP ROY
// BTECH/10048/19
// SEC A  'MECH ENGG'


#include <bits/stdc++.h>
using namespace std;



int main() {
   float x[10],y[10],X,p=1,u,h,val;
   int n;
   cout<<"Enter the number of arguments : ";
   cin>>n;
   cout<<"Enter the values of x\n";
   for (int i = 1; i <= n; ++i)
   {
      cin>>x[i];
   }

   cout<<"Enter the values of f(x)\n";
   for (int i = 1; i <= n; ++i)
   {
      cin>>y[i];
   }

   cout<<"\nValue of x where the functional value is to be determined : ";
   cin>>X;

   h=x[2]-x[1];
   u=(X-x[n])/h;
   val = y[n];

   for (int i = 1; i <= n; i++)
   {
      for (int j = n; j >= i+1; j--)
      {
         y[j]=y[j]-y[j-1];
      }

      p=p*(u+i-1)/i;
      val=val+p*y[n];
   }
   
   cout<<"\nResult is = "<<val;
   return 0;
}