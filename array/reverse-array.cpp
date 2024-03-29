#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
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
    int size, nums[100];
    cout << "Enter size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    cout << "Reversed Array" << endl;
    reverseArray(nums, size);
    printArray(nums, size);

    return 0;
}