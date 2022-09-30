/*
 * Complete the 'dynamicArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. 2D_INTEGER_ARRAY queries
 */

vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> arr(n);
    vector<int> ans;
    int lastAnswer = 0, idx = -1;
    for (int i = 0; i < queries.size(); i++) {
        int x = queries[i][1], y = queries[i][2];
        int Query = queries[i][0];
        if (Query == 1) {
            idx = (x ^ lastAnswer) % n;
            arr[idx].push_back(y);
        } else {
            idx = (x ^ lastAnswer) % n;
            lastAnswer = arr[idx][y % arr[idx].size()];
            ans.push_back(lastAnswer);
        }
    }
    return ans;
}