#include<bits/stdc++.h>
using namespace std;
// bruteforce solution


int majorityElement(vector<int>&v) {
    int n=v.size();

    for(int i=0; i<n; i++){
        int cnt=0;
        for(int j=0; j<n; j++){
            // counting the frequency of ith element of vector<int> v
            if(v[i]==v[j])
            cnt++;
        }

        if(cnt>n/2) return v[i];  // if found just  return check for each element of v
    }
    return -1; // when no one elelment is found with occurence more than n/2
}



// Better
int majorityElement(vector<int>&v) {
    
    int n=v.size();
    map<int, int > hashmap;
    for(int i=0; i< v.size(); i++){

        hashmap[v[i]]++;
    }
    for(auto it=hashmap.begin(); it!=hashmap.end(); ++it){
        if(it->second > (n/2))
        return it->first;
    }
   return -1;
}

// optimal more's voting algorithm

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}
