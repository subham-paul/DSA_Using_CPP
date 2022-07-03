#include <iostream>
using namespace std;
int sortCheck(int *arr, int size)
{
    // base case
    if (size == 0 || size == 1)
    {
        return true;
    }

    // recursive relation
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = sortCheck(arr + 1, size - 1);
        return ans;
    }
}
int main()
{
    int size = 6;
    int arr[] = {2, 3 , 4, 5, 7, 9};
    bool ans = sortCheck(arr, size);
    if (ans)
    {
        cout << "Array is sorted";
    } else {
        cout << "Array is !sorted";
    }
    return 0;
}