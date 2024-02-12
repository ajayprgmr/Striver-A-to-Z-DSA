#include<bits/stdc++.h>
using namespace std;
/* bruteforce O(nlogn) solution but but the way this solution is presented
it will wokr for all the cases */
int print2largest(int arr[], int n) {
    sort(arr,arr+n);
    int largest=arr[n-1];
    for(int i=n-2; i>=0 ;i--) {
        if(arr[i]!=largest)
        return arr[i];
    }
    return -1;
}

/*better solution than above on it takes  O(2N) but yeah this is also 
a good solution becuase it does work for duplicates also. */
int print2largest(int arr[], int n) {
     int largest=arr[0];

     for(int i=1; i< n; i++) {
        if(arr[i]>largest) {
            largest=arr[i];
        }
     }

     int secondlargest=INT_MIN;
     for(int i=0; i<n; i++) {
        if(arr[i]>secondlargest && arr[i]!=largest) {
            secondlargest= arr[i];
        }
     }
     return secondlargest;
     if(secondlargest==INT_MIN) return -1;
}
/* Better than solution using max heap it will take O(N)*/
int print2largest(int arr[], int n) {
    
    priority_queue<int> pq;  // by default max heap
    
}

/* Optimal solution is below this solution is valuable  */
int print2largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // If second largest was not updated, there is no second largest
    if (second_largest == INT_MIN) {
        return -1;
    }

    return second_largest;
}
