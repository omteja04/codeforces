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
    // cout << "Hi";
    int n;
    cin >> n;
    string love="I love that ";
    string hate = "I hate that ";
    string s;
    string finalstr = "";
    if(n==1)
        cout << "I hate it";
    else
    {
        int i = 1;
        do
        {
            if(i%2==0){
                // s = "it";
                finalstr += love ;
            }
            else{
                // s = "that ";
                finalstr += hate ;
            }
            i++;
        } while (i < n);
    if(n%2==0){
        finalstr += "I love it";
    }
    else
        finalstr += "I hate it";
    cout<<finalstr<<endl;
    }
}