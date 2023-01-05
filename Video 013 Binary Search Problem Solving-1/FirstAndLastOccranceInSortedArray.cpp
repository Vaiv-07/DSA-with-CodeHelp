// This code is to run on VS code

#include <iostream>
#include <algorithm>

using namespace std;

int firstOccurance(int arr[], int n, int key)
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
int lastOccurance(int arr[], int n, int key)
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

// This function takes input of elements of array
void inputArray(int arr[], int n)
{
    cout << endl
         << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

// This function prints elements of array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int array[1000];
    int size, key;
    pair<int, int> p;
    cout << endl
         << "Enter the size of array: ";
    cin >> size;
    inputArray(array, size);

    cout << endl
         << "Enter the key element: ";
    cin >> key;
    // sorting the array
    sort(array, array + size);

    cout << "The array is: ";
    printArray(array, size);

    p.first = firstOccurance(array, size, key);
    p.second = lastOccurance(array, size, key);
    cout << "The first and last occurance of " << key << " is: " << p.first <<" "<< p.second;
    return 0;
}
