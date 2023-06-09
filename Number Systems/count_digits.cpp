//Given a number N. Count the number of digits in N which evenly divides N.

//Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int count=0;
        int originalN=N;
        while(N>0){
            int d;
            d=N%10;
            if(d!=0 and originalN%d==0 )
            count++;
            N=N/10;
        }
        return count;
    }
};