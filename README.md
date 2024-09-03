# Exp-10 : Pointer Operations

## Aim:
To understand and demonstrate the concepts of "Call by Value" and "Call by Reference" in C++ by implementing swap functions using both methods.

## Software Used:
- Dev c++
  
## Theory:
In C++, functions can be invoked in two ways: "Call by Value" and "Call by Reference." In "Call by Value," a copy of the actual parameters is passed to the function, so changes made to the parameters inside the function do not affect the original variables. Conversely, in "Call by Reference," the actual memory address of the variables is passed, allowing changes within the function to reflect in the original variables. These concepts are crucial for understanding how data is handled and manipulated within functions in C++.

## Program 1: Swap the numbers using call by value.
<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/5c7a03c2-ed3a-4cce-afda-b6dffb9d093c)


## Program 2: : Swap the numbers using call by reference.
<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;

void swapValues(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    cout << "Inside swapValues function: " << "x = " << *x << " , " << "y = " << *y << endl;
}

int main() {
    int num1 = 3, num2 = 8;
    cout << "Before swapValues: " << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;
    swapValues(&num1, &num2);
    cout << "After swapValues: " << "num1 = " << num1 << " , " << "num2 = " << num2 << endl;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/b3c2ee98-cdd0-446c-acde-2ea3c3c25988)


## Conclusion:
The two programs illustrate the difference between "Call by Value" and "Call by Reference" in C++. In "Call by Value," changes made inside the function do not affect the original variables, while in "Call by Reference," the changes are reflected outside the function. Understanding these concepts is essential for effective function design in C++.
