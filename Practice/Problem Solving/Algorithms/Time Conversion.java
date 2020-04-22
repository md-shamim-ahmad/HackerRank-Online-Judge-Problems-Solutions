#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int hh, mm, ss;
    string str;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    cin >> str;
    if (str == "PM" && hh != 12) {
        hh += 12;
    }
    if(str == "AM" && hh == 12) {
        hh = 0;
    }
    char set = std::cout.fill('0');
    cout << setw(2) << hh << ":" << setw(2) << mm << ":" << setw(2) << ss << " " << endl;
    cout.fill(set);
}

