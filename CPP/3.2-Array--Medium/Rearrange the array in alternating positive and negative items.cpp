/*
There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.
Without altering the relative order of positive and negative elements, you must return an 
array of alternately positive and negative values.
Note: Start the array with positive elements.
*/
#include<bits/stdc++.h>
using namespace std;

 // Bruteforce Approach O(2N) , SC: 
vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> pos, neg;
     for(int i=0; i<nums.size(); i++) {
         if(nums[i]>0) {
             pos.push_back(nums[i]);
         }
         else {
             neg.push_back(nums[i]);
         }
     }
     for(int i=0; i<pos.size(); i++) {
         nums[2*i] = pos[i];
         nums[2*i+1]=neg[i];
     }
     return nums;
}


// Optimal Solution for the above variety of problem where no. of neg ele == no. of pos. ele.
vector<int> rearrangeArray(vector<int>& nums) {
     int n=nums.size();
     vector<int> res(n,0);
     int negInd=1, posInd=0;
     for(int i=0; i<n; i++) {
        if(nums[i]>0) {
            res[posInd]=nums[i];
            posInd+=2;
        }
        else {
            res[negInd]= nums[i];
            negInd+=2;
        }
     }
     return res;  
}
//...........................................................................................................................................

/* There’s an array ‘A’ of size ‘N’ with positive and negative(pos elemens === neg elements). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements 
   should be placed at the very end in the same order as in array A.

Note: Start the array with positive elements.
*/
vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg;
    int n=nums.size();
    // Store the positive and negatives in the corresponding declared vector.
    for(int i=0; i<n; i++) {
        if(nums[i]>0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }
     
    // When no. of elements in the pos is more than no. of elements in the neg
    if(pos.size()>neg.size()) {
        int i=0;
        while(i<neg.size()) {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
            i++;
        }
    // appending extra remaining elements in the pos vector.
        int index=neg.size() *2;
        while (index<n)
        {
            nums[index]=pos[i];
            index++, i++;
        }    
    }
    // When no. of elements in the pos is lesser than the no. of elements in the neg.
    else {
        int i=0;
        while(i<pos.size()) {
            nums[2*i] = pos[i];
            nums[2*i+1] = neg[i];
            i++;
        }
    // appending extra remaining elements in the neg vector.
        int index=pos.size() *2;
        while (index<n)
        {
            nums[index]=neg[i];
            index++, i++;
        }    
    }
    return nums;
}
