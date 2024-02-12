#include<bits/stdc++.h>
using namespace std;
// Left Rotate by K || rotate by K by default left rotate.
// This is index based approach
void LeftRotateByK(int arr[], int N, int K) {
  K=K%N;
  // Reverse Whole Array
  for(int i=0; i<N/2; i++) {
    swap(arr[i], arr[N-1-i]);
  }
  // Reverse initial K elements of the Array
  for(int i=0; i<K/2; i++) {
    swap(arr[i], arr[K-1-i]);
  }
  //Reverse Remaining N-K elements of the array
  for(int i=K; i<(N+K)/2; i++) {
    swap(arr[i], arr[N+K-1-i]);
  }
}

// Pointer based approch
void LeftRotateByK(vector<int> & arr, int N, int K) {
  K=K%N;
  reverse(arr.begin(), arr.end());
  reverse(arr.begin(), arr.begin()+K);
  reverse(arr.begin()+K, arr.end());

}