#include <iostream>
using namespace std;

int main() {
    int i = 2;
    int j = 1;
    while (i < 10) {
        while (j < 11) {
            cout << i << " x " << j << " = " << i * j << endl;
            j++;
        }
        j = 1;
        i++;
        cout << endl;
    }

    system("pause");
    return 0;
}