#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print karo space i.e 1st triangle
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // print 2st triangle
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col += 1;
        }
        // print 3rd triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start -= 1;
        }

        cout << endl;
        row += 1;
    }
}