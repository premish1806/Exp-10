// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

void swapNumbers(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Inside swapNumbers function: " << "x = " << x << " , " << "y = " << y << endl;
}

int main()
 {
    int num1 = 3, num2 = 8;
    cout << "Before swapNumbers: " << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;
    swapNumbers(num1, num2);
    cout << "After swapNumbers: " << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;
}
