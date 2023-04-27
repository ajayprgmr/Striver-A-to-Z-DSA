class Solution {
  public:
    void printTriangle(int n) {
        char p='A';
     for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<p;
            }
         cout<<endl;
         p++;
         }
    }
};