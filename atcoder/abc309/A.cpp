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

    int matrix[3][3]= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int a, b;
        cin >> a >> b;
   
    if(b-a >1)
        cout << "No";
    else if(a==3 and b==1)
        cout <<"No";
    else if(a==3 and b==4 || a==6 and b==7)
        cout << "No";
    else    
        cout <<"Yes";

}