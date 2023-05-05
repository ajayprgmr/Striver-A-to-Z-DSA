#include<bits/stdc++.h>
using namespace std;
//bruteforce approach time complexity big-oh of n^3 its like generating all the substring and checking 
int maxsubarrayposk(vector<int>&v, int target){
    int best=0;
    int n=v.size();
    for(int i=0;i<n;i++){

        for(int j=i;j<n; j++){
            int sum=0;

            for(int k=i;k<=j;k++){ 
                sum=sum+v[k]; 
            }
            if(sum==target)    // after summing the subarray from i-------------j checking, it's equal to target or not.
             best=max(best,j-i+1);
        }
    }
    return best;

}

// second approach after bruteforce  is in O(n**2)
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

// optimal solution which is O(n) time complexity

