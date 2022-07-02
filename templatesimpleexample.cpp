#include<iostream>
using namespace std;

template<class X> void swapargs(X &a, X &b)
{
 X temp;
 temp = a;
 b = a;
 b=temp;
}

int main()
{
 int i=10, j=20;
 double x = 10.0, y=23.3;
 char a= 'X', b= 'z';
 cout<<"Original i, j"<<i<< ' '<<endl;
 cout<<"x, y"<<x<<y<<endl;
 cout<<"a,b"<<a<<b<<endl;
 swapargs(i, j);
 swapargs(x,y);
 swapargs(a,b);
 cout<<"i,j"<<i<<j<<endl;
 cout<<"a,b"<<a<<b<<endl;
 cout<<"x,y"<<x<<y<<endl;
 return 0;
}
