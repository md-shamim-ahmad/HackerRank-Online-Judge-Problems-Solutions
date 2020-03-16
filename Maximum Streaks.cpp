#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define f0(i, n) for(int i = 0; i < n; i++)
#define f1(j, n) for(j = 0; j < n; j++)

int main() {
    int n;
    cin >> n;
    vector<int>a, b;
    string str;
    int h = 0, t = 0;
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str == "Heads")
            h++;
        else {
            a.pb(h);
            h = 0;
        }
        if(str == "Tails")
            t++;
        else {
            b.pb(t);
            t = 0;
        }
    }
    a.pb(h);
    b.pb(t);
    t = 0;
    h = 0;
    for(int i = 0; i < a.size(); i++) {
        h = max(a[i], h);
    }
    for(int i = 0; i < b.size(); i++) {
        t = max(b[i], t);
    }
    cout << h << " "  << t << endl;
    return 0;
}
