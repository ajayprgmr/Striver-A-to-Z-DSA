/*Problem Statement: Given an integer array arr, find the contiguous subarray (containing at least one number) which
has the largest sum and returns its sum and prints the subarray.*/
// Brutforce using three loops its kind of generating all the substrings
#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int best=INT_MIN;  // initializing sum as min as possible
    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {

             // initializing one var sum to calculate  sum of
             // arr[i----------j]
            int sum=0;  
            for(int k=i; k<=j; k++) {
                sum+=arr[k];
            }

            best=max(best,sum);  // choosing max between [i------j] sum and best available.

        }
    }
    return best;
}

// Better approach be like big-oh of n square.


int maxSubarraySum(int arr[], int n){
    int best=INT_MIN;  // initializing sum as min as possible
    for(int i=0; i<n; i++) {
            int sum=0;  
            for(int j=i; j<n; j++) {
                sum+=arr[j];
                 best=max(best,sum);  // choosing max between [i------j] sum and best available.
            }
        }
    return best;
}

// Now kanade's algorithm


int maxSubarraySum(int arr[], int n){

    int maxsum=INT_MIN,sum=0;
    for(int i=0; i<n; i++) {
        sum+=arr[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
   return maxsum;
}


    
