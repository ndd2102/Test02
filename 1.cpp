#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[3];
    char b[3];
    char m;
    cout << &n << endl << &m << endl;
    for (int i=0; i<3; i++)
    {
        cout << &a[i] << endl;
        cout << &b[i] << endl;
    }
    return 0;
}
//địa chỉ của các phần tử liên tiếp trong mảng a hơn kém nhau 4 byte = kích thước của kiểu int;
//địa chỉ của các phần tử liên tiếp trong mảng b hơn kém nhau 1 byte = kích thước của kiểu char;

