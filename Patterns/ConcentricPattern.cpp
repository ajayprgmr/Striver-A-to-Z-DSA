class Solution {
  public:
    void printSquare(int n) {
        
        for(int i=1;i<=2*n-1;i++){
            for(int j=1;j<=2*n-1;j++){
                int val=n-min(min(i-1,j-1),min(2*n-1-i,2*n-1-j));
                cout<<val<<" ";
            }
            cout<<endl;
        }
        
        }
};