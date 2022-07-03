#include <iostream>
using namespace std;
int arraySum(int *arr, int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    // recursive relation
        int remainPart = arraySum(arr + 1, size - 1);
        int sum = arr[0] + remainPart;
        return sum;
    
}
int main()
{
    int value[] = {2, 4, 5, 1, 5};
    int size = 5;

    int sum = arraySum(value, size);

    cout << "Your sum is " << sum << endl;
    return 0;
}