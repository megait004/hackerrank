#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    // In độ dài của hai chuỗi
    cout << a.size() << " " << b.size() << endl;

    // In chuỗi được tạo ra bằng cách nối a và b
    cout << a + b << endl;

    // Hoán đổi ký tự đầu tiên của hai chuỗi
    swap(a[0], b[0]);

    // In hai chuỗi sau khi hoán đổi
    cout << a << " " << b << endl;

    return 0;
}
