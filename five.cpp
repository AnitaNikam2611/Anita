/* first programme in c++ */


#include<iostream>
using namespace std;
void swapr (int &p,int &q)
{
  int dummy;
  dummy =p;
  p=q;
  q=dummy;
}
 int main()
{
  int x = 225, y=305;
  cout<<x<<"\t"<<y<<endl;
 swapr (x,y);
  cout<<"after swap"<<endl;
  cout<<x<<"\t"<<y;
 return 0;
}

/* first programme in c++ */
