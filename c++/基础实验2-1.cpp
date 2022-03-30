#include<iostream>
#include<math.h>
using namespace std;

class point
{
public:
    int cor_x;//��ĺ�����
    int cor_y;//���������
    point();//����Ĺ��캯��
    ~point();//�������������
    void set_cor();//�趨�������
};

point::point()
{
    cor_x = 0;//��ʼ���������Ϊ��0��0��
    cor_y = 0;
    cout << "����point�Ĺ��캯��"<<endl;
}

point::~point()
{
    cout << "����point����������"<<endl;
}

void point::set_cor()
{
    cin >> cor_x;
    cin >> cor_y;
}

class circle
{
public:
    point cicle_center;//�趨Բ��Բ��
    int radius;//Բ�İ뾶
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
    cout<<"����circle�Ĺ��캯��"<<endl;
}

circle::~circle()
{
    cout<<"����circle����������"<<endl;
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
    cout << "�������һ��Բ�ĺ����꣬�����꣬�뾶" << endl;
    c1.cicle_center.set_cor();
    c1.set_circle();
    cout << "������ڶ���Բ�ĺ����꣬�����꣬�뾶" << endl;
    c2.cicle_center.set_cor();
    c2.set_circle();
    int result = judge_cross(c1,c2);
    if(result == 1)cout << "����Բ�ཻ" << endl;
    else cout << "����Բ���ཻ" << endl;
    return 0;
}