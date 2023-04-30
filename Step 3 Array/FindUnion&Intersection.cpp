//gfg
// this will for both repeated and non-repeated as well codition is both should be in sorted order.
#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> res;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (i == 0 || arr1[i] != arr1[i - 1]) {
                res.push_back(arr1[i]);
            }
            i++;
        } else if (arr2[j] < arr1[i]) {
            if (j == 0 || arr2[j] != arr2[j - 1]) {
                res.push_back(arr2[j]);
            }
            j++;
        } else {
            if ((i == 0 || arr1[i] != arr1[i - 1])
                && (j == 0 || arr2[j] != arr2[j - 1])) {
                res.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (i == 0 || arr1[i] != arr1[i - 1]) {
            res.push_back(arr1[i]);
        }
        i++;
    }

    while (j < m) {
        if (j == 0 || arr2[j] != arr2[j - 1]) {
            res.push_back(arr2[j]);
        }
        j++;
 }

    return res;
}
/*
This code wroks well for non repeated elements 
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
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
*/

// Following code is by striver this code handles all the cases properly 
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
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
