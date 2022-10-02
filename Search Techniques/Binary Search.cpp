int BinarySearch(vector<int> &A, int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            return BinarySearch(A, mid + 1, high, target);
        return BinarySearch(A, low, mid - 1, target);
    }
    return -1;
}

int BinarySearchIterative(vector<int> &A, int low, int high, int target) {
    while (high >= low) {
        int mid = low + (high - low) / 2;
        if (A[mid] == target)
            return mid;
        else if (A[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}