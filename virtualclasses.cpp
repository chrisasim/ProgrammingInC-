#include<iostream>

using namespace std;

class figure{
 protected :
  double x, y;
 public :
  void set_dim(double i, double j)
  {
   x=i;
   y=j;
  }
  virtual void show_area() = 0;
};

class triangle : public figure
{
 public : 
  void show_area()
  {
   cout<<"Triangle with height";
   cout<<x<<" and base" <<y;
   cout<<"has an area of ";
   cout<<x * 0.5 * y;
  }
};

class rectangle : public figure
{
 public:
  void show_area()
  {
   cout<<"Rectangle with dimensions";
   cout<<x<<" x"<<y;
   cout<<" has an area of "<<endl;
   cout<<x * y<<"\n";
 
  }

};

//class circle : public figure
//{
 //H elleipsh orismou ths show area tha prkalesei error/
//};

int main()
{
 figure *p;
 triangle t;
 rectangle r;
 //circle c;
 p = &t;
 p->set_dim(10.0, 5.0);
 p->show_area();
 return 0;
}
