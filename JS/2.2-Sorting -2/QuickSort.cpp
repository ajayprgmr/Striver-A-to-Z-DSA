#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[], int low, int high) {
    int i=low;
    int x=arr[low];
    for(int j=low+1; j<=high; j++) {
        if(arr[j]<=x) {
             i++;
         // swap arr[i] and arr[j]
             int temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
        }
    }
    // swaping assumed pivot and real pivot that is found
    int temp=arr[i];
    arr[i]=arr[low];
    arr[low]=temp;
    // returning pivot index 
    return i;
}
void QuickSort(int arr[], int low, int high) {
    if(low>=high) return;
    else {
        int pivot=Partition(arr, low, high);
        QuickSort(arr, low, pivot-1);
        QuickSort(arr, pivot+1, high);
    }
}