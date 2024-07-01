#include <bits/stdc++.h>

using namespace std;

int fibTerm(int n){
    int a=0,b=1,c;
    if(n==1){return a;}
    else if(n==2){return b;}
    else{
        for(int i=3;i<=n;i++){
            if(i%2==0){
                b+=a;
                c=b;
            }
            else{
                a+=b;
                c=a;
            }
        }
        return c;
    }
}

int main() {
    int num;
    cout<<"Enter the value of the number of the term of fibonacci series you want : ";
    cin>>num;
    cout<<"The "<<num<<"-th term of the fibonacci series is : "<<fibTerm(num)<<endl;
    return 0;
}