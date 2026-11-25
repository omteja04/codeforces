/**
 * Author: omteja04
 * Created on: 09-01-2026 19:25:24
 * Problem: B_Odd_Grasshopper
 * Link: https://codeforces.com/problemset/problem/1607/B
 **/
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)
 
#define tc         \
    int t = 1;     \
    std::cin >> t; \
    while(t--)
 
/*
=================================================
        Because I was born to be great
=================================================
*/
 
void levi() {
    int x, n;
    cin >> x >> n;
    int d;
    switch(n % 4) {
        case 0:
            d = 0;
            break;
        case 1:
            d = -n;
            break;
        case 2:
            d = 1;
            break;
        case 3:
            d = n + 1;
            break;
    }
    if(x % 2 == 0) {
        std::cout << x + d;
    } else {
        std::cout << x - d;
    }
}
#undef int
 
int main() {
    fast_cin();
 
    tc {
        levi();
        std::cout << '
';
    }
    return 0;
}