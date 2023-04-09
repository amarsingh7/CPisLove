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
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    long long A, B;
    scanf("%lld %lld", &A, &B);

    long long n = 0;
    while (A and B) {
        
        long long g = std::__gcd(A, B);
        A/= g;
        B/=g;

        long long d= abs(A-B);
        if(d==0)
        {
            n += 1;
            break;
        }
        if(d==1)
        {
            n+= min(A, B);
            break;
        }
        long long v= min(A, B)  ;
        
        for(long long i=1; i*i <=d; i++)
        {
            if(d%i==0)
            {
                if(i>1)
                    v= min(v, A%i);
                v= min(v, A%(d/i));
            }
        }
        n += v;
        A -=v;
        B -=v;
    }

    cout << n <<"\n";

}
