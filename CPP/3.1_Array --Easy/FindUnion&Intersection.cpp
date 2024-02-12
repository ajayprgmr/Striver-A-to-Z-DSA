
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Union
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    // ofcourse both the arrays is sorted in increasing order.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>res;
        int i=0,j=0;
        
        while( i<n && j< m ) {
            
            if(arr1[i]<arr2[j]) {
                
                 res.push_back(arr1[i]);
                 i++;
            }
            else {
                if(arr1[i]==arr2[j]){
                    res.push_back(arr1[i]);
                    i++,j++;
                }
                else{
                    res.push_back(arr2[j]);
                    j++;
                }
            }
        }
        
        while(i<n){
            if(arr1[i]!=res.back())
            res.push_back(arr1[i]);
            i++;
        }
        
     while(j<m){
            if(arr2[j]!=res.back())
            res.push_back(arr2[j]);
            j++;
        }  
    
    
   return res;
        
    }
};

/* More precise code.
   arr1,arr2 two sorted arrays,of size m, n respectively
   it might contain duplicate elements
   we have to find the union of these two array.
   TC: O(m+n)
*/
class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>res;
        int i=0,j=0;
        while( i<n && j< m ) {
            
            if(arr1[i]<=arr2[j]){
                if(res.size()==0 ||
                res.back()!=arr1[i]){
                    res.push_back(arr1[i]);
                }
                
              i++;
            }
            
          else{
              if( res.size()==0 || res.back()!=arr2[j]){
                  res.push_back(arr2[j]);
              }
              j++;
              
          }
        }
        
        while(i<n){
            if(arr1[i]!=res.back())
            res.push_back(arr1[i]);
            i++;
        }
        
     while(j<m){
            if(arr2[j]!=res.back())
            res.push_back(arr2[j]);
            j++;
        }  
    
    
   return res;
        
    }
};

/*Intersection Code
TC :O(m+n), SC: O(m+n)
This code works for the all inputs repeated and non-repeated
and this is the opimal Solution. and Important is Bothe the
Array Should be Sorted.
*/
vector<int> intersection(int a[], int b[], int n, int m){
    int i=0,j=0;
    vector<int>res;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            if(res.size()==0 || res.back()!=a[i])
                res.push_back(a[i]);
            i++,j++;
        }
    }
    return res;
}


