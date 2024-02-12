/*


*/
#include<bits/stdc++.h>
using namespace std;


//BruteForce TC: Nlogn + O(2N) | SC : O(N)
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<n; i++) {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1]) {
               continue;
            }
        //check the rest of the intervals:
        for (int j = i + 1; j < n; j++) {
            if (intervals[j][0] <= end) {
                end = max(end, intervals[j][1]);
            }
            else {
                break;
            }
        } 
        ans.push_back({start,end}); 
        }
        return ans;
    }



//Optimal Solution TC: O(Nlogn) | SC : O(N)
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<n; i++) {
            if(ans.empty() || intervals[i][0]>ans.back()[1]) {
               ans.push_back(intervals[i]);
            }
            else {
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
            }

        }
        return ans;
    }