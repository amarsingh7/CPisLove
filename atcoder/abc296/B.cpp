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

    string s1, s2, s3, s4, s5, s6, s7, s8;
	cin >> s1>> s2>> s3>> s4>> s5>> s6>> s7>> s8;
	
	vector<vector<string>> v;

	v= { {"a8", "b8", "c8", "d8", "e8", "f8", "g8", "h8"}, {"a7", "b7", "c7", "d7", "e7", "f7", "g7", "h7"}, {"a6", "b6", "c6", "d6", "e6", "f6", "g6", "h6"}, {"a5", "b5", "c5", "d5", "e5", "f5", "g5", "h5"}, {"a4", "b4", "c4", "d4", "e4", "f4", "g4", "h4"}, {"a3", "b3", "c3", "d3", "e3", "f3", "g3", "h3"}, {"a2", "b2", "c2", "d2", "e2", "f2", "g2", "h2"}, {"a1", "b1", "c1", "d1", "e1", "f1", "g1", "h1"}};

	string ans;
	for(int i=0; i<8; i++)
	{
		if(s1[i]=='*')
			ans= v[0][i];
		if(s2[i]=='*')
			ans= v[1][i];
		if(s3[i]=='*')
			ans= v[2][i];
		if(s4[i]=='*')
			ans= v[3][i];
		if(s5[i]=='*')
			ans= v[4][i];
		if(s6[i]=='*')
			ans= v[5][i];
		if(s7[i]=='*')
			ans= v[6][i];
		if(s8[i]=='*')
			ans= v[7][i];
			
	}
	cout << ans;
}