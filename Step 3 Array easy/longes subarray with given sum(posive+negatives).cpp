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

// optimal solution which is O(n) time complexity 
// This solution will work for positives and negatives but array should not contain zeros.

int maxsubarrayposk(vector<int>&v, int k){
    int best=0;
    map<int,int> presum;
    int n=v.size();
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum==k)
        best=max(best,i+1);

        int rem=sum-k;
        if(presum.find(rem)!=presum.end()){
            best=max(best,i-presum[rem]);
        }

        if(presum.find(sum)==presum.end()){
            presum[sum]=i;
        }
        
    }
    return best;   
}


