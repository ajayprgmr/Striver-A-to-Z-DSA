/*
Problem Statement: Given an array containing both positive and negative integers, we have to find the
 length of the longest subarray with the sum of all elements equal to zero.
*/

#include<bits/stdc++.h>
using namespace std;

// Brutroce TC: O(N**2)
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int n=arr.size(), best=0;
	for(int i=0; i<n; i++) {
		int tsum=0;
		for(int j=i; j<n; j++) {
			tsum+=arr[j];
			if(tsum==0) {
				best=max(best, j-i+1);

				}
			}
	}
	return best;
}


// optimal using hashmap TC : Nlogn
int getLongestZeroSumSubarrayLength(vector<int> &arr) {
    int n = arr.size();
     int best=0, tsum=0;
	 unordered_map<int,int>mpp;
	 for(int i=0; i<n; i++) {
		tsum = tsum+arr[i];
		if(tsum==0) {
			best = i+1;
		} 
		else {
			if(mpp.find(tsum)!=mpp.end()) {
				best = max(best, i- mpp[tsum]);
			}
			else {
				mpp[tsum] = i;
			}
		  
		}

	 }

    return best;
}
