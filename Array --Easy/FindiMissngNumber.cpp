
//gfg
#include<bits/stdc++.h>
using namespace std;
int missingNumber(int A[], int N)
{
    int sum=0;
    for(int i=0;i<N-1;i++)
    sum+=A[i];
   return N*(N+1)/2 -sum;    
}

//Leetcode 
class Solution {
public:
    int missingNumber(vector<int>& nums) {
         int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        int  tsum=(n+1)*n/2;
        return tsum-sum;
    }
};