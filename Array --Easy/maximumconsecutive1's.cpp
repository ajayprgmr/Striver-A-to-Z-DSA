#include<bits/stdc++.h>
using namespace std;

//geekforgeeks

//bruteforce solution
class Solution{
public:
    // m is maximum of number zeroes allowed to flip
    // n is size of array
    int findZeroes(int arr[], int n, int m) {
        int res=0;
        for(int i=0; i<n; i++) {
            int countZeros=0;
            for(int j=0; j<n; j++) {
                if(arr[j] == 0) countZeros++;
                if(countZeros<=m){
                    if(j-i+11>=res) res=j-i+1;
                }
            }
        }
        return res;
        
    }  
};
//optimized O(n)
class Solution{
public:
    int findZeroes(int arr[], int n, int m) {
        int left = 0, right = 0, zeros = 0, maxOnes = 0;
        while (right < n) {
            if (arr[right] == 0) {
                zeros++;
            }
            while (zeros > m) {
                if (arr[left] == 0) {
                    zeros--;
                }
                left++;
            }
            maxOnes = max(maxOnes, right - left + 1);
            right++;
        }
        return maxOnes;
    }
};




// LeetCode count maximum consecutive 1's
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int best=0;
        for( int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                best=max(best,count);
            }
            else{
                   count=0;
            }
        }
        return best;
    }
};
