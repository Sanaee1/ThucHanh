#include <iostream>
using namespace std;

struct MatHang {
    int maHang;
    string tenHang;
    int soLuong;
    int donGia;
    int soLuongTon;
    int BaoHanh;
};

void NhapMatHang(int n, MatHang mh[100]) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap mat hang thu " << i + 1 << endl;
        cout << "Nhap ma hang: ";
        cin >> mh[i].maHang;
        cout << "Nhap ten hang: ";
        cin >> mh[i].tenHang;
        cout << "Nhap so luong: ";
        cin >> mh[i].soLuong;
        cout << "Nhap don gia: ";
        cin >> mh[i].donGia;
        cout << "Nhap so luong ton: ";
        cin >> mh[i].soLuongTon;
        cout << "Nhap thoi gian bao hanh (Thang): ";
        cin >> mh[i].BaoHanh;
    }
}

void XuatMatHang(int n, MatHang mh[100]) {
    cout << "Danh sach mat hang: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mat hang thu " << i + 1 << endl;
        cout << "Ma hang: " << mh[i].maHang << endl;
        cout << "Ten hang: " << mh[i].tenHang << endl;
        cout << "So luong: " << mh[i].soLuong << endl;
        cout << "Don gia: " << mh[i].donGia << endl;
        cout << "So luong ton: " << mh[i].soLuongTon << endl;
        cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
    }
}

void CapNhatMatHang(int n, MatHang mh[100]) {
    cout << "Nhap ma hang can cap nhat: ";
    int maHang;
    cin >> maHang;
    for (int i = 0; i < n; i++) {
        if (mh[i].maHang == maHang) {
            cout << "Nhap so luong: ";
            cin >> mh[i].soLuong;
            cout << "Nhap don gia: ";
            cin >> mh[i].donGia;
            cout << "Nhap so luong ton: ";
            cin >> mh[i].soLuongTon;
            cout << "Nhap thoi gian bao hanh (Thang): ";
            cin >> mh[i].BaoHanh;
        }
    }
}

void Xoa1MatHang(int n, MatHang mh[100]) {
    cout << "Nhap ma hang can xoa: ";
    int maHang;
    cin >> maHang;
    for (int i = 0; i < n; i++) {
        if (mh[i].maHang == maHang) {
            for (int j = i; j < n - 1; j++) {
                mh[j] = mh[j + 1];
            }
            n--;
        }
    }
}

void TimSoLuongTonnhieuNhat(int n, MatHang mh[100]) {
    //Tìm theo số lương tôn nhiều nhất
    int max = mh[0].soLuongTon;
    for (int i = 1; i < n; i++) {
        if (mh[i].soLuongTon > max) {
            max = mh[i].soLuongTon;
        }
    }
    cout << "Mat hang co so luong ton nhieu nhat: " << endl;
    for (int i = 0; i < n; i++) {
        if (mh[i].soLuongTon == max) {
            cout << "Ma hang: " << mh[i].maHang << endl;
            cout << "Ten hang: " << mh[i].tenHang << endl;
            cout << "So luong: " << mh[i].soLuong << endl;
            cout << "Don gia: " << mh[i].donGia << endl;
            cout << "So luong ton: " << mh[i].soLuongTon << endl;
            cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
        }
    }
}

void TimSoLuongTonitNhat(int n, MatHang mh[100]) {
    //Tìm theo số lượng tôn ít nhất
    int min = mh[0].soLuongTon;
    for (int i = 1; i < n; i++) {
        if (mh[i].soLuongTon < min) {
            min = mh[i].soLuongTon;
        }
    }
    cout << "Mat hang co so luong ton it nhat: " << endl;
    for (int i = 0; i < n; i++) {
        if (mh[i].soLuongTon == min) {
            cout << "Ma hang: " << mh[i].maHang << endl;
            cout << "Ten hang: " << mh[i].tenHang << endl;
            cout << "So luong: " << mh[i].soLuong << endl;
            cout << "Don gia: " << mh[i].donGia << endl;
            cout << "So luong ton: " << mh[i].soLuongTon << endl;
            cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
        }
    }
}

