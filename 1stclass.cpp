#include<iostream>
using namespace std;

int binarySearchRE(int *arr, int size, int lb, int ub, int key) {
    if(lb > ub) return -1;

    int mid = lb + (ub - lb) / 2;
    if(arr[mid] == key) {
        cout << "found at " << mid << endl;
        return 1;
    }
    else if(arr[mid] < key) {
        lb = mid + 1;
    }
    else ub = mid - 1;
    binarySearchRE(arr, size, lb, ub, key);
}

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(int);
    cout << "size: " << size << endl;
    int lb = 0, ub = size-1;
    int key = 50;
    int check = binarySearchRE(arr, size, lb, ub, key);

    while(lb <= ub) {

    }

    return 0;
}