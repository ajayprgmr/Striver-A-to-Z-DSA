#include<bits/stdc++.h>
using namespace std;
// Mathematical approach , but it will work for <=10 digits max
string is_palindrome(int n) {
    int Nodig=floor(log10(abs(n)))+1;   // calculating number of digits in n using log formula
    int temp = n; // making copy of n
    int l= Nodig-1 , r= 0 ;
    while(l>=r) {
        int leftd = (temp/ int(pow(10,r)))%10;
        int rightd= (temp/ int(pow(10,l))) %10;

        if(leftd==rightd) {
            l--, r++;
        }
        else {
            return "No";
        }
    }
}
// using to_string function of STL C++
string is_palindrome (int n) {
    string s=to_string(n);
    int l=0, r=s.size()-1;
    while(l<=r) {
        if(s[l]!=s[r]){
            return "No";
        }
        l++, r--;
    }
    return "yes";
}