void GiaTiencaonhat(int n, MatHang mh[100]) {
    //Tìm theo giá tiền cao nhất
    int max = mh[0].donGia;
    for (int i = 1; i < n; i++) {
        if (mh[i].donGia > max) {
            max = mh[i].donGia;
        }
    }
    cout << "Mat hang co gia tien cao nhat: " << endl;
    for (int i = 0; i < n; i++) {
        if (mh[i].donGia == max) {
            cout << "Ma hang: " << mh[i].maHang << endl;
            cout << "Ten hang: " << mh[i].tenHang << endl;
            cout << "So luong: " << mh[i].soLuong << endl;
            cout << "Don gia: " << mh[i].donGia << endl;
            cout << "So luong ton: " << mh[i].soLuongTon << endl;
            cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
        }
    }
}

void BaoHanhhon12thang(int n, MatHang mh[100]) {
    //Tìm theo bảo hành hơn 12 tháng
    cout << "Mat hang co thoi gian bao hanh lon hon 12 thang: " << endl;
    for (int i = 0; i < n; i++) {
        if (mh[i].BaoHanh > 12) {
            cout << "Ma hang: " << mh[i].maHang << endl;
            cout << "Ten hang: " << mh[i].tenHang << endl;
            cout << "So luong: " << mh[i].soLuong << endl;
            cout << "Don gia: " << mh[i].donGia << endl;
            cout << "So luong ton: " << mh[i].soLuongTon << endl;
            cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
        }
    }
}

void Tangdansoluongton(int n, MatHang mh[100]) {
    //Sắp xếp tăng dần theo số lượng tồn
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (mh[j].soLuongTon < mh[j - 1].soLuongTon) {
                MatHang temp = mh[j];
                mh[j] = mh[j - 1];
                mh[j - 1] = temp;
            }
        }
    }
    cout << "Danh sach mat hang sau khi sap xep tang dan theo so luong ton: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Mat hang thu " << i + 1 << endl;
        cout << "Ma hang: " << mh[i].maHang << endl;
        cout << "Ten hang: " << mh[i].tenHang << endl;
        cout << "So luong: " << mh[i].soLuong << endl;
        cout << "Don gia: " << mh[i].donGia << endl;
        cout << "So luong ton: " << mh[i].soLuongTon << endl;
        cout << "Thoi gian bao hanh: " << mh[i].BaoHanh << endl;
    }
}

void menu(int n, MatHang mh[100]) {
menu:
    char opt;
    cout << "a. Nhap danh sach mat hang" << endl;
    cout << "b. Cap nhat thong tin mat hang" << endl;
    cout << "c. Xoa 1 mat hang" << endl;
    cout << "d. Tim mat hang co so luong ton nhieu nhat" << endl;
    cout << "e. Tim mat hang co so luong ton it nhat" << endl;
    cout << "f. Tim mat hang co gia tien cao nhat" << endl;
    cout << "g. Tim mat hang co thoi gian bao hanh lon hon 12 thang" << endl;
    cout << "h. Sap xep danh sach tang dan theo so luong ton" << endl;
    cout << "i. Thoat" << endl;
    cout << "k. Xuat." << endl;
    cout << "Nhap lua chon: ";
    cin >> opt;
    switch (opt) {
    case 'a':
        NhapMatHang(n, mh);
        goto menu;
    case 'b':
        CapNhatMatHang(n, mh);
        goto menu;
    case 'c':
        Xoa1MatHang(n, mh);
        goto menu;
    case 'd':
        TimSoLuongTonnhieuNhat(n, mh);
        goto menu;
    case 'e':
        TimSoLuongTonitNhat(n, mh);
        goto menu;
    case 'f':
        GiaTiencaonhat(n, mh);
        goto menu;
    case 'g':
        BaoHanhhon12thang(n, mh);
        goto menu;
    case 'h':
        Tangdansoluongton(n, mh);
        goto menu;
    case 'i':
        break;
    case 'k':
        XuatMatHang(n, mh);
        goto menu;
    default:
        cout << "Nhap sai, nhap lai." << endl;
        goto menu;
    }
}

int main() {
    int n;
    MatHang mh[100];
    cout << "Nhap so luong mat hang: ";
    cin >> n;

    menu(n, mh);

    system("pause");
    return 0;
}