#include<iostream>
using namespace std;

int main()
{
 cout<<"start\n";
 try{
  cout<<"Inside try block";
  throw 99;
  cout<<"THis will not execute"<<endl;

 }
 catch(int i)
 {
  cout<<"Caught an exception -- value is : ";
  cout<<i<<endl;
  return 0;
 }
}
