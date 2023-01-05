// This code is the solution submitted on LeetCode platform

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // creating an vector to store duplicates
        vector<int> ans;
        // sortin given entries to perform checks
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            // checking for duplicates
            if(nums[i] == nums[i+1]){
                // entering duplicates to our vector
                ans.push_back(nums[i]);
                i++ ;
            }
        }
        // returning vector of duplicates
        return ans;
    }
};
