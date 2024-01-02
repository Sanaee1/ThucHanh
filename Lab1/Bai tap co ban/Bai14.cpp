#include <iostream>
using namespace std;

int main() {
    int s1,s2,s3;
    cout << "Nhap so 1: ";
    cin >> s1;
    cout << "Nhap so 2: ";
    cin >> s2;
    cout << "Nhap so 3: ";
    cin >> s3;

    int Max = s1;
    int Min = s1;
    if (s2 > Max){
        Max = s2;
    }
    if (s3 > Max){
        Max = s3;
    }
    if (s2 < Min){
        Min = s2;
    }
    if (s3 < Min){
        Min = s3;
    }
    cout << "So lon nhat: " << Max << endl;
    cout << "So nho nhat: " << Min << endl;
    system("pause");
    return 0;
}