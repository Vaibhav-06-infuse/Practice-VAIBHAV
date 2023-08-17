#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int sum = add(num1, num2);

    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
In this program, the add function takes two integer parameters (a and b) and returns their sum. In the main function, the user is prompted to input two numbers, and then the add function is called to calculate the sum, which is then displayed on the screen.

Compile and run this program using a C++ compiler to see the result.




User
make a cpp class which contain a add funtion to add tow int
ChatGPT
Certainly! Here's an example of a C++ class that contains an add function to add two integers:

cpp
Copy code
#include <iostream>
using namespace std;

class MathCalculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    int sub(int a,int b){
        return a - b;
    }
};

int main() {
    return 0;
}