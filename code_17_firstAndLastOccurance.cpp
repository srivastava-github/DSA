#include <bits/stdc++.h>

using namespace std;

int firstOcc(vector<int>& v, int key, int s, int e) {
    // Base case: when start index exceeds end index
    if (s > e) {
        return -1;
    }

    // Locating the middle element
    int m = s + (e - s) / 2;

    // Check if the middle element is the first occurrence
    if (v[m] == key && (m == 0 || v[m - 1] != key)) {
        return m;
    } else if (v[m] >= key) {
        // Search in the left half
        return firstOcc(v, key, s, m - 1);
    } else {
        // Search in the right half
        return firstOcc(v, key, m + 1, e);
    }
}

int lastOcc(vector<int>& v, int key, int s, int e) {
    // Base case: when start index exceeds end index
    if (s > e) {
        return -1;
    }

    // Locating the middle element
    int m = s + (e - s) / 2;

    // Check if the middle element is the last occurrence
    if (v[m] == key && (m == v.size() - 1 || v[m + 1] != key)) {
        return m;
    } else if (v[m] > key) {
        // Search in the left half
        return lastOcc(v, key, s, m - 1);
    } else {
        // Search in the right half
        return lastOcc(v, key, m + 1, e);
    }
}

int main() {
    int n, key;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> key;
    cout << "First Occurrence is at index: " << firstOcc(v, key, 0, n - 1) << endl;
    cout << "Last Occurrence is at index: " << lastOcc(v, key, 0, n - 1) << endl;
    return 0;
}