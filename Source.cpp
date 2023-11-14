#include <iostream>

using namespace std;


int hieu(int a, int b){//ky
	return a-b;
}



// Tran Van Si

int tich(int a, int b) {
	return a * b;
}
int thuong(int a, int b) {
	return a / b;
}
//Pham Huu Truong Son
int tich(int a, int b){
	return a*b;
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	// Tong
	cout<<tong(2,3);
	// thuong
	cout << "Tich: " << tich(3, 4) << endl;
	cout << "Thuong: " << thuong(4, 2) << endl;

	
	system("pause");
	
	return 0;
}