#include <iostream>
using namespace std;
bool ktrasngto (int num){
	if (num <=1){
		return false;
	}
	for (int i=2; i*i <= num; i++){
		if (num%i==0){
			return false;
		}
	}
	return true;
}
int main (){
	int count=0, num=2, n;
	printf ("nhap vao so luong so nguyen to dau tien can xuat: ");
	scanf ("%d", &n);
	while (count <n){
		if (ktrasngto(num)){
			printf ("%d\n", num);
			count++;
		}
		num++;
	}
	return 0;
}
