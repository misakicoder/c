#include<iostream>
using namespace std;

class point
{
public:
    int cor_x;//��ĺ�����
    int cor_y;//���������
    point();//����Ĺ��캯��
    ~point();//�������������
    void set_cor();//�趨�������
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