#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a, b;
    cin >> a >> b;
   int k1, k2;
   int res=0, ans=0;
   res= a-b; k1= res/2;
   ans= a+b; k2= ans/2;
   if(abs(a-k1)==abs(b-k1)) 
     cout << k1;
   else if(abs(a-k2) ==abs(b-k2))
     cout << k2;
    else
        cout << "IMPOSSIBLE";
}