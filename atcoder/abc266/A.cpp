/* Author- Amar Singh */
#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
	cin >> s;
	int n = s.size();
	if(n==1)
	cout << s;
	else
	cout << s[ceil(n/2)];
}