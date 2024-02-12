#include<bits/stdc++.h>
using namespace std;
bool LenearSearch(int arr[], int N, int key) {
    for(int i=0; i<N; i++) {
        if(arr[i]==key) return true;
    }
    return false;
}