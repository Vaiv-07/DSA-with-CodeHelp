// This code is the solution submitted on CodingNinja's CodeStudio platform

#include <bits/stdc++.h> 
// Function to find first occurance of element
int firstOccurance(vector<int>& arr, int n, int key)
{
    int start = 0, end = n - 1, ans = -1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            end = mid - 1;
            ans = mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

// Function to find last occurance of element
int lastOccurance(vector<int>& arr, int n, int key)
{
    int start = 0, end = n - 1, ans = -1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            start = mid + 1;
            ans = mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    pair<int,int> p;
    p.first = firstOccurance(arr, n, k);
    p.second = lastOccurance(arr, n, k);
    return p;
}
