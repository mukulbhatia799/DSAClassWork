#include <iostream>
using namespace std;

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minValue = arr[i], minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (minValue > arr[j])
            {
                minValue = arr[j];
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

void selectionSortUsingRecursion(int *arr, int n, int k)
{
    if (k >= n - 1)
        return; // base case
    int j = k + 1;
    while (j < n)
    {
        if (arr[j] < arr[k])
        {
            int temp = arr[j];
            arr[j] = arr[k];
            arr[k] = temp;
        }
        j++;
    }
    selectionSortUsingRecursion(arr, n, k + 1); // recursive function.
}

void print(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int arr[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "iterative solution: ";
    selectionSort(arr, n);
    print(arr, n);

    cout << "recursive solution: ";
    int arr2[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int n2 = sizeof(arr) / sizeof(arr2[0]);
    int k = 0;
    selectionSortUsingRecursion(arr2, n2, k);
    print(arr2, n2);

    return 0;
}