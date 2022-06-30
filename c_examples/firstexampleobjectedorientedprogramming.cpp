#include<iostream>
using namespace std;

class queue
{
 int q[100];
 int sloc, rloc;
public:
 void init();
 void qput(int i);
 int qget();
};

void queue::init()
{
 rloc = sloc=0;
}
void queue::qput(int i)
{
 if (sloc==100)
 {
  cout<<"Queue is full";
  return;
 }

 sloc++;
 q[sloc] = i;
}

int queue::qget()
{
 if (rloc==sloc)
 {
  cout<<"Queue underflow";
  return 0;
 }
 rloc++;
 return q[rloc];
}



int main()
{
  queue a,b;
  a.init();
  b.init();

  a.qput(10);
  b.qput(19);
  a.qput(20);
  b.qput(1);

 cout<<"Contents of queue a:";
 cout<<a.qget()<<"";
 cout<<a.qget()<<"";

 cout<<"Contents of queue b:";
 cout<<b.qget()<<"";
 cout<<b.qget()<<"\n";
 return 0;
}
