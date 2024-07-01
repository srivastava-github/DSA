#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,comp=0,i=0;
    cout<<"Enter a number : ";
    cin>>n;
    int mask=0;
    int temp=n;
    do{
        mask=(mask<<1)|1;
        temp=temp>>1;
    }while(temp!=0);
    int ans=(~n)&mask;
    cout<<ans<<endl;
    return 0;
}