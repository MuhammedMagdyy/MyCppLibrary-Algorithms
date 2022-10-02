bool ans(vector<int> &v, int n, int res) {
    for (int i = 0; i < n; ++i) {
        if (v[i] == res)
            return true;
    }
    return false;
}