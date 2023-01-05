# include <iostream>
# include <algorithm>

using namespace std;

// This function works on the array arranged in ascending order and return the index
int BinarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}

// This function takes input of elements of array
void inputArray(int arr[], int n)
{
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

int main(){
    int array[1000];
    int size, key, index;
    cin >> size ;
    inputArray(array, size);
    
    cout << endl << "Enter the key element: ";
    cin >> key;
    // sorting the array
    sort(array, array+size);

    cout << "The array is: ";
    printArray(array, size);

    index = BinarySearch(array, size, key);
    cout << "The index of key element in the array is: " << index;

    return 0;
}
