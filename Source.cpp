#include <iostream>

using namespace std;


int tinhTong(int a, int b){
	return a+b;
}
int tinhHieu(int a, int b){
	return a-b;
}

float thuong(int a, int b)
{
if (b!=0)
return a/b;
else
return 0;}
=======
//Pham Huu Truong Son
int tich(int a, int b){
	return a*b;
}

int main()
{
	cout << "Day phep toan:" << endl;
	cout << "Tong: "<< tinhTong(2,3);
	cout << "\nHieu: " << tinhHieu(5,4);
	
	system("pause");
	
	return 0;
}