#include <bits/stdc++.h>

using namespace std;

void changeSpaces(string &s){
    int i=0;
    string str="";
    vector <string> ans;
    while(i<s.length()){
        if(s[i]==' '){
            if(!str.empty()){
                ans.push_back(str);
                str.clear();
            }
            ans.push_back("@40");
        }
        else{
            str+=s[i];
        }
        i++;
    }
    ans.push_back(str);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }cout<<endl;
}

int main() {
    string str;
    getline(cin,str);
    changeSpaces(str);
    return 0;
}