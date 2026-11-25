#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    // Your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
 
        float a, b, c;
        cin >> a >> b >> c;
        double avg = (a + b) / 2;
        double k = abs(avg - a);
        cout << ceil(k / c) << endl;
    }
    return 0;
}