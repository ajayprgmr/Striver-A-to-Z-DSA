#include<bits/stdc++.h>
using namespace std;
 /* When array is almost sorted then Insertion Sort in prefered*/
 // Pure Insertion Sort
void InsertionSort(int arr[], int N) {
    for(int i=0; i<N; i++) {
        int j=i;
        // Swaping till inorder is found from each index i.
        while(j>0 && arr[j-1]>arr[j]) {
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}