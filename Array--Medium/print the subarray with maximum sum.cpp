/*There are three methods for this problem , first two are  i) O(n^3) and ii) O(n^2)
Here is the implementation of the optimal one which is kanade's algorithm. */
#include<bits/stdc++.h>
using namespace std;

vector<int> MaximumSubarray(vector<int> &nums) {
    int maxsum = INT_MIN, AnsStart = -1, AnsEnd = -1, start = 0, sum = 0;
    vector<int> ans;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        sum += nums[i];

        if (sum > maxsum) {
            maxsum = sum;
            AnsStart = start;
            AnsEnd = i;
        }

        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }
    for (int i = AnsStart; i <= AnsEnd; i++) {
        ans.push_back(nums[i]);
    }
    return ans;
}