#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    int e=arr.size()-1 ;
    m++;
    while(m<e){
        swap(arr[m], arr[e]);
        m++;
        e--;
    }
}
