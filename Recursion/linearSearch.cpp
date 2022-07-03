#include <iostream>
using namespace std;
bool findNumber(int *arr, int size, int key)
{
    // base case
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    else
    {
        bool remainPart = findNumber(arr + 1, size - 1, key);
        return remainPart;
    }
}
int main()
{
    int arr[5] = {3, 5, 6, 7, 81};
    int size = 5;
    int key = 8;
    bool result = findNumber(arr, size, key);
    if (result)
    {
        cout << "Present " << endl;
    }
    else
    {
        cout << "absent " << endl;
    }
    return 0;
}
