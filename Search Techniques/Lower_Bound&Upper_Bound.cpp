int Lower_Bound(vector<int> &A, int low, int high, int target) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (A[mid] >= target)
            high = mid;
        else
            low = mid + 1;
    }
    return (A[low] >= target ? low : -1);
}

int upper_Bound(vector<int> &A, int low, int high, int target) {
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (A[mid] <= target)
            low = mid;
        else
            high = mid - 1;
    }
    return (A[low] <= target ? low : -1);
}