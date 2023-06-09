class Solution{
public:
    int minJumps(int arr[], int n){
        int maxReachable = arr[0]; // max index reachable so far
        int steps = 1; // minimum number of jumps
        int lastJumpEnd = arr[0]; // end of last jump
        
        // Traverse the array
        for (int i = 1; i < n; i++) {
            // If current index exceeds max reachable index, return -1
            if (i > maxReachable) {
                return -1;
            }
            // If current index is within last jump range, update max reachable index
            if (i <= lastJumpEnd) {
                maxReachable = max(maxReachable, i + arr[i]);
            }
            // If current index is outside last jump range, update last jump range and increment steps
            else {
                lastJumpEnd = maxReachable;
                maxReachable = max(maxReachable, i + arr[i]);
                steps++;
            }
        }
        
        return steps;
    }
};
