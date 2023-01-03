// This code is the solution submitted on codeStudio platform

int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}
