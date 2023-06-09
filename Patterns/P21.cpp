class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                
                if(i==1|| j==1 ||i==n ||j==n)
                    cout<<"*";
                else
                    cout<<" "; 
        }
            cout<<endl;         
}
        
    }
};