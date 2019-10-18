#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(const int& a,const int &b,const int &c,const int &d)
{
    int l=max(a, b);
    int m=max(c, d);
    return (max(l,m));
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    return 0;
}
