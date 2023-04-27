class Solution {
  public:
    void printTriangle(int n) {
        // code here
     char c=char(65+n-1);
    char x;
    for(int i=1;i<=n;i++){
        
         x=c;
        for(int j=1;j<=i;j++){
            cout<<x<<" ";
            x--;;
        }
       cout<<endl;
        
            
    }
    }
};