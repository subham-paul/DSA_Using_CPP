#include <iostream>
using namespace std;

void reachHome(int start, int end)
{

    cout << "Source-> " << start << "  Destination-> " << end << endl;
    // base condition
    if (start == end)
    {
        cout << "This my house" << endl;
        return;
    }
    // process for 1 step forward
    start++;
    reachHome(start, end);
}
int main()
{
    int src = 1, dest = 10;
    reachHome(src, dest);
    return 0;
}