#include <iostream>
using namespace std;

struct vectorOXY {
    float u;
    float v;
};

int main() {
    vectorOXY *vector = new vectorOXY[2];
    for (int i = 0; i < 2; i++) {
        cout << "Nhap toa do vector thu " << i + 1 << endl;
        cout << "Nhap u" << i + 1 << ": ";
        cin >> vector[i].u;
        cout << "Nhap v" << i + 1 << ": ";
        cin >> vector[i].v;
    }

    cout << "Tong 2 vector la: " << endl;
    cout << "u = " << vector[0].u + vector[1].u << endl;
    cout << "v = " << vector[0].v + vector[1].v << endl;
    cout << "Tich 2 vector la: " << endl;
    cout << "u = " << vector[0].u * vector[1].u << endl;
    cout << "v = " << vector[0].v * vector[1].v << endl;


    system("pause");
    return 0;
}
