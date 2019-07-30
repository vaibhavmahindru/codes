 #include<iostream>
  using namespace std;
  class Shape
   {private:
       int side1,side2;
    public:
      Shape(int x,int y)
        {side1=x;
         side2=y;}
     void choice()
      {int ch;
       cout<<"1.area of square \n 2.area of rectangle \n 3.exit"<<endl;
       while(1)
         {cout<<"enter your chocie: ";
          cin>>ch;
          switch(ch)
             {case 1 : calculate(side1);
                            break;
              case 2 : calculate(side1,side2);
                           break;
              case 3:  exit(1);
                          break;
              default : cout<<"invalid choice"<<endl;}
          }
      }
int calculate(int side1)
  { int sqaure;
    sqaure= side1*side1;
    cout<<"area of square: "<<sqaure<<endl; }
int calculate(int side1,int side2)
  { int rectangle;
     rectangle= side1*side2;
    cout<<"area of rectangle: "<<rectangle<<endl;}
};
int main()
 {Shape obj1(20,10);
   obj1.choice();
   return 0;}
