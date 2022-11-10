#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isPrime = 1; // consider that given no. prime
    for (int i = 2; i < n; i++)
    {
        // rem = 0 --> not prime
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if (isPrime == 0)
    {
        cout << "Not a prime no." << endl;
    }
    else
    {
        cout << "is a prime no." << endl;
    }
}