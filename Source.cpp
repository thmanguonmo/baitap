#include <iostream>

using namespace std;
// Tran Van Si
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b)
{
if (b!=0)
return a/b;
else
return 0;}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	// Tong
	cout<<tong(2,3);
	// thuong
	cout<<thuong(2,4);
	system("pause");
	return 0;
}