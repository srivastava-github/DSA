#include <bits/stdc++.h>

using namespace std;

string removeDuplicates(string s) {
        string result;
        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
        return result;
    }

int main() {
    string str;
    cin>>str;
    str= removeDuplicates(str);
    cout<<str;
    return 0;
}