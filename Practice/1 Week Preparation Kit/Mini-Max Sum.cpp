typedef long long ll;
ll sumArr(vector<int> &arr, int i, int n) {
    ll sum = 0;
    for (; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    cout << sumArr(arr, 0, n - 1) << " ";
    cout << sumArr(arr, 1, n) << '\n';
}