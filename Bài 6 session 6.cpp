#include <iostream>
using namespace std;
int main (){
	int n;
	printf ("nhap vao mot so nguyen tu 1 den 100: ");
	scanf ("%d", &n);
	if ((n>0)&&(n<101)){
		if ((n%3==0)&& (n%5==0)){
			printf ("FizzBuzz");
		}
		else if (n%3==0){
			printf ("Fizz");
		}
		else if (n%5==0){
			printf ("Buzz");
		}
}
	else {
		printf ("Da bao nhap so nguyen tu 1 den 100 roi ma! ( ?`_?´)?");
	}
	return 0;
}
