#include<iostream>
using namespace std;
class complex
  { private:
       int i1,r1,i2,r2;		
     public:
        complex(int r1=0,int i1=0,int r2=0,int i2=0)
          { this->r1=r1;
             this->i1=i1;
	  this->r2=r2;
	  this->i2=i2;}
        complex setR1(int a)
           { r1=a;
	  return *this;}
        complex setI1(int b)
           { i2=b;
	   return *this;}
        complex setR2(int c)
          { r2=c;
             return *this;}
         complex setI2(int d)
            { i2=d;
	    return *this;}
          void arithmetic()
	 { cout<<"sum = "<<r1+r2<<"+"<<"i"<<i1+i2<<endl;
	     cout<<"difference= "<<r1-r2<<"+"<<"i"<<i1+i2<<endl;
	     cout<<"product= "<<((r1*r2)-(i1*i2))<<"+"<<"i"<<((r1*i2)+(r2*i1))<<endl;}
   };
 int main()
  { complex obj;
     obj.setR1(5);
      obj.setI1(2);
      obj.setR2(4);
      obj.setI2(1);
      obj.arithmetic();
      return 0;}
