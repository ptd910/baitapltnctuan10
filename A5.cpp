#include<iostream>
using namespace std;
struct sv
{
	char *name;
};
struct s
{
	int diem;
};
int main()
{
	sv sinhvien[2];
	sinhvien[1].name = "K";
	cout<<sinhvien[1].name;
}
