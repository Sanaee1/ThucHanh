#include <iostream>
using namespace std;

int main() {
    short delta = 10;
    cout << "Kich thuoc bien delta: " << sizeof(delta) << endl;
    cout << "Kich thuoc bien kieu char: " << sizeof(char) << endl;
    cout << "Kich thuoc bien kieu signed char: " << sizeof(signed char) << endl;
    cout << "Kich thuoc bien kieu usigned char: " << sizeof(unsigned char) << endl;
    cout << "Kich thuoc bien kieu int: " << sizeof(int) << endl;
    cout << "Kich thuoc bien kieu signed int: " << sizeof(signed int) << endl;
    cout << "Kich thuoc bien kieu unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Kich thuoc bien kieu long: " << sizeof(long) << endl;
    cout << "Kich thuoc bien kieu float: " << sizeof(float) << endl;
    cout << "Kich thuoc bien kieu double: " << sizeof(double) << endl;
    cout << "Kich thuoc bien kieu long double: " << sizeof(long double) << endl;
    return 0;
}