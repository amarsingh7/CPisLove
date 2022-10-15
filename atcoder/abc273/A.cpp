/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the ACTION, 
.. NEVER to its fruits*.. 
*You are what you believe in. 
and You become that which you believe YOU can BECOME..*/

/* Author- Amar Singh */
#include "bits/stdc++.h"
using namespace std;

int ans(int n)
{   if(n==0)
        return 1;
    return n* ans(n-1);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    cout << ans(tc);
}