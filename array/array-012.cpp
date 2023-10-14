// Sort array 0 1 2
// This Will Sort an array of 0, 1
// example:
// Before Sort
// 1 0 2 1 1 2 0 1 1 0 2 2
// After Sort
// 0 0 0 1 1 1 1 1 2 2 2 2
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
    int i = 0, j = n - 1, mid = 0;
    while (mid <= j)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[i++], arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid], arr[j--]);
            break;
        }
    }
}

int main()
{
    int arr[12] = {1, 0, 2, 1, 1, 2, 0, 1, 1, 0, 2, 2};
    cout << "Before Sort" << endl;
    printArray(arr, 12);

    sortArray(arr, 12);
    cout << "\nAfter Sort" << endl;
    printArray(arr, 12);

    return 0;
}