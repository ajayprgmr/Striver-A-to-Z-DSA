// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     long long reversedBits(long long X) {
//         // code here
//         bitset<32> num(X);
//         int n=num.size();
//         for(int i=0;i<n/2;i++){
//             bool temp=num[i];
//             num[i]=num[n-1-i];
//             num[n-1-i]=temp;
//         }
//         return num.to_ulong();
//     }
// };
