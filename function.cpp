#include <iostream>
#include <algorithm>
using namespace std;
int digitMax(int a, int b, int c, int d)
{
    return max({a, b, c, d});
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << digitMax(a, b, c, d);
    return 0;
}
