#include <bits/stdc++.h>

using namespace std;

int mod3Sum(const vector<vector<int>>& grid) {
    int sum = 0;
    for (const auto& row : grid) {
        for (int val : row) {
            sum += val;
        }
    }
    return sum % 3;
}

// Function to check if grid a can be transformed into grid b
bool canTransform(int n, int m, vector<vector<int>>& a, const vector<vector<int>>& b) {
    // Step 1: Check sum modulo 3
    if (mod3Sum(a) != mod3Sum(b)) {
        return false;
    }

    // Step 2: Try to transform a to b using the given operation
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            while (a[i][j] != b[i][j]) {
                // Apply the operation to the 2x2 subrectangle starting at (i, j)
                a[i][j] = (a[i][j] + 1) % 3;
                a[i + 1][j + 1] = (a[i + 1][j + 1] + 1) % 3;
                a[i][j + 1] = (a[i][j + 1] + 2) % 3;
                a[i + 1][j] = (a[i + 1][j] + 2) % 3;
            }
        }
    }

    // Step 3: Check if a is now equal to b
    return a == b;
}

int main() {
    int t;
    cin>>t;
    while((t--)>0){
        vector<vector<int>> a,b;
        int m,n;
        cin>>n>>m;
        a.clear();
        b.clear();
        a.resize(n);
        b.resize(n);
        for(int i=0;i<n;i++){
            a[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            b[i].resize(m);
            for(int j=0;j<m;j++){
                cin>>b[i][j];
            }
        }
        if(canTransform(n,m,a,b)) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}