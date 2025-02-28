#include<iostream>
using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
PHANSO Tong(PHANSO, PHANSO);
PHANSO Hieu(PHANSO, PHANSO);
PHANSO Tich(PHANSO, PHANSO);
PHANSO Thuong(PHANSO, PHANSO);

int main()
{
    PHANSO ps1, ps2, kq;
    Nhap(ps1);
    Nhap(ps2);
    kq = Tong(ps1, ps2);
    cout << "Tong la: ";
    Xuat(kq);
    kq = Hieu(ps1, ps2);
    cout << "Hieu la: ";
    Xuat(kq);
    kq = Tich(ps1, ps2);
    cout << "Tich la: ";
    Xuat(kq);
    kq = Thuong(ps1, ps2);
    cout << "Thuong la: ";
    Xuat(kq);
}

void Nhap(PHANSO &ps)
{
    cout << "Nhap tu: ";
    cin >> ps.tu;
    cout << "Nhap mau: ";
    cin >> ps.mau;
}

void Xuat(PHANSO ps)
{
    cout << ps.tu << "/" << ps.mau << endl;
}

PHANSO Tong(PHANSO ps1, PHANSO ps2)
{
    PHANSO dapan;
    dapan.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    dapan.mau = ps1.mau * ps2.mau;
    return dapan;
}

PHANSO Hieu(PHANSO ps1, PHANSO ps2)
{
    PHANSO dapan;
    dapan.tu = ps1.tu * ps2.mau - ps2.tu * ps1.mau;
    dapan.mau = ps1.mau * ps2.mau;
    return dapan;
}

PHANSO Tich(PHANSO ps1, PHANSO ps2)
{
    PHANSO dapan;
    dapan.tu = ps1.tu * ps2.tu;
    dapan.mau = ps1.mau * ps2.mau;
    return dapan;
}

PHANSO Thuong(PHANSO ps1, PHANSO ps2)
{
    PHANSO dapan;
    dapan.tu = ps1.tu * ps2.mau;
    dapan.mau = ps1.mau * ps2.tu;
    return dapan;
}
