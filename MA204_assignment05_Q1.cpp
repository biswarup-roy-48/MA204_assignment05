// BISWARUP ROY
// BTECH/10048/19
// SEC A  'MECH ENGG'


#include <bits/stdc++.h>
using namespace std;



int main() {
   float x[10],y[10],v,val=0,a,n;
   cout<<"Enter the number of arguments :";
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

   cout<<"\nValue of x where the functional value is to be determined\n";
   cin>>a;
   for (int i = 0; i < n; ++i)
   {
      v=y[i];
      for (int j = 0; j < n; ++j)
      {
         if(j!=i){
            v=v*(a-x[j])/(x[i]-x[j]);
         }
      }
      val=val+v;
   }

   cout<<"Result is = "<<val;
   return 0;
}