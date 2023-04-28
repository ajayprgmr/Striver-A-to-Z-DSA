
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // first reverse the entire array
	   k=k%n;
	   for(int i=0;i<n/2;i++)
	   swap(arr[i],arr[n-1-i]);
	   
	   for(int i=0;i<(n-k)/2;i++)
	   swap(arr[i],arr[n-k-1-i]);
	   
	   int j=1;
	   for(int i=n-k;i<(2*n-k)/2;i++,j++){
	       swap(arr[i],arr[n-j]);
	   }
	} 
		 
};