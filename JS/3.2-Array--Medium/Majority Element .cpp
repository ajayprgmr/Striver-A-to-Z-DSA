#include<bits/stdc++.h>
using namespace std;


// bruteforce solution TC : O(n**2), SC: O(1)
int majorityElement(vector<int>&v) {
    int n=v.size();
    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            // counting the frequency of ith element of vector<int> v
            if(v[i]==v[j])
            cnt++;
        }

        if(cnt>n/2) return v[i];  // if found just return 
    }
    return -1; // when no one elelment is found with occurence more than n/2
}


// Better TC : O(N) ; SC : O(N)
int majorityElement(vector<int>&v) {
    
    int n=v.size();
    unordered_map<int, int > hashmap;
    for(int i=0; i< v.size(); i++){

        hashmap[v[i]]++;
    }
    for(auto it=hashmap.begin(); it!=hashmap.end(); ++it){
        if(it->second > (n/2))
        return it->first;
    }
   return -1;
}


/* optimal solution using more's voting algorithm
   TC : O(N) , SC: O(1)    */
int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int ele; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            ele = v[i]; 
        }
        else if (ele == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == ele) cnt1++;
    }

    if (cnt1 > (n / 2)) return ele;
    return -1;
}

/*
https://leetcode.com/problems/majority-element/ : basic one for majority elements 
frequency > n/2 .

https://leetcode.com/problems/majority-element-ii/ : Good Question we have to return 
all the elements whoose frequency is > florr(n/3) where n is the size of the array.

https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1

*/