#include<bits/stdc++.h>
using namespace std;

/* Bruteforce thinking but yeah still TC  is  big-oh of n only 
   This is also a valid and good solution */
void sort0s1s2s(vector<int>&nums){
    int zeros= 0;
    int ones= 0;
    int twos= 0;

    for(int i=0; i< nums.size() ; i++){
        if(nums[i]==0) zeros++;
        else if(nums[i]==1) ones++;
        else twos++;
    }
    for(int i=0; i<nums.size(); i++) {

        if(i<zeros)
        nums[i]=0;
        else if(i>=zeros && i<ones+zeros) 
             nums[i]=1;
             else
             nums[i]=2;
    }
}



/*  Another approach using Dutch National flag algorithm uses three
    pointers in which we can do this in a single loop
    This is an optimal Solution with TC: O(n) and SC: O(1) */
void sortArray(vector<int>& arr, int n) {

    int low = 0, mid = 0, high = n - 1; // 3 pointers

    while (mid <= high) {
        if (arr[mid] == 0) {  // play only on mid
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {   // playing only on mid
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
