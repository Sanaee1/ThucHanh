#include <iostream>
using namespace std;

void GoodMorning() {
    cout << "Good morning!" << endl;
}

void GoodAfternoon() {
    cout << "Good afternoon!" << endl;
}

void GoodEvening() {
    cout << "Good evening!" << endl;
}



void menu() {
menu:
    cout << "MENU:" << endl;
    cout << "1. Good morning" << endl;
    cout << "2. Good afternoon" << endl;
    cout << "3. Good evening" << endl;
    cout << "4. Ket thuc chuong trinh" << endl;
    cout << "Ban chon (1-4): ";
    int opt;
    cin >> opt;
    bool tieptuc = true;
    while (tieptuc == true){
        switch (opt) {
            case 1:
                GoodMorning();
                goto menu;
            case 2:
                GoodAfternoon();
                goto menu;
            case 3:
                GoodEvening();
                goto menu;
            case 4:
                tieptuc = false;
                break;
            default:
                cout << "Nhap sai, vui long nhap lai!" << endl;
                goto menu;
                break;
        }
    }
}

int main() {
    menu();
    cout << "Bye Bye!" << endl;
    system("pause");
    return 0;
}