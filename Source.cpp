#include <iostream>

using namespace std;


int hieu(int a, int b){//ky
	return a-b;
}
float thuong(int a, int b);


// Tran Van Si

int tong(int a, int b){
	return a+b;
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
	//tich
	cout<< tich(3,4);

	
	system("pause");
	
	return 0;
}