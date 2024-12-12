#include <iostream>
using namespace std;
bool ktra_sngto(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int main (){
	int num;
	printf ("nhap mot so nguyen bat ky: ");
	scanf ("%d",&num);
	if (ktra_sngto(num)){
		printf ("la so nguyen to.\n");
	}
	else {
		printf ("khong phai la so nguyen to.\n");
	}
	return 0;
}

