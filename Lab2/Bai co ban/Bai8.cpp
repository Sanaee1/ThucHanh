#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    cout << "Nhap n: ";
    cin >> n;
    int i = 1;
    while (i < n) {
        cout << i << " ";
        i++;
    }

    system("pause");
    return 0;
}