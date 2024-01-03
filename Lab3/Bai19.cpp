#include <iostream> 
using namespace std;

void capslock(char sSource[], char sDest[]) {
    int i = 0;
    while (sSource[i] != '\0') {
        if (sSource[i] >= 'a' && sSource[i] <= 'z') {
            sDest[i] = sSource[i] - 32;
        } else {
            sDest[i] = sSource[i];
        }
        i++;
    }
    sDest[i] = '\0';
}

int main() {
    char sSource[100], sDest[100];
    cout << "Nhap chuoi: ";
    cin.getline(sSource, 100);
    capslock(sSource, sDest);
    cout << "Chuoi sau khi chuyen doi: " << sDest << endl;

    system("pause");
    return 0;
}