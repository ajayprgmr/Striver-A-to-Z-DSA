#include<bits/stdc++.h>
using namespace std;
// Pure Bubble Sort, it is also called light weight Sorting algorithm
void BubbleSort(int arr[], int N) {
    for(int i=0; i<N-1; i++) {
        for(int j=0; j<N-1-i; j++) {  // here decreasing loop size by one in each iteration is major step.
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
    }
}

// K passes of Bubble Sort
void BubbleSort(int arr[], int N, int K) {
    for(int i=0; i<K; i++) {
        for(int j=0; j<N-1-i; j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}