#include <iostream>
using namespace std;
int main (){
	float money, lai;
	int  month;
	printf ("nhap so tien ban dau: ");
	scanf ("%f",&money);
	printf ("Nhap lai suat ngan hang (%): ");
	scanf ("%f", &lai);
	lai/=100;
	printf ("nhap so thang gui: ");
	scanf ("%d",&month);
	for (int i = 1; i <= month; i++){
		money+=(money*lai);
	}
	printf ("so tien nhan duoc la: %f", money);
	return 0;
}
