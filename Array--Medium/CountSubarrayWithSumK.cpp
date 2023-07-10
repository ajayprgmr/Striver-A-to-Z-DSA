/*
Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.
A subarray is a contiguous non-empty sequence of elements within an array. 
Note: duplicated are allowed.
*/

#include<bits/stdc++.h>
using namespace std;


//Bruteforce: O(N**3) 
 int subarraySum(vector<int>& nums, int k) {
    int ans;
    int n=nums.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            int tsum=0;
            for(int k=i; k<=j; k++) {
                tsum+=nums[i];
            }
            if(k==tsum) ans++;
        }
    }
    return ans;
 }


// Better Solutioin O(N**3) 
int subarraySum(vector<int>& nums, int k) {
     int ans=0;
     int n=nums.size();
     for(int i=0; i<n; i++) {
        int tsum=0;
        for(int j=i; j<n; j++) {
            tsum+=nums[j];
            if(k==tsum) ans++;
        }
    }
    return ans;
 }


//Optimal Solution O(N), SC: O(N)
 int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumFreq;  // stores cumulative sum frequencies
        int count = 0;  // count of subarrays with sum equals to k
        int sum = 0;  // current cumulative sum
        
        sumFreq[0] = 1;  // initialize with a sum of 0
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            
            // Check if there is a subarray ending at index i with sum k
            if (sumFreq.find(sum - k) != sumFreq.end())
                count += sumFreq[sum - k];
            
            // Increment the frequency of the current sum
            sumFreq[sum]++;
        }
        
        return count;
}