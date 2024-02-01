#include <iostream>
using namespace std;

void bubbleSort(int x[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        bool isSwap = false;
        for (int j = 0; j < i; j++)
        {
            if (x[j] > x[j + 1])
            {
                swap(x[j], x[j + 1]);
                isSwap = true;
            }
        }
        if (isSwap == false)
            break;
        cout << "Runs\n";
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

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}