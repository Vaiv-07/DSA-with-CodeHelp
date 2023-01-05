// This code is the solution submitted on LeetCode platform (problem-852)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end - start)/2 ;
        while(start < end){
            if(arr[mid] < arr[mid + 1]){
                start = mid + 1;
            }
            else{
                end = mid;  // not writing (mid - 1) becuz it including peak element
            }
            mid = start + (end - start)/2 ;
        }

        return start ;
    }
};
