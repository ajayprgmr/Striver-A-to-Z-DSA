#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[], int N) {
    for(int i=0; i<N-1; i++) {
        int mini=i;
        for(int j=i+1; j<N; j++) {
             if(arr[j]<arr[mini]) mini=j;
        }
          // here we can one extra check that if arr[i]!=arr[min] then only go into swap block else go next.
             int temp=arr[i];
             arr[i]=arr[mini];
             arr[mini]=temp; 
    }
}

// K passes of Selection Sort
void SelectionSort(int arr[], int N, int K) {
    for(int i=0; i<K; i++) {
        int mini=i;
        for(int j=i+1; j<N; j++) {
             if(arr[j]<arr[mini]) mini=j;
        }
          // here we can one extra check that if arr[i]!=arr[min] then only go into swap block else go next.
             int temp=arr[i];
             arr[i]=arr[mini];
             arr[mini]=temp; 
    }
}
