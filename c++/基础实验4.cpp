#include<iostream>
using namespace std;

#include<time.h>
#include<stdlib.h>

int main()
{
    int t;
    srand(time(0));
    t = rand()%1000+1;
    int m;
    cin >> m;
    cout << t << endl;
    while(m != t)
    {
        while(!cin.good())
        {
            cout << "��������";
            cin.clear();
            cin.sync();
            cin >> m;
        }
        if(m < t)cout << "��ȷ������Ҫ��������ִ�";
        if(m > t)cout << "��ȷ������Ҫ���������С";
        cin >> m;
    }
    if(m == t)cout << "��ϲ�㣬�����";
    return 0;
}