#include <bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars) {
    int i=0; //trversing the vector
    int c=0; //index for new array;
    while(i<chars.size()){
        int j=i+1;
        while(j<chars.size() && chars[i]==chars[j]){
            j++;
        }
        chars[c++]=chars[i];
        int count = j-i;
        if(count>1){
            string ch = to_string(count);
            for(char k : ch){
                chars[c++]=k;
            }
        }
        i=j;
    }
    return c;
}
int main() {
    vector <char> chars = {'a','a','a','b','c','c','d','e','e','e'};
    int n = compress(chars);
    cout<<n<<" : Array-> ";
    for(int i=0;i<n;i++){
        cout<<chars[i]<<" ";
    }cout<<endl;
    return 0;
}