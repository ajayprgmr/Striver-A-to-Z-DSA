/* 
Problem Statement: Given an array, print all the elements which are leaders. A Leader is an element that is greater than all of the elements on 
its right side in the array.

*/

#include<bits/stdc++.h>
using namespace std;


// Bruteforce Solution TC : O(N), SC: O(N)
vector<int> leaders(int a[], int n){
    vector<int> ans;
        for( int i=0; i<n; i++) {
            bool leader=true;
            for(int j=i+1; j<n; j++) {
                if(a[j]>a[i]) {
                    leader=false;
                    break;
                }
            }
            if(leader==true) ans.push_back(a[i]);
        }
        return ans;
}



// Better Solution TC : O(N**2), SC: O(N)
vector<int> leaders(int a[], int n) {
    vector<int> ans; // Create an empty vector to store the leaders

    // Iterate through the array
    for (int i = 0; i < n - 1; i++) {
        // Find the maximum element to the right of the current element
        auto it = max_element(a + i + 1, a + n);

        // Check if the current element is greater than or equal to the maximum element
        // to its right. If true, it is a leader and add it to the 'ans' vector.
        if (a[i] >= (*it)) {
            ans.push_back(a[i]);
        }
    }

    // Add the last element of the array to the 'ans' vector
    ans.push_back(a[n - 1]);

    return ans; // Return the vector containing the leaders
}


// Optimal Solution TC: O(N), SC: O(N)
vector<int> leaders(int a[], int n) {
    vector<int> ans; 
    int max = a[n - 1]; // Initialize the maximum value as the last element of the array

    // Iterate through the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        // Check if the current element is greater than or equal to the current maximum
        if (a[i] >= max) {
            
            ans.push_back(a[i]);

            // Update the maximum value to the current element
            max = a[i];
        }
    }

    // Reverse the original array to restore its original order
   reverse(ans.begin(), ans.end());

    return ans; // Return the vector containing the leaders
}
