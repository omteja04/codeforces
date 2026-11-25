#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define F first
#define S second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pi 3.14
const int MOD = 1000000007;
#define debug(x) cerr << (#x) << " = " << (x) << endl
#define RUN_TESTS(test_cases, test_function) \
    int tc; \
    cin >> tc; \
    while (tc--) { \
        test_function(); \
    }
void teja(){
    vector<pair<int, int>> dimensions(4);
    for (int i = 0; i < 4;i++){
        cin>>dimensions[i].first>>dimensions[i].second;
    }
    int x1 = dimensions[0].first;
    int y1 = dimensions[0].second;
    int y2;
    for (int i = 1; i < 4;i++){
        if(dimensions[i].first==x1){
            y2=dimensions[i].second;
        }
    }
    int side=abs(y1-y2);
    cout<<side*side<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // Your code goes here
    RUN_TESTS(tc,teja);
    return 0;
}