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

	string s;
		cin >> s;
	int n= s.size();
	int ans;
	for(int i=n; i>=0; i--)
	{
		if(s[i-1]=='a')
		{
			ans= i; break;
		}	
		else
			ans= -1;
	}
	cout << ans;
}