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
            cout << "输入有误";
            cin.clear();
            cin.sync();
            cin >> m;
        }
        if(m < t)cout << "正确的数字要比这个数字大";
        if(m > t)cout << "正确的数字要比这个数字小";
        cin >> m;
    }
    if(m == t)cout << "恭喜你，答对了";
    return 0;
}