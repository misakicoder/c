#include<iostream>
using namespace std;

class point
{
public:
    int cor_x;//点的横坐标
    int cor_y;//点的纵坐标
    point();//点类的构造函数
    ~point();//点类的析构函数
    void set_cor();//设定点的坐标
    point operator++();
    point operator++(int);
    point operator--();
    point operator--(int);
};

point point::operator++()
{
    this->cor_x++;
    this->cor_y++;
    return *this;
}

point point::operator++(int)
{
    point temp = *this;
    this->cor_x++;
    this->cor_y++;
    return temp;
}

point point::operator--()
{
    this->cor_x--;
    this->cor_y--;
    return *this;
}

point point::operator--(int)
{
    point temp = *this;
    this->cor_x--;
    this->cor_y--;
    return temp;
}

point::point()
{
    cor_x = 0;//初始化点的坐标为（0，0）
    cor_y = 0;
    cout << "这是point的构造函数"<<endl;
}

point::~point()
{
    cout << "这是point的析构函数"<<endl;
}

void point::set_cor()
{
    cin >> cor_x;
    cin >> cor_y;
}

int main()
{
    point p1;
    point p2;
    cout << p1.cor_x << " " <<  p1.cor_y << endl;
    p2 = ++p1;
    cout << p1.cor_x << " " <<  p1.cor_y << endl;
    cout << p2.cor_x << " " <<  p2.cor_y << endl;
    p2 = p1++;
    cout << p1.cor_x << " " <<  p1.cor_y << endl;
    cout << p2.cor_x << " " <<  p2.cor_y << endl;
    p2 = --p1;
    cout << p1.cor_x << " " <<  p1.cor_y << endl;
    cout << p2.cor_x << " " <<  p2.cor_y << endl;
    p2 = p1--;
    cout << p1.cor_x << " " <<  p1.cor_y << endl;
    cout << p2.cor_x << " " <<  p2.cor_y << endl;
    return 0;   
}