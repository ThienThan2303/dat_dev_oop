#include<iostream>
using namespace std;

//1. Khai báo lớp đối tượng
class giaSuc
{
    public:
        giaSuc();
        ~giaSuc();
        int sinhCon();
        int choSua();
        void keu();
};

//2. Khai báo hàm giaSuc
giaSuc::giaSuc()
{
}

//3. Khai báo hàm hủy giaSuc
giaSuc::~giaSuc()
{
}

//4. Khai báo hàm sinhCon
int giaSuc::sinhCon()
{
    return 0;
}

//5. Khai báo hàm choSua
int giaSuc::choSua()
{
    return 0;
}

//6. Khai báo hàm keu
void giaSuc::keu()
{
}

//7. Khai báo lớp con
class Bo :public giaSuc
{
    public:
        Bo();
        ~Bo();
        int sinhCon();
        int choSua();
        void keu();
};

//8. Khai báo hàm Bo
Bo::Bo()
{
}

//9. Khai báo hàm hủy Bo
Bo::~Bo()
{
}

//10. Khai báo sinhCon of Bo
int Bo::sinhCon()
{
    return rand() % 7;
}

//11. Khai báo choSua of Bo
int Bo::choSua()
{
    return rand() % 20;
}

//12. Khai báo keu of Bo
void Bo::keu()
{
    cout << "Ủm Booooooooo" << endl;
}

class De :public giaSuc
{
    public:
        De();
        ~De();
        int sinhCon();
        int choSua();
        void keu();
};

//13. Khai báo hàm De
De::De()
{
}

//14. Khai báo hàm hủy De
De::~De()
{
}

//15. Khai báo sinhCon of De
int De::sinhCon()
{
    return rand() % 7;
}

//16. Khai báo choSua of De
int De::choSua()
{
    return rand() % 10;
}

//17. Khai báo keu of De
void De::keu()
{
    cout << "Beeeeeeeeee" << endl;
}

class Cuu :public giaSuc
{
    public:
        Cuu();
        ~Cuu();
        int sinhCon();
        int choSua();
        void keu();
};

//18. Khai báo hàm Cuu
Cuu::Cuu()
{
}

//19. Khai báo hàm hủy Cuu
Cuu::~Cuu()
{
}

//20. Khai báo sinhCon of Cuu
int Cuu::sinhCon()
{
    return rand() % 7;
}

//21. Khai báo choSua of Cuu
int Cuu::choSua()
{
    return rand() % 5;
}

//22. Khai báo keu of Cuu
void Cuu::keu()
{
    cout << "Ùm úmmmmmmmmmm" << endl;
}

//23. Hàm chính
int main()
{
    int tongBo = 0;
    int litSuaBo = 0;
    int tongDe = 0;
    int litSuaDe = 0;
    int tongCuu = 0;
    int litSuaCuu = 0;
    Bo b[15];
    De d[15];
    Cuu c[15];
    int soBo;
    int soDe;
    int soCuu;
    cout << "Nhập số lượng Bò: ";
    cin >> soBo;
    for(int i = 0; i < soBo; i++)
    {
        tongBo += 1 + b[i].sinhCon();
        litSuaBo += b[i].choSua();
        b[i].keu();
    }
    cout << "Tổng số con Bò: " << tongBo << endl;
    cout << "Tổng số lít sữa: " << litSuaBo << endl;
    cout << "Nhập số lượng Dê: ";
    cin >> soDe;
    for(int i = 0; i < soDe; i++)
    {
        tongDe += 1 + d[i].sinhCon();
        litSuaDe += d[i].choSua();
        d[i].keu();
    }
    cout << "Tổng số con Dê: " << tongDe << endl;
    cout << "Tổng số lít sữa: " << litSuaDe << endl;
    cout << "Nhập số lượng Cừu: ";
    cin >> soCuu;
    for(int i = 0; i < soCuu; i++)
    {
        tongCuu += 1 + c[i].sinhCon();
        litSuaCuu += c[i].choSua();
        c[i].keu();
    }
    cout << "Tổng số con Cừu: " << tongCuu << endl;
    cout << "Tổng số lít sữa: " << litSuaCuu << endl;
    system("pause");
    return 0;
}
