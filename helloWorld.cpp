#include <iostream>
using namespace std;

int doubleNum(int num);

int tripleNum(int num);

int sumNum(int num1, int num2);

string greeting(string name);

string farewell(string name);

int main() {
    cout << "Hello, World!";

    cout << "What is your name?" << endl;

    string name;

    cin >> name;

    cout << greeting(name) << endl;

    cout << "Enter a number: " << endl;

    int num;

    cin >> num;

    cout << "Double of " << num << " is " << doubleNum(num) << endl;

    cout << "Triple of " << num << " is " << tripleNum(num) << endl;

    cout << "Enter another number: " << endl;

    int num2;

    cin >> num2;

    cout << "The sum of " << num << " and " << num2 << " is " << sumNum(num, num2) << endl;

    cout << farewell(name) << endl;

    return 0;
}

int doubleNum(int num) {
    return num * 2;
}

int tripleNum(int num) {
    return num * 3;
}

int sumNum(int num1, int num2) {
    return num1 + num2;
}

string greeting(string name) {
    return "Nice to meet you, " + name;
}

string farewell(string name) {
    return "Goodbye, " + name;
}

