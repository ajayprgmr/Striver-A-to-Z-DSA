class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
       int l=arr[0]; // assume arr[0] is the max element in the array
       for(int i=1;i<n;i++){
           if(arr[i]>l)
           l=arr[i];
           else
           continue;
       }
       return l;
    }
};
