#include <iostream>
#include <vector>
using namespace std;

class SinhVien {
private:
    string ID;
    string name;
    int age;
    double math;
    double literature;
    double english;
    double weightedGPA;

public:
    SinhVien() {}
    SinhVien(string _ID, string _name, int _age, double _math, double _literature, double _english) {
        ID = _ID;
        name = _name;
        age = _age;
        math = _math;
        literature = _literature;
        english = _english;
        weightedGPA = ((math * 2) + (literature * 2) + (english * 1)) / 5;
    }

    void nhap() {
        cout << "Nhap ID: ";
        cin >> ID;
        cout << "Nhap ten sinh vien: ";
        cin.ignore();
        getline(cin, name);
        cout << "Nhap tuoi: ";
        cin >> age;
        cout << "Nhap diem Toan: ";
        cin >> math;
        cout << "Nhap diem Van: ";
        cin >> literature;
        cout << "Nhap diem Anh: ";
        cin >> english;
        weightedGPA = ((math * 2) + (literature * 2) + (english * 1)) / 5;
    }

    void xuat() {
        cout << "ID: " << ID << endl;
        cout << "Ten sinh vien: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "Diem Toan: " << math << endl;
        cout << "Diem Van: " << literature << endl;
        cout << "Diem Anh: " << english << endl;
        cout << "Diem trung binh co he so: " << weightedGPA << endl;
    }

    double getGPA() {
        return weightedGPA;
    }
};

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    vector<SinhVien> students(n);

    // Nhập danh sách sinh viên
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin cho sinh vien thu " << i + 1 << ":" << endl;
        students[i].nhap();
    }

    // Xuất danh sách sinh viên
    cout << "\nDanh sach sinh vien: " << n << endl;
    for (SinhVien sv : students) {
        sv.xuat();
    }

    // Tìm sinh viên có điểm trung bình cao nhất
    SinhVien xuatsacstudent = students[0];
    for (SinhVien sv : students) {
        if (sv.getGPA() > xuatsacstudent.getGPA()) {
            xuatsacstudent = sv;
        }
    }

    // Xuất sinh viên có điểm trung bình cao nhất
    cout << "Sinh vien co diem trung binh cao nhat: " << endl;
    xuatsacstudent.xuat();

    return 0;
}

