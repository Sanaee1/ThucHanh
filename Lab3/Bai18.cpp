#include <iostream>
using namespace std;

void reverse(char sSource[], char sDest[]) {
    int i = 0;
    while (sSource[i] != '\0') {
        sDest[i] = sSource[i];
        i++;
    }
    sDest[i] = '\0';
    int j = 0;
    while (sDest[j] != '\0') {
        j++;
    }
    j--;
    i = 0;
    while (i < j) {
        char temp = sDest[i];
        sDest[i] = sDest[j];
        sDest[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char sSource[100], sDest[100];
    cout << "Nhap chuoi: ";
    cin.getline(sSource, 100);
    reverse(sSource, sDest);
    cout << "Chuoi sau khi dao nguoc: " << sDest << endl;

    system("pause");
    return 0;
}