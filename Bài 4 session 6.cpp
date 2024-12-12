#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a,b,c;
	float delta, x1,x2;
	printf ("Tinh phuong trinh bac hai: ax^2 + bx +c =0\n");
	printf ("nhap he so a: ");
	scanf ("%d", &a);
	printf ("nhap he so b: ");
	scanf ("%d", &b);
	printf ("nhap he so c: ");
	scanf ("%d", &c);
	delta = (b*b) - (4*a*c)*1.0;
	if (delta > 0){
		x1= ((-b) + (sqrt(delta)))/a;
		x2= ((-b) - (sqrt(delta)))/a;
		printf ("phuong trinh %dx^2+%dx+%d=0 co hai nghiem phan biet la: %f, %f\n", a,b,c,x1,x2);
	}
	if (delta == 0){
		x1= (-b/a);
		printf ("phuong trinh %dx^2 +%dx+%d=0 co nghiem kep la: %f\n",a,b,c,x1);
	}
	if (delta < 0){
		printf ("phuong trinh vo nghiem.\n");
	}
	printf ("%f", delta);
	return 0;
}
