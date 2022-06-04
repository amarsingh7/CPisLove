/* Author- Amar Singh */
#include "bits/stdc++.h"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t, n, m, z=1;
        cin >> t;
    int arr[t];
    for(int i = 0; i < t; i++)
    {
        for(int k = 1; k <= t-i; k++)
            cout <<" ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                z = 1;
            else
                z = z*(i-j+1)/j;

            cout << z << " ";
        }
        cout << "\n";
    }

}