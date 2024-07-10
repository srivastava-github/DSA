#include <bits/stdc++.h>
using namespace std;

int maxBit(vector<int> v){
    int maxbits = INT_MIN;
    for(int i = 0; i < v.size(); i++){
        int num = v[i];
        int bits = 0;
        while(num > 0){
            num >>=1;
            bits++;
        }
        maxbits = max(bits, maxbits);
    }
    return maxbits;
}

int removeElements(vector<int> &v){
    int maxbit = maxBit(v),i;
    cout<<"Maxbit : "<<maxbit<<endl;
    int count = 0;
    vector<int> temp =v;
    for(i = 0; i <= maxbit; i++){
        int bit = 0;
        for(int j = 0; j < v.size(); j++){
            if(temp[j]>0){
                bit |= (temp[j]&1);
                temp[j]>>=1;
            }
        }
        cout<<"bit at iteration "<<i+1<<" : "<<bit<<endl;
        if(bit == 0){
            break;
        }
    }
    int maxi = (i>0)? pow(2,i) : 0;
    cout<<"Maxi : "<<maxi<<endl;
    for(int j = 0; j < v.size(); j++){
        if(v[j]>maxi){
            count++;
        }
        cout<<"Count at Iteration "<< j+1<<" : "<<count<<endl;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t-- > 0){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        cout << removeElements(v) << endl;
    }
    return 0;
}