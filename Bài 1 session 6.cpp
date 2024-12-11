#include <iostream>
using namespace std;
int main (){
	int a, b, c, d, e, sum;
	printf ("nhap vao 5 so nguyen: ");
	scanf ("%d%d%d%d%d", &a, &b, &c, &d, &e);
	if (a%2==1){
		sum+=a;
	}
	if (b%2==1){
		sum+=b;
	}
	if (c%2==1){
		sum+=c;
	}
	if (d%2==1){
		sum+=d;
	}
	if (e%2==1){
		sum+=e;
	}
	printf ("tong cac so le vua nhap la: %d", sum);
	return 0;
}
