#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int contentChildren = 0;
    int cookieIndex = 0;
    while (cookieIndex < s.size() && contentChildren < g.size()) {
        if (s[cookieIndex] >= g[contentChildren]) {
            contentChildren++;
        }
        cookieIndex++;
    }
    cout << contentChildren << endl;
}

