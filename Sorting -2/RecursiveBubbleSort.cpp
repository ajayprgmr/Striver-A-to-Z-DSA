#include<bits/stdc++.h>
using namespace std;
void BubbleSort(int arr[], int N) {
    if(N==1) return;
    // One pass of the bubble Sort to move the largest element to the end
    for(int i=0; i<N-1; i++) {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    // Recursive call to BubbleSort for remaining array
    BubbleSort(arr, N-1);
}
