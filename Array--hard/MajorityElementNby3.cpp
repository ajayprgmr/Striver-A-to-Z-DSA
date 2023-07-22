/*
Majority Elements(>N/3 times) | Find all the elements that appears more than N/3 times in the array

*/

#include<bits/stdc++.h>
using namespace std;

// Bruteforce approach : TC O(N**2) SC: O(N)
vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int mini = n / 3 + 1;

        for (int i = 0; i < n; i++) {
            int cnt = 0;
            // do check that previous element not containing v[i]
            if (ans.size() == 0 || ans[0] != nums[i]) {
                for (int j = 0; j < n; j++) {
                    if (nums[i] == nums[j])
                        cnt++;
                }
            }

            if (cnt >=mini) {
                ans.push_back(nums[i]);
            }

            if (ans.size() == 2)
                return ans;
        }

        return ans;
    }


// Better solution TC- AC : O(N), TC-WC : O(N**2)-->collisoins  | SC : O(N);
vector<int> majorityElement(vector<int>v) {
    int n=v.size();
    int mini=n/3;
    vector<int>ans;
    unordered_map<int, int> um;
    for(int i=0; i<n; i++) {
        um[v[i]]++;
        if(um[v[i]==mini]) {
            ans.push_back(v[i]);
            if(ans.size()==2) return ans;
        }
    }
    return ans;
}

// Optimal Solution using modified version of moore's voting algorithm
vector<int> majorityElement(vector<int> v) {
    int n=v.size();
    vector<int>ans;
    int ele1, ele2;  // two elements that would might be our answer.
    int cnt1, cnt2;  //counts
    int mini=n/3+1;  // just greater than n/3 i.e add one extra.

    for(int i=0; i<n; i++) {

        // don't blindly assign, in the mid of the array it might happen that 
        if(cnt1==0 && v[i]!=ele2) {
            cnt1=1;
            ele1=v[i];
        }
        else if(cnt2==0 && v[i]!=ele1) {
            cnt2=1;
            ele2=v[i];
        }
        else if(ele1==v[i]) cnt1++;
        else if(ele2==v[i]) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }
    cnt1=0, cnt2=0;
    for(int i=0; i<n; i++) {
        if(v[i]==ele1) cnt1++;
        else if(v[i]==ele2) cnt2++;
    }
   if(cnt1>=mini) ans.push_back(ele1);
   if(cnt2>=mini) ans.push_back(ele2);
  return ans;
}