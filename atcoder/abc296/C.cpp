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

    int n, x;
		cin >> n >> x;
	vector<int> v(n);
	set <int> s;
	for(int i=0; i<n; i++)
	{
		cin >> v[i];
		s.insert(v[i]);
	}
	for(int i=0; i<n; i++)
	{
		if(s.find(v[i]+x) != s.end())
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}