int lonelyinteger(vector<int> a) {
    int result = 0;
    for (auto it : a)
        result ^= it;
    return result;
}