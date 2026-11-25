#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define MOD 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pi 3.14
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
void teja(){
    
    string pin;
    cin >> pin;
    string curr = "1234567890";
    int k = 0;
    int cnt = 0;
    for (int i = 0; i < 4;i++){
        int ele = find(curr.begin(), curr.end(), pin[i]) - curr.begin();
        cnt += abs(ele - k) + 1;
        k = find(curr.begin(),curr.end(), pin[i]) - curr.begin();
 
 
    }
    cout << cnt << endl;
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