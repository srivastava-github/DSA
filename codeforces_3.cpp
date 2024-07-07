#include <bits/stdc++.h>

using namespace std;

// Function to check if the division is possible with the given limit
bool divisionPossible(vector<int>& a, vector<int>& b, vector<int>& c, int limit) {
    int aShare = 0, bShare = 0, cShare = 0;

    for (int i = 0; i < a.size(); ++i) {
        if (aShare < limit) {
            aShare += a[i];
        } else if (bShare < limit) {
            bShare += b[i];
        } else {
            cShare += c[i];
        }
    }

    return (aShare >= limit) && (bShare >= limit) && (cShare >= limit);
}

// Function to divide the cakes into three parts such that each part has at least the limit share
vector<int> cakeDivision(vector<int>& a, vector<int>& b, vector<int>& c) {
    int n = a.size();
    int totalSum = accumulate(a.begin(), a.end(), 0);
    int limit = (totalSum + 2) / 3;  // ceil(totalSum / 3.0)
    vector<int> ans(6, -1);

    if (divisionPossible(a, b, c, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (aShare < limit) {
                aShare += a[i];
                countA++;
            } else if (bShare < limit) {
                bShare += b[i];
                countB++;
            } else {
                cShare += c[i];
                countC++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    else if (divisionPossible(a, c, b, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (aShare < limit) {
                aShare += a[i];
                countA++;
            } else if (cShare < limit) {
                cShare += c[i];
                countC++;
            } else {
                bShare += b[i];
                countB++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    else if (divisionPossible(b, a, c, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (bShare < limit) {
                bShare += b[i];
                countB++;
            } else if (aShare < limit) {
                aShare += a[i];
                countA++;
            } else {
                cShare += c[i];
                countC++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    else if (divisionPossible(b, c, a, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (bShare < limit) {
                bShare += b[i];
                countB++;
            } else if (cShare < limit) {
                cShare += c[i];
                countC++;
            } else {
                aShare += a[i];
                countA++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    else if (divisionPossible(c, a, b, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (cShare < limit) {
                cShare += c[i];
                countC++;
            } else if (aShare < limit) {
                aShare += a[i];
                countA++;
            } else {
                bShare += b[i];
                countB++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    else if (divisionPossible(c, b, a, limit)) {
        int aShare = 0, bShare = 0, cShare = 0;
        int countA = 0, countB = 0, countC = 0;

        for (int i = 0; i < n; ++i) {
            if (cShare < limit) {
                cShare += c[i];
                countC++;
            } else if (bShare < limit) {
                bShare += b[i];
                countB++;
            } else {
                aShare += a[i];
                countA++;
            }
        }

        ans[0] = 1;
        ans[1] = countA;
        ans[2] = countA + 1;
        ans[3] = countA + countB;
        ans[4] = countA + countB + 1;
        ans[5] = countA + countB + countC;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        vector<int> ans = cakeDivision(a, b, c);
        for (int i = 0; i < 6; ++i) {
            cout << ans[i] << " ";
            if (ans[i] == -1) {
                break;
            }
        }
        cout << endl;
    }

    return 0;
}