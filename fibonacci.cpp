//fibonacci series --> 0 1 1 2 3 5 8
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nextNumber;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i <= n - 1; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << " ";
        a = b;
        b = nextNumber;
    }
}