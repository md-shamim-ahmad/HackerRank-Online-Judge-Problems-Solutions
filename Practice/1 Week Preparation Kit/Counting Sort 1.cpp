vector<int> countingSort(vector<int> arr) {
    vector<int> ans(100, 0);
    for (auto it : arr)
        ans[it]++;
    return ans;
}