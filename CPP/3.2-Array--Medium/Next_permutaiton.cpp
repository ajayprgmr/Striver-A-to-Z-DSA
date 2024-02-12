/*
next_permutation : find next lexicographically greater permutation
Problem Statement: Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).
*/

#include<bits/stdc++.h>
using namespace std;

// Bruteforce Solution TC : O(N!*N), SC: O(N) -->Stack Space.
vector<int> nextPermutation(int N, vector<int> arr) {
     void allPermutations(int index, vector<int>& arr, vector<vector<int>>& res) {
        if (index == arr.size()) {
            res.push_back(arr);
            return;
        } else {
            for (int i = index; i < arr.size(); i++) {
                swap(arr[i], arr[index]);
                allPermutations(index + 1, arr, res);
                swap(arr[i], arr[index]);
            }
        }
    }

    vector<int> nextPermutation(int N, vector<int>& arr) {
        vector<vector<int>> res;
        vector<int> ans;
        allPermutations(0, arr, res);
        sort(res.begin(), res.end());
        for(auto it=res.begin(); (++it)!=res.end(); ++it) {
            if(*it == arr) {
                ans= * (++it);
                return ans;
            }
        }
        reverse(arr.begin(), arr.end());
        return arr;
        
        
    }

}



// Better approach using built in stl function next_permutation() 
 vector<int> nextPermutation(int N, vector<int> arr){
        vector<int>t;
        t=arr;
        next_permutation(t.begin(), t.end());
        return t;
}


// Optimal Solution TC : O(N), SC: O(N)
 vector<int> nextPermutation(int N, vector<int> arr){
        int index=-1;
        for(int i=N-1; i>=1; i--) {
            if(arr[i-1]<arr[i]) {
                index=i-1;
                break;
            }
        }
        if(index==-1) {
            reverse(arr.begin(), arr.end());
            return arr;
        }
        for(int i=N-1; i>=0; i--) {
            if(arr[i]>arr[index]) {
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1, arr.end());
        return arr;
}