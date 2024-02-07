#include <iostream>
using namespace std;

void selectionSort(int x[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;
        for (int j = i; j < n; j++)
        {
            if (x[j] < x[mini])
                mini = j;
        }
        swap(x[i], x[mini]);
    }
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}