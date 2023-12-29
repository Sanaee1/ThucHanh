#include <iostream>
using namespace std;

int main() {
    unsigned int n;
    int i = 1;
    cout << "Nhap n: ";
    cin >> n;
    while (i < n) {
        if (i % 2 != 0)
        cout << i << " ";
        i++;
    }

    system("pause");
    return 0;
}