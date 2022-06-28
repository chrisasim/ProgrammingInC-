#include<iostream>
#include<cstdlib>


using namespace std;


int main()
{
  int  nums[10];
  int a, b , t;
  int size;
  size = 10;
  for (t=0; t<size; t++)
  {
   rand();
  }

  cout<<"Original array is the following one:";
  for (t=0; t<size; t++)
  {
   cout<<nums[t]<< ' ';
  }
  //that is bubble sort
  for (a=1; a<size; a++)
  {
    for (b=size-1; b>=a; b--)
    {
      if (nums[b-1]>nums[b])
      {
       t=nums[b-1];
       nums[b-1] = nums[b];
       nums[b] = t;
      }
    }
  }
  cout<<"Sorted array:";
  for (t=0; t<size; t++)
  {
   cout<<nums[t]<< ' ' ;
  }


 return 0;
}
