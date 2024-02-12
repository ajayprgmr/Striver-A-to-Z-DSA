#include<bits/stdc++.h>
using namespace std;
void ReverseAraay(int arr[], int left, int right) {
    if(left>=right)  return ;
        else {
            swap(arr[left], arr[right]);
            ReverseAraay(arr, left+1, right-1);
        }   
}