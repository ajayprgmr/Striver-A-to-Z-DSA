#include<bits/stdc++.h>
using namespace std;
//LeetCode  Linear TC
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr=nums[0];
        for(int i=1;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
       return xorr;
    }
};

//gfg array is sorted TC is logn (binary search)
class Solution {
public:
    int search(int A[], int N){
        int left = 0, right = N - 1;
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (A[mid] == A[mid ^ 1]) { // even^1 = even+1; and odd^1= odd-1;
                left = mid + 1;
            } else {
                right = mid;
            }
        }
        return A[left];
    }
};

// one more solution for the sorted array and find element that appears once. kind of binary search

class Solution{
public:	
	int search(int A[], int N){
	    int left = 0, right = N-1, mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1]) {
                return A[mid];
            }
            if (A[mid] == A[mid - 1]) {
                if ((mid - left + 1) % 2 == 0) {
                    left = mid + 1;
                }
                else {
                    right = mid - 2;
                }
            }
            else {
                if ((right - mid + 1) % 2 == 0) {
                    right = mid - 1;
                }
                else {
                    left = mid + 2;
                }
            }
        }
        return -1;
	}
};

