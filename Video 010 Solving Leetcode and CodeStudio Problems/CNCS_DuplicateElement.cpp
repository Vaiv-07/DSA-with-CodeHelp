// This code is the solution submitted on codeStudio platform

// Using the information that each integer is in range [1,(n-1)]

int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    for(int i =0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    for(int i =1; i<arr.size(); i++){
        ans = ans^i;
    }
    return ans;
	
}
