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
 
    ll n, k;
    cin >> n >> k;
    string word;
    cin >> word;
    map<char, int> mp;
    for (int i = 0; i < n;i++){
        mp[word[i]]++;
    }
    if((n-k)%2==0){
        int cnt = 0;
        for(auto &k:mp){
            if(k.second&1){
                cnt++;
            }
        }
        if(cnt>k){
            no;
            return;
        }
    }
    else{
        int cnt = 0;
        for (auto &k : mp)
        {
            if (k.second & 1)
            {
                cnt++;
            }
        }
        if (cnt > k+1)
        {
            no;
            return;
        }
    }
    yes;
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