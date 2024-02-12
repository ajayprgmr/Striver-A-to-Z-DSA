/*
Problem Statement: Given a sorted array of N integers and an integer x, write a program to find the lower bound of x.
smallest index such that ele(i)>=x
*/

#include<bits/stdc++.h>
using namespace std;

// Bruteforce  TC : O(N)
int lowerBound(vector<int> arr, int n, int x) {
	for(int i=0; i<n; i++) {
		if(arr[i]>=x) return i;
	}

}

// Optimal Approach TC : O(Logn) SC: O(1)
int BS(int low, int high, int x, vector<int>& arr) {
    int ans = INT_MAX;
    while (low <= high) {  
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {  // this mid can be the ans let me go to the lower indexes
			        ans = min(ans, mid);
            high = mid-1;  // and here i am going to lower indexes
        }
        else {
            low = mid+1;
        }
    }
   if(ans==INT_MAX) return arr.size();
   else return ans;
}
int lowerBound(vector<int> arr, int n, int x) {
    return BS(0, n - 1, x, arr);
}
