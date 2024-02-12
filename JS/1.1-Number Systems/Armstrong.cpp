class Solution {
  public:
    string armstrongNumber(int n){
          int temp=n;
          int res=0;
          while(n>0){
              int d=n%10;
              res=res+pow(d,3);
              n=n/10;
              
          }
          if(temp==res)
          return "Yes";
          else return "No";
    }
};