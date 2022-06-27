#include<iostream>
using namespace std;

void myfunc();

int main()
{
 cout<<"In main()";
 myfunc();
 cout<<"Back to main()";
 return 0;
}

void myfunc()
{
 cout<<"Inside myfunc()";
}
