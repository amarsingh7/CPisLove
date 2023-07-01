/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the ACTION, 
.. NEVER to its fruits*.. 
*You are what you believe in. 
and You become that which you believe YOU can BECOME..*/

/* Author- Amar Singh */
#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n=8;
    vector<int> v(8);
    for(int i=0; i<8; i++)
    {
        cin >> v[i];
    }
    bool res= true;
    for(int i=1; i<n; i++)
    {
        if(v[i]%25 !=0 or (v[i]>675 or v[i]<100) or v[i-1]>v[i] )
            res= false;
    }
    if(res==true)
        cout <<"Yes";
    else
        cout <<"No";

}