class Solution{   
public:
  void leftRotate(int arr[], int n, int d) {
    for(int i=0;i<n/2;i++) {
        swap(arr[i], arr[n-i-1]);
    }
    for(int i=0;i<(n-d)/2;i++){
        swap(arr[i],arr[n-d-1-i]);
    }
    int i=n-d, l=n-1;
    for(int j=0;j<d/2;j++){
        swap(arr[i],arr[l]);
        i++;
        l--;
    }
  }
};