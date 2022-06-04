void plusMinus(vector<int> arr) {
    int positiveNum = 0, negativeNum = 0, Zero = 0, n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            Zero++;
        } else if (arr[i] > 0) {
            positiveNum++;
        }else {
            negativeNum++;
        }        
    }
    cout << fixed << setprecision(6) << (float)positiveNum / n << '\n';
    cout << fixed << setprecision(6) << (float)negativeNum / n << '\n';
    cout << fixed << setprecision(6) << (float)Zero / n << '\n';
}