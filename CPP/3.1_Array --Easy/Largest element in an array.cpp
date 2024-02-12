
#include<bits/stdc++.h>
using namespace std;
// Method-1
int LargestEleArr(vector<int> &arr) {
    auto it=max_element(arr.begin(), arr.end());
    return *it;
}
// Method-2
int LargestEleArr(vector<int> &arr) {
    int largest=arr[0];
    int n=arr.size();
    for(int i=1; i<n; i++) {
        if(arr[i]>largest) 
        largest=arr[i];
    }
    return largest;
}