#include <iostream>

using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

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
    int size, array[200];
    cin >> size;

    // taking input of elements of array
    inputArray(array, size);

    // Sapping alternate elements
    swapAlternate(array, size);

    // printing array
    printArray(array, size);

    return 0;
}
