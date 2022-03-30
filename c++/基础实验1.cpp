#include<iostream>
using namespace std;

class matrix
{
public:
    int **p;
    void creat_matrix();//创建矩阵
    void ini_matrix();//初始化矩阵
    void delete_martrix();//释放矩阵内存
    void show_matrix();//显示矩阵元素
};

void matrix::creat_matrix()
{
    p = new int*[4];
    for(int i = 0; i < 4;i++)
    {
        p[i] = new int[5];
    }
}

void matrix::ini_matrix()
{
    for(int m = 0;m < 4;m++)
    {
        for(int n = 0;n < 5;n++)
        {
            cin >> p[m][n];
        }
    }
}

void matrix::delete_martrix()
{
    for(int m = 0;m < 4;m++)
    {
        delete [] p[m];
    }
}
void matrix::show_matrix()
{
    for(int m = 0;m < 4;m++)
    {
        for(int n = 0;n < 5;n++)
        {
            cout << p[m][n] <<" ";
        }
        cout << "\n";
    }    
}

void add_matrix(matrix &m1,matrix &m2,matrix &m3)//进行矩阵加法
{
    for(int m = 0;m < 4;m++)
    {
        for(int n = 0;n < 5;n++)
        {
            m3.p[m][n] = m1.p[m][n] + m2.p[m][n];
        }
    }
}

void subtract_matrix(matrix &m1,matrix &m2,matrix &m3)//进行矩阵减法
{
    for(int m = 0;m < 4;m++)
    {
        for(int n = 0;n < 5;n++)
        {
            m3.p[m][n] = m1.p[m][n] - m2.p[m][n];
        }
    }
}

int main()
{
    matrix m1;
    matrix m2;
    matrix m3;
    m1.creat_matrix();
    cout << "请输入第一个矩阵的元素"<<endl;
    m1.ini_matrix();
    m2.creat_matrix();
    cout << "请输入第二个矩阵的元素"<<endl;
    m2.ini_matrix();
    m3.creat_matrix();
    add_matrix(m1,m2,m3);
    cout <<"前两个矩阵相加的结果是:"<<endl;
    m3.show_matrix();
    subtract_matrix(m1,m2,m3);
    cout <<"前两个矩阵相减的结果是:"<<endl;
    m3.show_matrix();
    m1.delete_martrix();
    m2.delete_martrix();
    m3.delete_martrix();
    return 0;
}