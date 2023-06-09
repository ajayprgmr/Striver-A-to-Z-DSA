#include<bits/stdc++.h>
using namespace std;
// two sum varient 1 where we have to return "YES" or "NO"
//Brueforce
string TwoSum(vector<int> &nums, int target){
    int n=nums.size();
      for(int i=0; i<n ; i++ ) {
             for(int j=i+1; j<n; j++){

                if(nums[i]+ nums[j] == target)
                return "YES";
             }
      }
      return "NO";
}


// sort and use binary seach for each element it is also like bruteforce. (nlgon)
string TwoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        int left = i + 1, right = nums.size() - 1;
        
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == complement) {
                return "YES";
            } else if (nums[mid] < complement) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    
    return "NO";
}

// better one (nlong)
string TwoSum(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return "YES";
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return "NO";
}

// optimal solution using hashmap

string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

// second version when we have return indexes of the pair if found and if not reutrn {-1,-1}
pair<int,int> twoSum(vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < arr.size(); i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {i, mpp[moreNeeded]};
        }
        mpp[num] = i;
    }
   
    return  {-1, -1};
}
