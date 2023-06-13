#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Limit Of Numbers :- ";
    cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > max)
        {
            max = num;
        }
        if (num < min)
        {
            min = num;
        }
    }
    cout << "The Minimum Value Is :- " << min;
    cout << "\nThe Maximum Value Is :- " << max;
    return 0;
}