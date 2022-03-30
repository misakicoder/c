#include<iostream>
using namespace std;

class matrix
{
public:
    int **p;
    int row,colomn;//函数的行和列
    void ini_matrix();//初始化矩阵
    matrix();//构造函数
    ~matrix();//矩阵的析构函数
    void show_matrix();//打印矩阵
    void operator=(const matrix &m)const;//重载运算符‘=’
    matrix operator+(const matrix &m)const;//重载运算符‘+’
    matrix operator-(const matrix &m)const;//重载运算符‘-’
    matrix(const matrix &m);//拷贝构造函数
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
    cout << "请输入m1矩阵的元素"<<endl;
    m1.ini_matrix();
    cout << "请输入m2矩阵的元素"<<endl;
    m2.ini_matrix();
    add_matrix(m1,m2,m3);
    cout <<"m1和m2矩阵的和为"<<endl;
    m3.show_matrix();
    subtract_matrix(m1,m2,m3);
    cout <<"m1和m2矩阵的差为"<<endl;
    m3.show_matrix();
    cout << "请输入pm1矩阵的元素"<<endl;
    pm1.ini_matrix();
    cout << "请输入pm2矩阵的元素"<<endl;
    pm2.ini_matrix();
    add_matrix(pm1,pm2,pm3);
    cout <<"pm1和pm2矩阵的和为"<<endl;
    pm3.show_matrix();
    subtract_matrix(pm1,pm2,pm3);
    cout <<"pm1和pm2矩阵的差为"<<endl;
    pm3.show_matrix();
    return 0;
}