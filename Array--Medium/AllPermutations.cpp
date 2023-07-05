#include<bits/stdc++.h>
using namespace std;

// Finding All the permutaitons using Recursion TC : O(N!*N), SC : O(1)
void Rec_allpermutations(int index, vector<int> & nums, vector<vector<int>>& res ) {
  //if index becomes equals to the size of nums then push the result and return.
  if(index==nums.size()) {
    res.push_back(nums);
    return ;
  }
  else {
    for(int i=index; i<nums.size(); i++) {
     // swaping index and i
      swap(nums[index], nums[i]);
      // call recursion for next
      Rec_allpermutations(index+1, nums, res);
      // again swap for next
      swap(nums[index], nums[i]);
    }
  }
}


