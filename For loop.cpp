#include <iostream>
using namespace std;
int main()
{
    int a, b, i;
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            if (i == 1)
            {
                cout << "one" << endl;
            }
            if (i == 2)
            {
                cout << "two" << endl;
            }
            if (i == 3)
            {
                cout << "three" << endl;
            }
            if (i == 4)
            {
                cout << "four" << endl;
            }
            if (i == 5)
            {
                cout << "five" << endl;
            }
            if (i == 6)
            {
                cout << "six" << endl;
            }
            if (i == 7)
            {
                cout << "seven" << endl;
            }
            if (i == 8)
            {
                cout << "eight" << endl;
            }
            if (i == 9)
            {
                cout << "nine" << endl;
            }
        }

        if (i % 2 == 0 && i > 9)
        {
            cout << "even" << endl;
        }
        if (i % 2 != 0 && i > 9)
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}
