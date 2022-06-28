#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

bool password();

int main()
{
 if(password()) 
 {
 cout<<"Logged On\n";
 }
 else
 {
  cout<<"Access Denied\n";
 }
 return 0;
}

bool password()
{
  char s[80];
  cout<<"Enter password";
  //gets(s);
  if (strcmp(s, "password"))
  {
   cout<<"Invalid password\n";
   return false;
  }

  return true;
}
