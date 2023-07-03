#include<bits/stdc++.h>
using namespace std;
void insert(int arr[], int i) {
        for(int j=1;j<i;j++) {
            if(arr[j]<arr[j-1]) {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
//Function to sort the array using insertion sort algorithm.
void InsertionSort(int arr[], int N) {
        if(N==1)
        return;
        else
        insert(arr,N);
        InsertionSort(arr,N-1);
}