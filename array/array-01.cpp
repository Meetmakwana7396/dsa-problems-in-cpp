// Sort array 0 1
// This Will Sort an array of 0, 1
// example:
// Before Sort
// 1 0 0 1 1 1 0 1
// After Sort
// 0 0 0 1 1 1 1 1
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void sortArray(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }

        while (arr[j] == 1 && i < j)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[8] = {1, 0, 0, 1, 1, 1, 0, 1};
    cout << "Before Sort" << endl;
    printArray(arr, 8);

    sortArray(arr, 8);
    cout << "\nAfter Sort" << endl;
    printArray(arr, 8);

    return 0;
}