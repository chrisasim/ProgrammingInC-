#include<iostream>
#include<cstdlib>

using namespace std;

void play(int m);

int main()
{
 int option;
 int magic;
 magic = rand();
 do
 {
  cout<<"1.Get a new magic number";
  cout<<"2. Play";
  cout<<"3. Quit";
  do 
  { 
   cout<<"Enter your choice:";
   cin>> option;
  }while(option<1 || option>3)


  switch(option)
  {
   case 1:
    magic = rand();
    break;
   case 2:
    play(magic);
    break;
  case 3:
    cout<<"Goodbye";
    break;
  }
 }while(option!=3)

}



void play(int m)
{
 int t,x;
 for (t=0; t<100; t++0)
 {
   int t,x;
   for (t=0;t<100;t++)
   {
    cout<<"Guess the number";
    cin>>x;
    if(x==m)
    {
     cout<<"Right";
     return;
    }else
    {
      if (x<m)
      {
       cout<<"Too Low";
      }else
      {
       cout<<"Too high";
      }
    }
   cout<<"You have used up all your guesses";
   }
 }
}
