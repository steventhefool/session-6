#include <iostream>
using namespace std;
int main (){
	int day, month;
	printf ("nhap ngay sinh: ");
	scanf ("%d", &day);
	printf ("nhap thang sinh: ");
	scanf ("%d", &month);
	switch (month){
		case 1:
			if ((day >0)&& (day <20)){
				printf ("Cung Ma Ket.\n");
			}
			else if ((day > 19)&&(day < 32)){
				printf ("Cung Bao Binh.\n");
			}
			else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 2:
			if ((day >0)&& (day <19)){
				printf ("Cung Bao Binh.\n");
			}
			else if((day >18)&&(day <30)){
				printf ("Cung Song Ngu.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 3:
				if ((day >0)&& (day <21)){
				printf ("Cung Song Ngu.\n");
			}
			else if((day >20) && (day <32)){
				printf ("Cung Bach Duong.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 4:
				if ((day >0) && (day <21)){
				printf ("Cung Bach Duong.\n");
			}
			else if((day >20) && (day <31)){
				printf ("Cung Kim Nguu.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 5:
				if ((day >0)&& (day <21)){
				printf ("Cung Kim Nguu.\n");
			}
			else if((day >20)&&(day <32)){
				printf ("Cung Song Tu.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 6:
				if ((day >0)&& (day <22)){
				printf ("Cung Song Tu.\n");
			}
			else if((day >21)||(day <31)){
				printf ("Cung Cu Giai.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 7:
				if ((day >0)&& (day <23)){
				printf ("Cung Cu Giai.\n");
			}
			else if((day >23)&&(day <32)){
				printf ("Cung Su Tu.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 8:
				if ((day >0)&& (day <23)){
				printf ("Cung Su Tu.\n");
			}
			else if((day >22)&&(day <32)){
				printf ("Cung Xu Nu.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 9:
				if ((day >0)&& (day <23)){
				printf ("Cung Xu Nu.\n");
			}
			else if((day >22)&&(day <31)){
				printf ("Cung Thien Binh.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 10:
				if ((day >0)&& (day <24)){
				printf ("Cung Thien Binh.\n");
			}
			else if((day >23)&&(day <32)){
				printf ("Cung Bo Cap.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 11:
				if ((day >0)&& (day <23)){
				printf ("Cung Bo Cap.\n");
			}
			else if((day >22)&&(day <31)){
				printf ("Cung Nhan Ma.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		case 12:
				if ((day >0)&& (day <22)){
				printf ("Cung Nhan Ma.\n");
			}
			else if((day >21)&&(day <32)){
				printf ("Cung Ma Ket.\n");
			}
				else {
				printf ("ngay nhap vao khong hop le.\n");
			}
			break;
		default: 
			printf ("Thang nhap vao khong hop le.\n");
			break;
			
}
	return 0;
}
