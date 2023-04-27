class Solution {
  public:
    void printTriangle(int n) {
            char x='A';
    char y='A';
    char p='A';
     for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i;j++)
             cout<<" ";
         for(int j=1;j<i;j++){
           cout<<x;
             x++;
         }
         x='A';
           cout<<p;
               p++;
            y=p-2;
        for(int j=1;j<i;j++){
         
            cout<<y--;
        }
    //  for(int j=1;j<=n-i;j++)
    //          cout<<" ";    
         cout<<endl;
                     
             }
    }
};