#include<bits/stdc++.h>
using namespace std;
bool StringPalindrome(string s, int left, int right) {
    if (left >= right) {
        return true;
    }
    else {
        if (s[left] == s[right]) {
            return StringPalindrome(s, left + 1, right - 1);
        }
        else {
            return false;
        }
    }
}
