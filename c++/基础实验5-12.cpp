#include<iostream>
#include<math.h>
using namespace std;
const double pi = 3.14;

class shape
{
public:
    virtual void area_calculated()=0;
    shape();
    virtual ~shape();
};

void shape::area_calculated()
{
    cout << "这是shape的area函数"<< endl;
}

shape::shape()
{
    cout << "这是shape的构造函数"<<endl;
}

shape::~shape()
{
    cout << "这是shape的析构函数"<<endl;
}

class rectangle : public shape
{
private:
    int length;
    int width;
public:
    int area;
public:
    rectangle();
    ~rectangle();
    void area_calculated(); 
    
};

void rectangle::area_calculated()
{
    area = length * width;
}

rectangle::rectangle()
{
    length = 4;
    width = 3;
    cout << "这是rectangle的构造函数"<<endl;
}

rectangle::~rectangle()
{
    cout << "这是rectangle的析构函数"<<endl;
}

class circle : public shape 
{
private:
    double radius; 
public:
    double area;
public:    
    circle();
    ~circle();
    void area_calculated();

};

void circle::area_calculated()
{
    area = pow(radius,2)*pi;
}

circle::circle()
{
    radius = 5.2;
    cout << "这是circle的构造函数"<<endl;
}

circle::~circle()
{
    cout << "这是circle的析构函数"<<endl;
}

int main()
{
    rectangle r1;
    circle c1;
    r1.area_calculated();
    c1.area_calculated();
    cout << "矩形r1的面积是:" << r1.area<<endl;
    cout << "圆形c1的面积是:" << c1.area<<endl;
    return 0;
}