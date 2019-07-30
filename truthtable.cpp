#include<iostream>
using namespace std;
class truth
 { public:
     int x,y,z;
     void truthtable()
      { cout<<"x\t y\t z\t xy+z";
         for(x=0;x<=1;++x)
           for(y=0;y<=1;++y)
	 for(z=0;z<=1;++z)
	    { if(x*y+z==2)
	         cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\tl";
                     else
	         cout<<"\n\n"<<x<<"\t"<<y<<"\t"<<z<<"\t"<<x*y+z;
                 }
          }
    };
int main()
{ truth T;
   T.truthtable();
    return 0;}
