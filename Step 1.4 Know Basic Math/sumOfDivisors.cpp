

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        long long sum = 0;
        
        for (int i = 1; i <= N; i++) {
            sum += (N/i)*i;  // add i times the count of divisors of N/i
        }
        
        return sum;
    }
};