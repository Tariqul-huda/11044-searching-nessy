#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    int test,row,col,s_row,s_col,result;
//    freopen("input.txt","r",stdin);
    cin>>test;
    while(test)
    {
        s_row=s_col=result=0;
        cin>>row>>col;
        row-=2,col-=2;
        while(row>0)
        {
            s_row++;
            row-=3;
        }
        while(col>0)
        {
            s_col++;
            col-=3;
        }
        result = s_row * s_col;
        cout<<result<<endl;
        test--;
    }


    return 0;
}
