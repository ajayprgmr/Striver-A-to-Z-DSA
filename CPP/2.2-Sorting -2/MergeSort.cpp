#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[], int Low, int Mid, int High) {
    vector<int>temp;
    int left=Low, right= Mid+1;
    while (left<=Mid && right<=High) {
        if(arr[left]<=arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        } 
    }
    // Left side remaining element
    while(left<=Mid) {
        temp.push_back(arr[left]);
        left++;
    }
   // Right Side remaining elements
   while(right<=High) {
        temp.push_back(arr[right]);
        right++;
   }
   for(int i=Low; i<=High; i++) {
        arr[i]=temp[i-Low];
   }
}
void MergeSort(int arr[], int Low, int High) {
    if(Low>=High)  return;
    else {
        int mid= Low + ( High - Low )/2;
        MergeSort(arr, Low, mid);
        MergeSort(arr, mid+1, High);
        Merge(arr,Low, mid, High);
    }
}