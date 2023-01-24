class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int indexNonZero = 0;
        for(int indexForCompare = 0; indexForCompare < nums.size(); indexForCompare++ ){
            if(nums[indexForCompare] !=0 ){
                swap(nums[indexForCompare], nums[indexNonZero]);
                indexNonZero++;
            }
        }

    }
};
