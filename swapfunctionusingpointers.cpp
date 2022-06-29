#include<iostream>
using namespace std;
void swap(int *x, int *y);


int main()
{
 int i,j;
 i=10;
 j=20;
 cout<<"inital values of i and j:";
 cout<<i<< ' '<<j<< '\n';
 swap(&i, &j);
 cout<<"swapped values of i and j";
 cout<<i<<j<<endl;
 return 0;
}



void swap(int *x, int *y)
{
 int temp;
 temp = *x;
 *x = *y;
 *y=temp;
}



