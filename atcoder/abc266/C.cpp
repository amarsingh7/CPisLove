/* आलस्यं हि मनुष्याणां शरीरस्थो महान् रिपुः।
नास्त्युद्यमसमो बन्धुः कृत्वा यं नावसीदति।। 
*You are only entitled to the action, 
.. never to its fruits*.. 
*You are what you believe in. 
and You become that which you believe you can become..*/

/* Author- Amar Singh */
#include <bits/stdc++.h>
using namespace std;

bool f(int ax, int ay, int bx, int by, int cx, int cy)
{
    int abx, aby;
    int bcx, bcy;
    abx = bx - ax;
    aby = by - ay;
    bcx = cx - bx;
    bcy = cy - by;
    int ab = aby*bcx - abx*bcy;
    if(ab < 0) 
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

       int ax, ay, bx, by, cx, cy, dx, dy;
       cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;

    bool a = f(ax, ay, bx, by, cx, cy);
    bool b = f(bx, by, cx, cy, dx, dy);
    bool c = f(cx, cy, dx, dy, ax, ay);
    bool d = f(dx, dy, ax, ay, bx, by);
 
    if(a && b && c && d) 
        cout << "Yes";
    else 
        cout << "No";
}
