// Q. Alternate the elements of array in pairs of 2 sequentially
// int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
// Op: 2 1 4 3 6 5 8 7
#include <iostream>
using namespace std;

void alternate(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    alternate(arr, 8);
    printArray(arr, 8);
    return 0;
}