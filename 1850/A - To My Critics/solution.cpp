#include <bits/stdc++.h>
using namespace std;
// void takeinput()
// {
// #ifndef ONLINE_JUDGE
//     freopen("E:\\PROGRAMS\\input.txt", "r", stdin);
//     freopen("E:\\PROGRAMS\\output.txt", "w", stdout);
// #endif
// }
 
int main()
{
    // takeinput();
    // Your C++ code goes here
    int tc;
    cin >> tc;
    while (tc--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b>=10 or b+c>=10 or c+a>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
}