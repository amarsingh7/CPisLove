/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the ACTION, 
.. NEVER to its fruits*.. 
*You are what you believe in. 
and You become that which you believe YOU can BECOME..*/

/* Author- Amar Singh */
#include "bits/stdc++.h"
using namespace std;

int countc( vector<string>& vec1,vector<string>& vec2) 
{
    unordered_set<string> set1(vec1.begin(), vec1.end());
    int count = 0;
    
    for (const auto& element : vec2) {
        if (set1.count(element) > 0) {
            count++;
        }
    }
    
    return count;
}

int main()
{
    int n, m;
        cin >> n >> m;
    
    vector<string> vcn;
    for(int i=0; i<n; i++)
    {
        string cn;
            cin >> cn;
        vcn.push_back(cn);
    }
    
    vector<string> vcm;
    for(int i=0; i<m; i++)
    {
        string cm;
            cin >> cm;
        vcm.push_back(cm);
    }
    vector<int> prices;
    int po;
        cin >> po;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    map<string, int> mp;
    for(int i=0; i<m; i++)
    {
        mp.insert({vcm[i], prices[i]});
    }
    long long ans=0;
    for(int i=0; i<n; i++)
    {
        if(mp.find(vcn[i])==mp.end())
            ans+= po;
        else
            ans+= mp[vcn[i]];
    }
    cout << ans;

}