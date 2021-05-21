#include<iostream>
using namespace std;
struct point
{
	double x,y;
};
void thamtri(point a)
{
	cout<<&a;
}
void thamchieu(point &a)
{
	cout<<&a;
}
int main()
{
	point a;
	cout<<&a<<endl;
	thamtri(a);cout<<"\n";
	thamchieu(a);
	return 0;
}
