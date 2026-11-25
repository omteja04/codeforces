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
#define RUN_TESTS(test_cases, test_function) \
    int tc; \
    cin >> tc; \
    while (tc--) { \
        test_function(); \
    }
 
void teja(){
 
    int alice, bob;
    cin >> alice >> bob;
    if((alice-bob)%2==0){
        cout << "Bob
";
    }
    else
        cout << "Alice
";
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // Your code goes here
    RUN_TESTS(tc,teja);
    return 0;
}