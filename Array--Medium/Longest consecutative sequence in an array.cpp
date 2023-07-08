/*
Problem Statement: You are given an array of ‘N’ integers. You need to find the length of the longest sequence 
which contains the consecutive elements.
*/
#include<bits/stdc++.h>
using namespace std;



//Bruteforce Solution


int longestConsecutive(vector<int> nums) {
        // if no elements are there in the nums return 0
        if(nums.size() == 0 ){
            return 0;
        }
        // sort the nums
        sort(nums.begin(),nums.end());
        
        // becuase we have passed through empty array the min 1 answer is guaranteed
        int ans = 1;
        int prev = nums[0];
        int cur = 1;  // it will keep track of current consecutive streak
        
        for(int i = 1;i < nums.size();i++){

            // if nums[i] = = pre +1 then increment cur
            if(nums[i] == prev+1){
                cur++;
            }
            //  if pre and nums[i] are not equal then set  cur streak to 1 don't bother about repeated elements 
            // whenever the 1 gap will come between nums[i] and pre that only will be counted and other repeated elements
            // will be igonred.
            else if(nums[i] != prev){
                cur = 1;
            }
            // before going to next iteration update the pre
            prev = nums[i];
            // take everytime max between ans and cur
            ans = max(ans, cur);
        }
        return ans;
}


// Optimal Solution
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0, n = nums.size();
        if (n == 0) return 0;
        unordered_map<int, int> um;
        for (int i = 0; i < n; i++) {
            um[nums[i]] = 1;
        }

        for (int i = 0; i < n; i++) {
            if (um.find(nums[i] - 1) == um.end()) {  // Check if the number has a smaller adjacent number
                int curNum = nums[i];
                int curStreak = 1;

                while (um.find(curNum + 1) != um.end()) {
                    curNum++;
                    curStreak++;
                }

                ans = max(ans, curStreak);
            }
        }

        return ans;
    }
};
    
