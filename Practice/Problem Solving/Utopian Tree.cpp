#include <bits/stdc++.h>
#define start int main(){
#define stop std::cin.get();}
using namespace std;

int utopianTree(int n) {
    int tree = 1;
    for (int i = 1; i <= n; i++)
        tree = (i % 2) == 0 ? (tree + 1) : (tree * 2);
    return tree;
}

//main function start
start
  int t;
  cin >> t;
  for (int t_itr = 0; t_itr < t; t_itr++) {
      int n, tree = 1;
      cin >> n;
      int result = utopianTree(n);
      cout << result << endl;
  }
stop
//main function stop
