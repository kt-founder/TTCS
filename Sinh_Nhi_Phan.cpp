#include<bits/stdc++.h>
using namespace std;
// Khoi tao day ban dau gom toan so 0
int check = 0,B[25]={0},n;
void in(){
	// in ra
	for(int i = 1;i <= n; i++){
		cout << B[i] << " ";
	}
	cout << endl;
}
void sinh(){
	int i = n;
	while(B[i]){
		// Thay gia tri 1 bang 0 (B3)
		B[i] = 0;
		i--;
	}
	// Neu chua ket thuc thi tra ket qua
	// Khong thi doi gia tri 0 thanh 1(B2)
	if(i == 0) check = 1;
	else B[i] = 1;
}
void sinhNhiPhan(){
	while(!check){
		in();
		sinh();
	}
}
main(){
	cout << "Nhap do dai chuoi nhi phan: " ;
	cin >> n;
	cout << "Cac chuoi nhi phan co do dai "<< n <<" la:\n";
	sinhNhiPhan();
}


