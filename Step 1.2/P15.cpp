class Solution {
  public:
    void printTriangle(int n) {
        char p='A';
     for(int i=1;i<=n;i++){
            for(int j=1;j<=n+1-i;j++){
                cout<<p;
                p++;
            }
         cout<<endl;
         p='A';
         }
    }
};