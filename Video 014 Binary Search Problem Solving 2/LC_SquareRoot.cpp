class Solution {
public:
    int mySqrt(int x) {
      
      //Both the methode are correct You can go with any one
      
      // Method 1:-
      
        //int start = 0, end = x;
        // long int mid = start + (end - start)/2 ;
        // long int ans = -1;
        // while(start <= end){
        //     long long int square = mid*mid ;
        //     if(square == x){
        //         return mid;
        //     }
        //     if(square > x){
        //         end = mid - 1;
        //     }
        //     else{
        //         ans = mid;
        //         start = mid + 1;
        //     }
        //     mid = start + (end - start)/2;
        // }
        // return ans;
      
      // Method 2:-

        int s = 0, e = x, ans = -1;
        int mid = s + (e-s)/2 ;
        if(x == 0){
        // writing separately because it will 0/0 form and cause error 
            return 0;
        }
        if(x == 1){
        // writing separately because it will 1/0 form and cause error 
            return 1;
        }
        while(s<=e){
            if(mid == x/mid){
                return mid;
            }
            if(mid < x/mid){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
};
