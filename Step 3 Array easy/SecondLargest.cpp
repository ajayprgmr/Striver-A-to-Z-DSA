class Solution{
public:
int print2largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = INT_MIN;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // If second largest was not updated, there is no second largest
    if (second_largest == INT_MIN) {
        return -1;
    }

    return second_largest;
}

};