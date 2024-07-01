#include <bits/stdc++.h>

using namespace std;
int fact (int n){
    int a=1;
    for(int i=1;i<=n;i++){
        a*=i;
    }
    return a;
}

int nCr (int n,int r){
    int n1=fact(n),r1=fact(r),n_r1=fact(n-r);
    return n1/(r1*n_r1);
}

int main() {
    int n,r,ans;
    cout<<"Enter the values of n and r : ";
    cin>>n>>r;
    ans=nCr(n,r);
    cout<<"The value of nCr is : "<<ans<<endl;
    return 0;
}