/*#include <bits/stdc++.h>

using namespace std;

void removeSubstr (string &s, string &part){
    int len=part.length();
    string str="",temp="";
    for(int i=0; i<s.length(); i++){
        str=s.substr(i,len);
        if(str!=part){
            temp+=s[i];
        }
        else{
            i+=(len-1);
        }
    }
    cout<<temp<<endl;
}

int main() {
    string s, part;
    cin>>s>>part;
    removeSubstr(s,part);
    return 0;
}*/

#include <bits/stdc++.h>

using namespace std;

void removeSubstr(string &s, string &part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
}

int main() {
    string s, part;
    cin>>s>>part;
    removeSubstr(s,part);
    cout<<s<<endl;
    return 0;
}