#include <iostream>
using namespace std;
int factorial(int x)
{
    cout << "x=" << x << " at " << &x << endl;
	if (x == 0) return 1;
	return x*factorial(x-1);
}
int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
// một stack frame cho hàm factorial là 30
// giá trị và địa chỉ của x giảm dần
