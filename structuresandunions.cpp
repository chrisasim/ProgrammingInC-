#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdlib>
using namespace std;


const int SIZE=100;

struct inv_type
{
 char item[40];
 double cost;
 double retail;
 int on_hand;
 int lead_time;
}invtry[SIZE];

void enter(), init_list(), display();
void update(), input(int i);
int menu();


int main()
{
 char choice;
 init_list();
 for (;;)
 {
  choice = menu();
  switch(choice)
  {
   case 'e': enter();
    break;
   case 'd': display();
    break;
   case 'u': update();
    break;
   case 'q': return 0;

  }
 }
}


void init_list()
{
 int t;
 for (t=0; t<SIZE; t++)
 {
  *invtry[t].item = '\0';
 }
}


int menu()
{
 char ch;
 cout<<'\n';
 do
 {
  cout<<"E enter";
  cout<<"D Display ";
  cout<<"U Update";
  cout<<"Q Quit ";
  cin>>ch;
 }while(!strchr("eduq", tolower(ch)));


 return tolower(ch);
}

void enter()
{
 int i;
 for (int i =0; i<SIZE; i++)
 {
  if (!*invtry[i].item)
  {
   break;
  }
 }
 if (i==SIZE)
 {
  cout<<"List Full.\n";
  return ;
 }

 input(i);
}

void input(int i)
{
 cout<<"Item";
 cin>>invtry[i].item;

 cout<<"Cost:";
 cin>>invtry[i].cost;

 cout<<"Retail price";
 cin>>invtry[i].retail;

 cout<<"Lead time to resupply in days";
 cin>>invtry[i].lead_time;
}



void update()
{
 int i;
 char name[80];
 cout<<"Enter name";
 cin>>name;
 for (i=0;i<SIZE; i++)
 {
  cout<<"Enter item";
  cin>>name;

 for (int i =0;i<SIZE;i++)
 {
  if (!strcmp(name, invtry[i].item))
  {
   break;
  }
 }
 if (i==SIZE)
 {
  cout<<"Item not found";
  return;
 }
 }
 cout<<"Enter new information";
 input(i);
}



void display()
{
 int t;
 if (*invtry[t].item)
 {
  cout<<invtry[t].item;
  cout<<invtry[t].cost;
  cout<<invtry[t].retail;
  cout<<invtry[t].on_hand;
  cout<<invtry[t].lead_time;
 }

}
