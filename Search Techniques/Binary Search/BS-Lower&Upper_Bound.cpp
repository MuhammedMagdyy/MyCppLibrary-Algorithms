//Function To Binary Search (Recursion) On Sorted Array
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

//Function To Binary Search (Iterative) On Sorted Array
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

//Function To Get Lower_Bound
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

//Function To Get Upper_Bound
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