/*
Problem Statement: Given an array of N integers, your task is to find unique triplets that add up to 
give a sum of zero. In short, you need to return an array of all the unique triplets [arr[a], arr[b],
 arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.
*/
#include<bits/stdc++.h>
using namespace std;

// Bruteforce TC: O(N**3).logM | SC: O(N)
vector<vector<int>> triplet(int n, vector<int> &arr) {
    set<vector<int>>st;
    for(int i=0; i<n; i++) {

        for(int j=i+1; j<n; j++) {

            for(int k=j+1; k<n; k++) {
                
                if(arr[i]+ arr[j] + arr[k]==0) {
                  vector<int> temp = {arr[i], arr[j], arr[k]};
                  sort(temp.begin(), temp.end());  // constant time
                  st.insert(temp);
                }
            }
        }
    }
 vector<vector<int>>ans(st.begin(), st.end());
    return ans;
}


// better solution TC: O(N**2 *logn)  SC: O(N)
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        // This set is initializing each j loop
        set<int> hashset;
        
        for (int j = i + 1; j < n; j++) {
            int comp = -(arr[i] + arr[j]);
            
            if (hashset.find(comp) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], comp};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }

            hashset.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// Optimal Solution   TC: O(N**2), SC: O(N)
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++) {
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k) {
            int sum= arr[i]+ arr[j]+arr[k];
            if(sum < 0) {
                j++;
            }
            else if(sum > 0) {
                k--;    
            }
            else {
                vector<int>temp={arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++, k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
                
            }
        }
    }
    return ans;
}
