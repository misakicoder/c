#include<iostream>
using namespace std;

class matrix
{
public:
    int **p;
    int row,colomn;//�������к���
    void ini_matrix();//��ʼ������
    matrix();//���캯��
    ~matrix();//�������������
    void show_matrix();//��ӡ����
    void operator=(const matrix &m)const;//�����������=��
    matrix operator+(const matrix &m)const;//�����������+��
    matrix operator-(const matrix &m)const;//�����������-��
    matrix(const matrix &m);//�������캯��
};

matrix::matrix(const matrix &m)
{
    for(int i = 0;i < m.row;i++)
    {
        for(int j = 0;j < m.colomn;j++)
        {
            p[i][j] = m.p[i][j];
        }
    }
}

void matrix::operator=(const matrix &m)const
{
    for(int i = 0;i < m.row;i++)
    {
        for(int j = 0;j < m.colomn;j++)
        {
            p[i][j] = m.p[i][j];
        }
    }
}

matrix matrix::operator+(const matrix &m)const
{
    matrix sum;
    for(int i = 0;i < m.row;i++)
    {
        for(int j = 0;j < m.colomn;j++)
        {
            sum.p[i][j] = p[i][j]+m.p[i][j];
        }
    }
    return sum;
}

matrix matrix::operator-(const matrix &m)const
{
    matrix quotient;
    for(int i = 0;i < m.row;i++)
    {
        for(int j = 0;j < m.colomn;j++)
        {
            quotient.p[i][j] = p[i][j]-m.p[i][j];
        }
    }
    return quotient;
}

matrix::matrix()
{
    p = new int*[4];
    for(int i = 0; i < 4;i++)
    {
        p[i] = new int[5];
    }
    row = 2;
    colomn = 2;
}

void matrix::ini_matrix()
{
    for(int m = 0;m < row;m++)
    {
        for(int n = 0;n < colomn;n++)
        {
            cin >> p[m][n];
        }
    }
}

matrix::~matrix()
{
    for(int m = 0;m < row;m++)
    {
        delete [] p[m];
    }
}
void matrix::show_matrix()
{
    for(int m = 0;m < row;m++)
    {
        for(int n = 0;n < colomn;n++)
        {
            cout << p[m][n] <<" ";
        }
        cout << "\n";
    }    
}

void add_matrix(matrix &m1,matrix &m2,matrix &m3)
{
    m3 = (m1+m2);
}

void subtract_matrix(matrix &m1,matrix &m2,matrix &m3)
{
    m3 = (m1-m2);
}
int main()
{
    matrix m1;
    matrix m2;
    matrix m3;
    matrix pm1;
    matrix pm2;
    matrix pm3;
    cout << "������m1�����Ԫ��"<<endl;
    m1.ini_matrix();
    cout << "������m2�����Ԫ��"<<endl;
    m2.ini_matrix();
    add_matrix(m1,m2,m3);
    cout <<"m1��m2����ĺ�Ϊ"<<endl;
    m3.show_matrix();
    subtract_matrix(m1,m2,m3);
    cout <<"m1��m2����Ĳ�Ϊ"<<endl;
    m3.show_matrix();
    cout << "������pm1�����Ԫ��"<<endl;
    pm1.ini_matrix();
    cout << "������pm2�����Ԫ��"<<endl;
    pm2.ini_matrix();
    add_matrix(pm1,pm2,pm3);
    cout <<"pm1��pm2����ĺ�Ϊ"<<endl;
    pm3.show_matrix();
    subtract_matrix(pm1,pm2,pm3);
    cout <<"pm1��pm2����Ĳ�Ϊ"<<endl;
    pm3.show_matrix();
    return 0;
}