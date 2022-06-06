int diagonalDifference(vector<vector<int>> arr) {
    int d1 = 0, d2 = 0;
    for (int i = 0; i < arr.size(); i++)
        d1 += arr[i][i];
    for (int i = arr.size() - 1, j = 0; i >= 0; i--, j++) {
        d2 += arr[i][j];
    }
    return abs(d1 - d2);
}
