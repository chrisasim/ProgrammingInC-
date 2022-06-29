#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  int choice;
  cout<<"1. add numbers";
  cout<<"2. concatenate strings";
  cin>>choice;
  if (choice==1)
  {
   int a, b;
   cout<<"Enter two numbers";
   cin>>a>>b;
   cout<<"Sum is the following one:"<< a+b<<'\n';
  }else
  {
   char s1[80], s2[80];
   cout<<"Enter two strings";
   cin>>s1;
   cin>>s2;
   strcat(s1,s2);
   cout<<"Concatenation is "<< s1<<'\n';

  }

  return 0;
}
