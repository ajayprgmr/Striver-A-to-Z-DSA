#include<bits/stdc++.h>
using namespace std;

//gfg
void pushZerosToEnd(int arr[], int n) {
	   int left = 0, right = 0;
        while (right < n) {
            if (arr[left] == 0 && arr[right] != 0) {
                swap(arr[left], arr[right]);
                left++;
            }
            if (arr[left] != 0) {
                left++;
            }
            right++;
        }
}


//LeetCode
//Method 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int count=0;
       for(auto it=nums.begin();it!=nums.end();){
           if(*it==0){
               it = nums.erase(it);
               count++;
           } else {
               it++;
           }
       }
       nums.insert(nums.end(),count,0);
    }
};

//Method 2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = count_if(nums.begin(), nums.end(), [](int n){ return n == 0; });
        nums.erase(remove(nums.begin(),nums.end(),0),nums.end());
        nums.insert(nums.end(),count,0);
    }
};



