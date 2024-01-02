#include <iostream>
using namespace std;

void sort(int array[100], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (array[j] < array[j - 1]) {
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            } 
        }
    }
}

int main() {
    int n;
    int array[100];

    cout << "Nhap so phan tu: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> array[i];
    }

    sort(array, n);

    cout << "Mang sau khi sap xep: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    system("pause");
    return 0;
}