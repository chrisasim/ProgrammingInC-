#include<iostream>
using namespace std;


void f1();
int main()
{
  char str[]="this is str in main()";
  cout<<"str"<<'\n';
  f1();
  cout<<str<<'\n';
  return 0;

}



void f1()
{
  char str[80];
  cout<<"Enter something";
  cin>>str;
  cout<<str<<'\n';
}
