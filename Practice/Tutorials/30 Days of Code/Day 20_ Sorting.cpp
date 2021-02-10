#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int  t;
    cin >> t;
    vector<int>arr;
    while (t--) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
    // Track number of elements swapped during a single array traversal
    int numberOfSwaps = 0;
    
    for (int j = 0; j < arr.size() - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            numberOfSwaps++;
            cnt++;
        }
    }
    
    // If no elements were swapped during a traversal, array is sorted
    if (numberOfSwaps == 0) {
        cout << "Array is sorted in " << cnt << " swaps. "<< endl; 
        cout << "First Element: " << arr[0] << endl;
        cout << "Last Element: " << arr[arr.size() - 1] << endl;
        break;
    }
}
     
    return 0;
}
