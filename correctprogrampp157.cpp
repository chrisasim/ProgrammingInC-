#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;


int main()
{
  char s[80];
  char *p1;
  do
  {
    p1 = s;
    cout<<"Enter a string";
    //gets(p1);
    while(*p1)
    {
     cout<<(int) *p1++<< ' ' ;
    }

  }while(strcmp(s, "done"));
  return 0;
}
