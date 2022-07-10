#include <iostream>
using namespace std;
void solveMerge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    int length_1 = mid - start + 1;
    int length_2 = end - mid;

    // second time array creation
    int *first = new int[length_1];
    int *second = new int[length_2];

    // copy value inside array
    int mainArrIndex = start;
    for (int loop = 0; loop < length_1; loop++)
    {
        first[loop] = arr[mainArrIndex++];
    }
    mainArrIndex = mid+1;
    for (int loop = 0; loop < length_2; loop++)
    {
        second[loop] = arr[mainArrIndex++];
    }

    // merge 2 sorted array
    int index_1 = 0;
    int index_2 = 0;
    mainArrIndex = start;

    while (index_1 < length_1 && index_2 < length_2)
    {
        if (first[index_1] < second[index_2])
        {
            arr[mainArrIndex++] = first[index_1++];
        }
        else
        {
            arr[mainArrIndex++] = second[index_2++];
        }
    }

    while (index_1 < length_1)
    {
        arr[mainArrIndex++] = first[index_1++];
    }

    while (index_2 < length_2)
    {
        arr[mainArrIndex++] = second[index_2++];
    }

    // delete my dynamic memory data
    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // sort left part
    mergeSort(arr, start, mid);
    // sort right part
    mergeSort(arr, mid+1, end);

    // solve merge sort
    solveMerge(arr, start, end);
}
int main()
{
    int arr[8] = {2, 44, 34, 12, 14, 60, 21, 4};
    int size = 8;
    mergeSort(arr, 0, size - 1);
    for (int loop = 0; loop < size; loop++)
    {
        cout << arr[loop] << " ";
    }
    cout << endl;

    return 0;
}