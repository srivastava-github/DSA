#include <bits/stdc++.h>

using namespace std;

vector <int> count (string s){
    vector <int> c(26,0);
    int n=0;
    for(char ch : s){
        n=ch-'a';
        c[n]++;
    }
    return c;

}
bool checkPermutation (string s1, string s2){
    vector <int> n1, n2;
    string str="";
    n2=count(s2);
    for(int i=0;i<=s1.length()-s2.length();i++){
        str=s1.substr(i,s2.length());
        n1=count(str);
        if(n1==n2){
            return true;
        }
    }
    return false;
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    cout<<"Permutation Present -> "<<checkPermutation(s1,s2);
    return 0;
}