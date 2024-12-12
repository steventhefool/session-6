#include <iostream>
using namespace std;
int main (){
	int day, month, year;
	printf ("nhap thang va nam: ");
	scanf ("%d%d",&month, &year);
	if (((year%4==0)&& (year%100!=0)) || (year%400==0)){
		switch (month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf ("thang %d nam %d co 31 ngay.\n", month, year);
				break;
			case 4: case 6: case 9: case 11:
				printf ("thang %d nam %d co 30 ngay.\n", month, year);
				break;
			case 2:
				printf ("thang %d nam %d co 29 ngay.\n", month, year);
				break;
		}
	}
	if (((year%4!=0)&& (year%100==0)) || (year%400!=0)){
		switch (month){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				printf ("thang %d nam %d co 31 ngay.\n", month, year);
				break;
			case 4: case 6: case 9: case 11:
				printf ("thang %d nam %d co 30 ngay.\n", month, year);
				break;
			case 2:
				printf ("thang %d nam %d co 28 ngay.\n", month, year);
				break;
		}
	}
	return 0;
}
