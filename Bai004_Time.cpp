#include<iostream>
using namespace std;

//1. Định nghĩa cấu trúc time
struct Time
{
    int gio;
    int phut;
    int giay;
};
typedef struct Time TIME;

//2. Các hàm cần thiết
void Nhap(TIME&);
void XuatSum(TIME, TIME);
TIME Sum(TIME, TIME);
void Xuatchodep();
bool ktraTIME(TIME);
void Xuat(TIME, TIME);

//3. Khai báo hàm Nhập
void Nhap(TIME &t)
{
    cin >> t.gio >> t.phut >> t.giay;
}

//4. Khai báo hàm cộng 2 thời gian
TIME Sum(TIME t1, TIME t2)
{
    TIME res = t1;
    res.gio += t2.gio;
    res.phut += t2.phut;
    res.giay += t2.giay;
    while(res.gio > 23)
    {
        res.gio -= 24;
    }
    while(res.phut > 59)
    {
        res.phut++;
        res.phut -= 60;
    }
    while(res.giay > 59)
    {
        res.giay++;
        res.giay -= 60;
    }
    return res;
}

//5. Khai báo hàm Xuất số cho đúng định dạng
void Xuatchodep(int n)
{
    if(n<10) cout << 0 << n;
    else cout << n;
}

//6. Khai báo xuất hàm cộng 2 thời gian
void XuatSum(TIME t1)
{
    Xuatchodep(t1.gio);
    cout << ":";
    Xuatchodep(t1.phut);
    cout << ":";
    Xuatchodep(t1.giay);
    cout << " ";
}

//7. Khai báo xuất hàm kết quả
void Xuat(TIME t1, TIME t2)
{
    XuatSum(t1);
    cout << "+ ";
    XuatSum(t2);
    cout << "= ";
    TIME res = Sum(t1, t2);
    XuatSum(res);
}

//8. Kiểm tra thời gian
bool ktraTIME(TIME t)
{
    if(t.gio < 0 || t.gio > 24 || t.phut < 0 || t.phut > 60 || t.giay < 0 || t.giay > 60){
        cout << "Thoi gian khong hop le. Vui long nhap lai.";
        return 0;
}
return 1;
}

// Hàm xử lí chính
int main()
{
    TIME t1, t2;
    cout << "Thoi gian ban dau khi bat dau dem la: ";
    Nhap(t1);
    if(ktraTIME(t1)== 0) return true;
    cout << "Thoi gian cong them co gia tri la: ";
    Nhap(t2);
    if(ktraTIME(t2)== 0) return true;
    cout << "Ket qua sau khi duoc tinh la: ";
    Xuat(t1, t2);
    return 0;
}
