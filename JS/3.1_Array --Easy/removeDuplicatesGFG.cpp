
class Solution {
public:
    int remove_duplicate(int a[], int n){
        if (n == 0) return 0; // if the array is empty, return 0
        
        int i = 0; // pointer for storing the next distinct element
        for (int j = 1; j < n; j++) { // pointer for scanning the array for duplicates
            if (a[j] != a[i]) { // if a new distinct element is found
                i++; // increment the pointer for storing the next distinct element
                a[i] = a[j]; // store the new distinct element at the current position
            }
        }
        return i+1; // return the number of distinct elements
    }
};
