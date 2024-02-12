/*
Problem Statement: You are given an array of prices where  prices[i] is the price of a given stock
on an ith day. You want to maximize your profit by choosing a single day to buy one stock and 
choosing a different day in the future to sell that stock. Return the maximum profit you can 
achieve from this transaction. If you cannot achieve any profit, return 0.
*/
#include<bits/stdc++.h>
using namespace std;


// Bruteforce approach  TC : O(n**2), SC : O(1)
int maxProfit(vector<int> &arr) {
    int maxprof=INT_MIN, sum=0, n=arr.size();
    for(int i=0; i<n; i++) {
        int minsp=arr[i];
        for(int j=i+i; j<n; j++) {
           if(arr[j]>minsp) {
             int prof= arr[j]-minsp;
             maxprof=max(maxprof,prof);
           }
        }
    }
    return maxprof;
}


// Optimal Solution TC : O(n) , SC: O(1)
int maxProfit(vector<int> &arr) {
    int maxprof = 0, sum=0, n=arr.size(), minsp=arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i]>minsp) {
            int prof=arr[i]-minsp;
            maxprof=max(prof,maxprof);
        }
        minsp=min(arr[i],minsp);
    }
    return maxprof;
}

/* Practice problem links
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
https://www.codingninjas.com/studio/problems/893405?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website




*/