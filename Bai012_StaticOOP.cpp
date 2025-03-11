#include<iostream>
using namespace std;

//1. Khai báo lớp đối tượng
class Student
{
    private:
        string name;
        int id;
        static int studentCount;
    public:
        void Nhap(int id, string name);
        void Xuat();
        static int getStudentCount();
};

int Student::studentCount = 0;

//2. Khai báo hàm Nhập
void Student::Nhap(int id, string name)
{
    this->id = id;
    this -> name = name;
    studentCount++;
}

//3. Khai báo hàm Xuất
void Student::Xuat()
{
    cout << id << "     " << name << endl;
}

//4. Khai báo hàm tĩnh
int Student::getStudentCount()
{
    return studentCount;
}

//5. Khai báo hàm chính
int main()
{
    Student A, B, C;
    A.Nhap(1, "Đường Tăng");
    B.Nhap(2, "Tiêu Thanh");
    C.Nhap(3, "Ngộ Không");
    cout << "--------Danh sách sinh viên--------" << endl;
    cout << "Mã sinh viên \t| Tên sinh viên" << endl;
    A.Xuat();
    B.Xuat();
    C.Xuat();
    cout << "\n Tổng số lượng sinh viên: " << Student::getStudentCount();
    return 1;
}