#include <iostream>
using namespace std;
void reverseString(string &str, int s, int e)
{
    cout << str << endl;
    // base case
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    s++;
    e--;

    // recursive call
    reverseString(str, s, e);
}
int main()
{
    string name = "subham";
    reverseString(name, 0, name.length() - 1);
    cout<< name << endl;
    return 0;
}