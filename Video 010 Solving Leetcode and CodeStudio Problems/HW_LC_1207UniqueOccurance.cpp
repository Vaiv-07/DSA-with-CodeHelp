// This code is the solution submitted on LeetCode platform

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int res[1000] = {0};
        int count=0 ;
        sort(arr.begin(), arr.end());
        bool ans = false;
        int i, j, r;
        // traversing the array and counting
        for(i = 0, r=0; i<arr.size(); i = i+count,r++)
        {
            count = 1;
            for (j = i+1; j<arr.size(); j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            res[r] = count;
        } 

        sort(res, res+r);

        for (int h = 0; h<r; h++)
        {

            if(res[h] == res[h+1])
            {
                ans = false;
                break;
            }
            else{
                ans = true;
            }
        }

        return ans;
    
    }
};
