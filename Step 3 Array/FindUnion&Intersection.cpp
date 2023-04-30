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


// Intersection code 
#include<bits/stdc++.h>
using namespace std;

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

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    int n1;
    cin >> n1;
    vector<int> b(n1);
    for(auto &i:b)
        cin>>i;
     vector<int> res=intersection(&a[0],&b[0],n,n1);
     for(int i:res)
         cout<<i<<" ";
    return 0;
}
