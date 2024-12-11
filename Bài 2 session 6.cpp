#include <iostream>
using namespace std;
int main (){
	int a, b, c, d, e, cntodd, cnteven;
	cntodd=0;
	cnteven=0;
	printf ("nhap lan luot vao 5 so nguyen: ");
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a%2==0){
		cntodd++;
	}
	else {
		cnteven++;
	}
	if (b%2==0){
		cntodd++;
	}
	else {
		cnteven++;
	}
	if (c%2==0){
		cntodd++;
	}
	else {
		cnteven++;
	}
	if (d%2==0){
		cntodd++;
	}
	else {
		cnteven++;
	}
	if (e%2==0){
		cntodd++;
	}
	else {
		cnteven++;
	}
	printf ("Trong cac so vua nhap, co %d so chan\n", cntodd);
	printf ("Trong cac so vua nhap, co %d so le", cnteven);
	return 0;
}
