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

    int n;
		cin >> n;
	string s;
	bool ans= true;
		cin >> s;
    for(int i=0; i<n; i++)
	{
		if(s[i]==s[i+1])
		{
			ans= false;
			break;
		}
	}
	if(ans== false)
		cout <<"No\n";
	else
		cout << "Yes\n";
}