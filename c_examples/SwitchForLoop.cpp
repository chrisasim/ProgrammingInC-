#include<iostream>
using namespace std;

int main()
{
 int choice;
 cout<<"Help on:\n";
 cout<<"1.";
 cout<<"2.";
 cout<<"3.";
 cout<<"Enter choice between 1 and 3";
 cin>>choice;
 cout<<"\n";
 switch(choice)
 {
  case 1:
   cout<<"for the C++ most versatile loop";
   break;
  case 2:
   cout<<"if is c++ conditioal branch statement";
   break;
  case 3:
   cout<<"switch is for c++ multi-way branch statement";
   break;
  default:
   cout<<"You must enter a number between 1 and 3";
 }

 return 0;

}
