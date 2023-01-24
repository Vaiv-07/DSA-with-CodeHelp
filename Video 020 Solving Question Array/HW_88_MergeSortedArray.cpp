class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, k=0;

        //copying nums1
        vector<int> arr(200);
        for(int p=0; p<m; p++){
            arr[p] = nums1[p];
        }


        while(i<m && j<n){
            if(arr[i] < nums2[j]){
                nums1[k] = arr[i];
                k++;
                i++;
            }
            else{
                nums1[k] = nums2[j];
                j++; k++;
            }
        }
        while(i<m){
            nums1[k] = arr[i];
            k++;
            i++;
        }
        while(j<n){
            nums1[k] = nums2[j];
            j++; k++;
        }
        
    }
};
