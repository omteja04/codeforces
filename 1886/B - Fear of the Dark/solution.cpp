#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define MOD 1000000007
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
db distance(db x1,db x2,db y1,db y2){
    return sqrt(pow((x1-x2),2) + pow((y1-y2),2));
}
 
void teja(){
 
    int px, py, ax, ay, bx, by;
    cin >> px >> py;
    cin >> ax >> ay;
    cin >> bx >> by;
    db a = distance(ax,px,ay,py);
    db b = distance(bx,px,by,py);
    db c = distance(0,ax,0,ay);
    db d = distance(0,bx,0,by);
    db e = distance(ax,bx,ay,by);
    double ans = max(min(a, b), min(c, d));
    if (!(min(a, b) == a and min(c, d) == c) && !(min(a, b) == b and min(c, d) == d) && e > 2 * ans)
        ans = e / 2;
    cout<<setprecision(11)<<ans<<endl;
}
 
int main()
{
    takeinput();
    // Your code goes here
    ll tc;
    cin>>tc;
    while(tc--){
    teja();
    }
    return 0;
}