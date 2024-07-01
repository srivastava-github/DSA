#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,prod=1,sum=0,temp;
    cout<<"Enter a number : ";
    cin>>n;
    temp=n;
    while(temp){
        sum+=temp%10;
        prod*=temp%10;
        temp/=10;
    }
    cout<<"The sum of digits of "<<n<<" is "<<sum<<endl;
    cout<<"The product of digits of "<<n<<" is "<<prod<<endl;
    cout<<"The difference between sum and product of the digits of "<<n<<" are "<<abs(sum-prod)<<endl;
    return 0;
}