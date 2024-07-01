#include <bits/stdc++.h>

using namespace std;

void printArray(vector <int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }cout<<endl;
}

void reverseVect (vector <int> &v){
    int i=0,j=v.size()-1;
    while(i<j){
        swap(v[i++],v[j--]);
    }
}

vector <int> addVectors(vector <int> &v1, vector <int> &v2){
    vector <int> v3;

    int i=v1.size()-1, j=v2.size()-1,c=0;
    while(i>=0 && j>=0){
        v3.push_back((v1[i]+v2[j]+c)%10);
        if ((v1[i--]+v2[j--])/10) c=1;
        else c=0;
    }
    while(i>=0){
        v3.push_back((v1[i]+c)%10);
        if((v1[i--]+c)/10) c=1;
        else c=0;
    }
    while(j>=0){
        v3.push_back((v2[i]+c)%10);
        if((v2[j--]+c)/10) c=1;
        else c=0;
    }
    if(c==1){
        v3.push_back(1);
    }
    reverseVect(v3);
    return v3;
}

int main() {
    vector <int> v1,v2,v3;
    int n1,a1,n2,a2;
    cin>>n1;
    for(int i=0;i<n1;i++){
        cin>>a1;
        v1.push_back(a1);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>a2;
        v2.push_back(a2);
    }
    v3=addVectors(v1,v2);
    printArray(v3);
    return 0;
}