#include <iostream>
using namespace std;

int main() {
    char sSource[100];
    cout << "Nhap chuoi: ";
    cin.getline(sSource, 100);
    int i = 0;
    
    while (sSource[i] != '\0') {
        i++;
    }

    cout <<i ;

    system("pause");
    return 0;
}