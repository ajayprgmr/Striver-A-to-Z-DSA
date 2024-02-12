/*
Count the number of subarrays with given xor K Problem Statement: Given an array of 
integers A and an integer B. Find the total number of subarrays having bitwise XOR of all 
elements equal to k.
*/
#include<bits/stdc++.h>
using namespace std;

// Better solution O(N**2)
int subarraysWithSumK(vector < int > a, int b) {
    // Write your code here
    int cnt=0;
    int n=a.size();
    for(int i=0; i<n; i++) {
        int xr=0;

        for(int j=i; j<n; j++) {
            xr=xr^a[j];
            if(xr==b) cnt++;
        }
    }
    return cnt;
}


// Optimal Solution TC : o(N) , SC : O(N)
int subarraysWithXorK(vector<int> a, int k) {
    int n = a.size(); //size of the given array.
    int xr = 0;
    map<int, int> mpp; //declaring the map.
    mpp[xr]++; //setting the value of 0.
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        // prefix XOR till index i:
        xr = xr ^ a[i];

        //By formula: x = xr^k:
        int x = xr ^ k;

        // add the occurrence of xr^k
        // to the count:
        cnt += mpp[x];

        // Insert the prefix xor till index i
        // into the map:
        mpp[xr]++;
    }
    return cnt;
}
