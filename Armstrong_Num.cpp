#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, a, arm = 0;
    cout << "Enter The Number :- ";
    cin >> n;
    a = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        arm = (lastdigit * lastdigit * lastdigit) + arm;
        n = n / 10;
    }
    if (a == arm)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not armstrong";
    }
}
