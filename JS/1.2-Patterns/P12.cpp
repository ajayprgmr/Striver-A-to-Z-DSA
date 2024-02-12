class Solution {
  public:
    void printTriangle(int n) {
        // code here
         for(int i=1;i<=n;i++){
             // numeric codes
         for(int j=1;j<=i;j++)
             cout<<j<<" ";
             
             // spaces
         for(int j=1;j<=2*n-2*i;j++)
             cout<<" "<<" ";
             
             // numeric codes
         for(int j=i;j>=1;j--)
             cout<<j<<" ";
         cout<<endl;
     }
    }
};