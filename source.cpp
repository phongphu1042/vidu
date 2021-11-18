#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
bool ktChanLe(int n);
int main()
{
	int a, b, n;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	if(phepToan=="-"){
		hieu(a,b);
	if(phepToan=="+"){
		tong(a,b);
	}

	if(phepToan=="*"){
		tich(a,b);
	cout << "Nhap so nguyen n: ";
	cin >> n;
	if(ktChanLe(n)){
		cout<<"n la so chan";
	}
	else{
		cout<<"n la so le";
	}
	system("pause");
	return 0;
}
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b){
	return(a+b);
}

int tich(int a, int b){
	return(a+b);
}
//cau19
bool ktChanLe(int n){
	if(n%2==0){
		return true;
	}
	return false;
}
