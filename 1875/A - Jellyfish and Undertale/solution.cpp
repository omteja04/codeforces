#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
void teja(){
    ll a,b,n;
    // ! the maximum value of the bomb's timer
    //* the initial value of the timer of the bomb
    //the number of tools.
    cin >> a >> b >> n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll time =0;
    for(int  &i: v){
        if(b+i<=a){
            b=b+i;
        }
        else{
            time = time + b - 1;
            if((i+1)<a)
                b = i + 1;
            else
                b = a;
        }
    }
    time += b;
    cout << time << endl;
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