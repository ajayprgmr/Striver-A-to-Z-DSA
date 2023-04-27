class Solution {
  public:
    void printTriangle(int n) {
       for (int i = 1; i <=n; i++)
    {
        // For printing the spaces before stars in each row
        for (int j =1; j<=n-i; j++)
        {
            cout <<" ";
        }
       
        // For printing the stars in each row
        for(int j=1;j<=2*i-1;j++){
            
            cout<<"*";
        }
        cout<<endl;
       
    } 
    }
};