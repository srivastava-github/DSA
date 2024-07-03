/*Task is to reverse the oredr of words in a string
 Example :
 Input : 'The sky is blue in Colour'
 Output : 'Colour in blue is sky The'

Approach:
We will first reverse all the letters in every word and then reverese the whole strinhg*/

#include <bits/stdc++.h>

using namespace std;

//Function to reverse a string from i-th index to j-th index
//will be used to reverse the words
void reverse (string &s, int i, int j){
    while(i<j){
        swap(s[i++],s[j--]);
    }
}

//Function to reverse the order of words
void revWords (string &s){
    int a=-1,i=0; //variable 'a' will mark the begining index for each word and variable 'i' will be used to traverse through the string
    while(i<s.size()){
        if((a==-1)&&(s[i]!=' ')){
        /*'a' will be set to -1 whenever a word ends and in the next iteration if we find a non-space character then
        we know it is a begining of another word hence we set 'a' to that value of the iterator variable*/
            a=i;
        }
        if((a!=-1)&&(s[i+1]==' ')||(s[i+1]=='\0')){
            /*if the next iteration (i+1) is going to give a space or end of string then we know that the word has ended
            hence we reverse the word using reverse function and set 'a' to -1 again*/
            reverse(s,a,i);
            a=-1;
        }
        i++;
    }
    reverse(s,0,s.size()-1); //reversing the whole string
}

int main() {
    string str;
    cout<<"Enter a sentence : ";
    getline(cin,str);
    revWords(str);
    cout<<"Your sentence is reversed :"<<endl<<str;
    return 0;
}