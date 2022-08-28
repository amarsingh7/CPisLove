/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the action, 
.. never to its fruits*.. 
*You are what you believe in. 
and You become that which you believe you can become..*/

/* Author- Amar Singh */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	long long n;
	int x= 998244353;
	cin >> n;
	n = n%x;
	if(n<0)
		n += x;
	cout << n;
}