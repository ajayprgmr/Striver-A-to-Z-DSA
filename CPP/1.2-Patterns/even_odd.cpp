class Solution {
  public:
    void printTriangle(int n) {
        
        
         for(int i=1;i<=n;i++){
      if(i%2==0){
          for(int j=1;j<=i;j++)
              if(j%2==0)
                  cout<<"1 ";
               else
                   cout<<"0 ";
               
      }
        else{
            for(int j=1;j<=i;j++)
                if(j%2==0)
                    cout<<"0 ";
                else
                    cout<<"1 ";
        } 
         
        cout<<endl;     
    }
    }
};


/*
1
01
101
0101
10101
*/