#include <bits/stdc++.h>
#include <iostream>
#include <vector>
// #define DEVELOPMENT
#ifdef DEVELOPMENT
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
#endif
 
/*
=========================
        Headers
=========================
*/
 
#ifdef DEVELOPMENT
#define IN(type, ...) \
    type __VA_ARGS__; \
    read(__VA_ARGS__)
#define OUT(...) write(__VA_ARGS__)
#define debug(x) std::cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '
'
#define Time     std::cerr << "Time Taken: " << (float) std::clock() / CLOCKS_PER_SEC << " Secs" << "
";
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)
#else
#define IN(type, ...) std::cin >> __VA_ARGS__;
#define OUT(...)      std::cout << __VA_ARGS__;
#define debug(x)
#define Time
#define fast_cin()
#endif
 
/*
=========================
    Type Definitions
=========================
*/
 
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pi = std::pair<ll, ll>;
using pd = std::pair<ld, ld>;
using vb = std::vector<bool>;
using vi = std::vector<ll>;
using vd = std::vector<ld>;
using vpi = std::vector<pi>;
using vpd = std::vector<pd>;
using vvb = std::vector<std::vector<bool>>;
using vvi = std::vector<std::vector<ll>>;
using vvd = std::vector<std::vector<ld>>;
using vvpi = std::vector<std::vector<pi>>;
 
/*
=========================
    Template Functions
=========================
*/
 
template <class... Args>
auto &read(Args &...args) {
    return (std::cin >> ... >> args);
}
 
template <class... Args>
auto &write(Args &&...args) {
    return (std::cout << ... << std::forward<Args>(args));
}
 
/*
=========================
    Main Logic
=========================
*/
 
int ask(int l, int r) {
    if(l >= r) {
        return -1;
    }
    std::cout << "? " << l + 1 << " " << r + 1 << std::endl;
    int pos;  // 1-based
    std::cin >> pos;
    return pos - 1;
}
 
void levi() {
    int n;
    std::cin >> n;
    int low = 0;
    int high = n;
 
    while(high - low > 1) {
        int mid = low + (high - low) / 2;
        int _2ndMax = ask(low, high - 1);
        if(_2ndMax < mid) {
            if(ask(low, mid - 1) == _2ndMax) {
                high = mid;
            } else {
                low = mid;
            }
        } else {
            if(ask(mid, high - 1) == _2ndMax) {
                low = mid;
            } else {
                high = mid;
            }
        }
    }
    std::cout << "! " << high << std::endl;
}
 
int main() {
    fast_cin();
 
    int t = 1;
    // std::cin >> t;
    while(t--) {
        levi();
        std::cout << '
';
    }
    return 0;
}