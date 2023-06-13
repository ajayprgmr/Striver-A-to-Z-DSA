class Solution
{
	public:
	string is_palindrome(int n) {
    int x = n;
    int s,e;
    int digits = log10(n) + 1; // count the number of digits in the number
    
    // Find the start and end indices of the digits to check
   
        int left=digits-1,right=0;
    
    // Check if the digits are the same from start and end
    while (right<left) {
        int left_digit=x/(int)pow(10,left)%10;
        int right_digit=x/(int)pow(10,right)%10;
        if(left_digit!=right_digit)
        return "No";
        left--;
        right++;
    }
    
    return "Yes";
};