#include <bits/stdc++.h>

using namespace std;

int getSize(char str[]){
    int count =0;
    for(int i=0;str[i]!='\0';i++){
        count ++;
    }
    return count;
}

bool checkPalindrome (char str[]){
    int s=0, e=getSize(str)-1;
    while(s<e){
        if(str[s++]!=str[e--]) return false;
    }
    return true;
}

int main() {
    char str[20];
    cout<<"Enter a string : ";
    cin >> str;
    cout<<"String is Plaindrome : "<< checkPalindrome(str);
    return 0;
}