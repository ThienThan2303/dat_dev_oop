#include<bits/stdc++.h>
using namespace std;
struct DaThucBac2
{
    double a, b, c;
};
typedef struct DaThucBac2 DATHUCBAC2;

struct DaThucBac4
{
    double A, B, C, D, E;
};
typedef struct DaThucBac4 DATHUCBAC4;

void Nhap(DATHUCBAC2&);
void Xuat(DATHUCBAC2);
void Xuat(DATHUCBAC4);
DATHUCBAC2 Tong(DATHUCBAC2, DATHUCBAC2);
DATHUCBAC2 Hieu(DATHUCBAC2, DATHUCBAC2);
DATHUCBAC4 Tich(DATHUCBAC2, DATHUCBAC2);
double tinhF0(DATHUCBAC2);
double tinhF0(DATHUCBAC4);

int main()
{
    DATHUCBAC2 dt1, dt2, kq;
    Nhap(dt1);
    Nhap(dt2);
    Xuat(dt1);
    Xuat(dt2);
    kq = Tong(dt1, dt2);
    cout << "Tong hai da thuc la: ";
    Xuat(kq);
    kq = Hieu(dt1, dt2);
    cout << "Hieu hai da thuc la: ";
    Xuat(kq);
    DATHUCBAC4 kq_tich = Tich(dt1, dt2);
    cout << "Tich hai da thuc la: ";
    Xuat(kq_tich);
    cout << "Gia tri F(0) cua da thuc 1: " << tinhF0(dt1) << endl;
    cout << "Gia tri F(0) cua da thuc 2: " << tinhF0(dt2) << endl;
    cout << "Gia tri F(0) cua tich hai da thuc: " << tinhF0(kq) << endl;
}
void Nhap(DATHUCBAC2 &dt)
{
    cout << "Nhap he so a, b, c: " ;
    cin >> dt.a >> dt.b >> dt.c;
}
void Xuat(DATHUCBAC2 dt)
{
    cout << dt.a << "x^2 + " << dt.b << "x + " << dt.c << endl;
}
void Xuat(DATHUCBAC4 dt)
{
    cout << dt.A << "x^4 + " << dt.B << "x^3 + " << dt.C << "x^2+ " << dt.D << "x + " << dt.E << endl;
}
DATHUCBAC2 Tong(DATHUCBAC2 dt1, DATHUCBAC2 dt2)
{
    DATHUCBAC2 temp;
    temp.a = dt1.a + dt2.a;
    temp.b = dt1.b + dt2.b;
    temp.c = dt1.c + dt2.c;
    return temp;
}
DATHUCBAC2 Hieu(DATHUCBAC2 dt1, DATHUCBAC2 dt2)
{
    DATHUCBAC2 temp;
    temp.a = dt1.a - dt2.a;
    temp.b = dt1.b - dt2.b;
    temp.c = dt1.c - dt2.c;
    return temp;
}
DATHUCBAC4 Tich(DATHUCBAC2 dt1, DATHUCBAC2 dt2)
{
    DATHUCBAC4 temp;
    temp.A = dt1.a * dt2.a;
    temp.B = dt1.a * dt2.b + dt1.b * dt2.a;
    temp.C = dt1.b * dt2.b + dt1.a * dt2.c + dt1.c * dt2.a;
    temp.D = dt1.a * dt2.c + dt1.c * dt2.b;
    temp.E = dt1.c * dt2.c;
    return temp;
}
double tinhF0(DATHUCBAC2 dt)
{
    return dt.c;
}
double tinhF0(DATHUCBAC4 dt)
{
    return dt.E;
}
