#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Making a loop for ronds/iteration
    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shifting the bigger element to right side by one index
                arr[j+1] = arr[j];
            }
            else { 
                // ruk jao
                break;
            }
            
        }
        // inserting the element in sorted part
        arr[j+1] = temp; 
    }
}
