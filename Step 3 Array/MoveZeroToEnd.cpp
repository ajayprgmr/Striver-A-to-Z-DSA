#include<bits/stdc++.h>
using namespace std;
void pushZerosToEnd(int arr[], int n) {
	   int left = 0, right = 0;
        while (right < n) {
            if (arr[left] == 0 && arr[right] != 0) {
                swap(arr[left], arr[right]);
                left++;
            }
            if (arr[left] != 0) {
                left++;
            }
            right++;
        }
}