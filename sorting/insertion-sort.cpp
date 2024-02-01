#include <iostream>
using namespace std;

void insertionSort(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && x[j - 1] > x[j])
        {
            swap(x[j], x[j - 1]);
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}