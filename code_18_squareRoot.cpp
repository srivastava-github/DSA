#include <bits/stdc++.h>

using namespace std;

int sqrtInt(int n){
    int s=0, e=n, a=0;
    int m= s+(e-s)/2;
    while(s<=e){
        long long int sq =m*m;
        if (sq>n){
            e=m-1;
        }
        else{
            a=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return a;
}

double Root(int n, int precision, int sqint){
    double factor=1,ans=sqint;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans; j*j<=n;j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main() {
    int a[1000],n, p;
    double sq[1000];
    cout<<"Enter number of numbers : ";
    cin>>n;
    cout<<"Enter precision : ";
    cin>>p;
    for(int i=0; i<n; i++){
        a[i]=i+1;
        sq[i]=Root(a[i],p,sqrtInt(a[i]));
        cout<<a[i]<<" -> "<<sq[i]<<endl;
    }
    return 0;
}