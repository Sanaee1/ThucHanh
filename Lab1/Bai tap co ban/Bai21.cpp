#include <iostream> 
using namespace std;
int main() {
    
    char a, b, c;
    cout << "Nhap ki tu 1: ";
    cin >> a;
    cout << "Nhap ki tu 2: ";
    cin >> b;
    cout << "Nhap ki tu 3: ";
    cin >> c;
    if (a > b) {
        char temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        char temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        char temp = b;
        b = c;
        c = temp;
    }
    cout << "Ket qua: " << a << " " << b << " " << c;
    system ("pause");
    return 0;
}