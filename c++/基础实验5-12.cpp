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
    cout << "����shape��area����"<< endl;
}

shape::shape()
{
    cout << "����shape�Ĺ��캯��"<<endl;
}

shape::~shape()
{
    cout << "����shape����������"<<endl;
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
    cout << "����rectangle�Ĺ��캯��"<<endl;
}

rectangle::~rectangle()
{
    cout << "����rectangle����������"<<endl;
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
    cout << "����circle�Ĺ��캯��"<<endl;
}

circle::~circle()
{
    cout << "����circle����������"<<endl;
}

int main()
{
    rectangle r1;
    circle c1;
    r1.area_calculated();
    c1.area_calculated();
    cout << "����r1�������:" << r1.area<<endl;
    cout << "Բ��c1�������:" << c1.area<<endl;
    return 0;
}