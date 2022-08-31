/*
    Funtions in C++
*/
#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter 2 numbers to find the greatest:"<<endl;
    cin>>a>>b;
    int c = maximum(a,b);
    cout<<"greatest value is:"<<c<<endl;

    return 0;
}

int maximum(int y, int x)
{
    if(y>x)
    return y;
    else
    return x;
}

