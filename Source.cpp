#include <iostream>

using namespace std;


int tich(int a, int b) {
	return a * b;
}
int thuong(int a, int b) {
	return a / b;
}
int tinhTong(int a, int b){
	return a+b;
}
int tinhHieu(int a, int b){
	return a-b;
}

int main()
{

	cout << "Day phep toan:" << endl;
	cout << "Tong: "<< tinhTong(2,3);
	cout << "\nHieu: " << tinhHieu(5,4);
	cout << "Tich: " << tich(3, 4) << endl;
	cout << "Thuong: " << thuong(4, 2) << endl;

	
	system("pause");
	
	return 0;
}