#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void bubbleSortUsingRE(int *arr, int n) {
    if(n <= 1) return ;

    // comparison.
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }

    bubbleSortUsingRE(arr, n-1);        // passing.
}

void print(int *arr, int n)
{
    cout << "sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {40, 10, 5, 25, 35, 16};
    int n = sizeof(arr) / sizeof(int);

    cout << "iterative approach: ";
    bubbleSort(arr, n);
    print(arr, n);

    int arr2[] = {40, 10, 5, 25, 35, 16};
    cout << "using recursion: ";
    bubbleSortUsingRE(arr, n);
    print(arr, n);

    return 0;
}