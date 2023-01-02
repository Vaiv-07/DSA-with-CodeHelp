#include <iostream>

using namespace std;

void insertInArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int sumOfElements(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int size, array[100];
    cin >> size;
    insertInArray(array, size);
    cout << sumOfElements(array, size);

    return 0;
}
