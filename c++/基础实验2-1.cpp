#include<iostream>
#include<math.h>
using namespace std;

class point
{
public:
    int cor_x;//点的横坐标
    int cor_y;//点的纵坐标
    point();//点类的构造函数
    ~point();//点类的析构函数
    void set_cor();//设定点的坐标
};

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

class circle
{
public:
    point cicle_center;//设定圆的圆心
    int radius;//圆的半径
    void set_circle();
    circle();
    ~circle();
};

void circle::set_circle()
{
    cin >> radius;
}

circle::circle()
{
    cout<<"这是circle的构造函数"<<endl;
}

circle::~circle()
{
    cout<<"这是circle的析构函数"<<endl;
}

int judge_cross(circle c1,circle c2)
{
    double center_distance;
    center_distance = pow(pow((double)(c1.cicle_center.cor_x-c2.cicle_center.cor_x),2)+pow((double)(c1.cicle_center.cor_y-c2.cicle_center.cor_y),2),0.5);
    double radius_distance_mius = fabs((double)c1.radius-(double)c2.radius);
    double radius_distance_max = (double)c1.radius+(double)c2.radius;
    if(center_distance > radius_distance_mius && center_distance < radius_distance_max)return 1;
    else return 0;
}

int main()
{
    circle c1;
    circle c2;
    cout << "请输入第一个圆的横坐标，纵坐标，半径" << endl;
    c1.cicle_center.set_cor();
    c1.set_circle();
    cout << "请输入第二个圆的横坐标，纵坐标，半径" << endl;
    c2.cicle_center.set_cor();
    c2.set_circle();
    int result = judge_cross(c1,c2);
    if(result == 1)cout << "两个圆相交" << endl;
    else cout << "两个圆不相交" << endl;
    return 0;
}