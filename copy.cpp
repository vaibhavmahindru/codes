#include<iostream>
using namespace std;
class test
{
	int code;
	float price;
	Public:
	test(int c, float p);
	test(const test &t);
	void disp();
};
test :: test(int c, float p
{
	code=c;
	price=p;
}
test :: test(const test &t)
{
	code= t.code;
	price= t.price;
}
void test :: dispvoid()
{
	cout<<"code:"<<code;
	cout<<"price:"<<price;
}
int main()
{
test t1(101,50.6);
test t2(t1);
test t3=t2;
cout<<"t1 object";
t1.disp();
cout<<"t2 object";
t2.disp();
cout<<"t3 object";
t3.disp();
return 0;
}
