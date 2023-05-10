#include<bits/stdc++.h>
using namespace std;
//bruteforce approach time complexity big-oh of n^3 its like generating all the substring and checking 
// This solution works all types of inputs whether a[i] is >0 or =0 or <0  but this is bruteforce.
int maxsubarrayposk(vector<int>&v, int target){
    int best=0;
    int n=v.size();
    for(int i=0;i<n;i++){

        for(int j=i;j<n; j++){
            int sum=0;

            for(int k=i;k<=j;k++){ 
                sum=sum+v[k]; 
            }
            if(sum==target)    // after summing the subarray from [i-------------j] checking, it's equal to target or not.
             best=max(best,j-i+1);
        }
    }
    return best;

}

// second approach after bruteforce  is in O(n**2) but wait this is also works for all types of int input
int maxsubarrayposk(vector<int>&v, int k){
    int best=0;
    int n=v.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n; j++){
            sum=sum+v[j];
            if(sum==k)
            best=max(best, j-i+1);
        }
    }
    return best;

}
// this is optimal solution using two pointer approach

int maxsubarrayposk(vector<int>&v, int k){
   int best=0, left=0, right=0 ,sum=0, n=v.size();
    while( right < n){

        sum=sum+v[right];
        if(sum==k)
        best=max(best,right-left+1);

        while(left<=right && sum>k){
            sum=sum-v[left];
            if(sum==k)
            best=max(best,right-left+1);
            left++;
        }

        right++;
    }             
    return best;

}