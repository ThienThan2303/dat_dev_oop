#include <iostream>
#include <cmath>
using namespace std;

// 1. Khai báo lớp đối tượng Point
class Point
{
private:
    int x;
    int y;

public:
    void input();
    void move(int dx, int dy);
    void display();
    float distance(Point &d2);
};

// 2. Hàm di chuyển điểm
void Point::move(int dx, int dy)
{
    x += dx;
    y += dy;
}

// 3. Hàm hiển thị tọa độ điểm
void Point::display()
{
    cout << "Tọa độ của điểm: (" << x << ", " << y << ")" << endl;
}

// 4. Hàm tính khoảng cách giữa 2 điểm
float Point::distance(Point &d2)
{
    float a = (d2.x - x) * (d2.x - x);
    float b = (d2.y - y) * (d2.y - y);
    return sqrt(a + b);
}

// 5. Hàm nhập tọa độ điểm
void Point::input()
{
    cout << "Nhập hoành độ x: ";
    cin >> x;
    cout << "Nhập tung độ y: ";
    cin >> y;
}

// 6. Hàm chính
int main()
{
    Point p1, p2;
    cout << "Nhập tọa độ điểm đầu tiên: " << endl;
    p1.input();
    cout << "Nhập tọa độ điểm thứ hai: " << endl;
    p2.input();

    // Di chuyển điểm p1
    int dx, dy;
    cout << "Nhập khoảng cách di chuyển (dx, dy): ";
    cin >> dx >> dy;
    p1.move(dx, dy);
    
    cout << "Điểm p1 sau khi di chuyển: ";
    p1.display();

    // Tính khoảng cách giữa p1 và p2
    float dist = p1.distance(p2);
    cout << "Khoảng cách giữa 2 điểm: " << dist << endl;

    return 0;
}
