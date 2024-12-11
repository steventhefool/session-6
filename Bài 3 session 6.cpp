#include <iostream>
using namespace std;
int main(){
	int correct = 1;
	int n = 0;
	char password []="valentineisthebestday4u";
	char password1 [30];
	printf ("nhap mat khau vao: ");
	gets(password1);
	while (password1 [n] !='\0'){
		if (password1 [n] != password[n]){
			correct=0;
			break;
		}
		n++;
	}
	if (correct == 1){
		printf("nhap dung mat khau roi!!\n");
	}
	else {
		printf ("nhap sai mat khau roi kia ba!\n");
	}
	printf ("%d",correct);
	return 0;
}
