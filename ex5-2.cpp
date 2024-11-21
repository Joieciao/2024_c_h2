#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{   
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=9; j++)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";   // \t 代表 Tab
        }
        cout<<endl;
    }
    system("pause");
    return 0;   
}
