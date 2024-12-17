#include <stdio.h>
using namespace std;
int main (){
	int n,sum;
	for (int i =1; i<=5; i++){
		printf ("nhap so thu %d: ", i);
		scanf ("%d",&n);
		if (n%2==1){
			sum+=n;
		}
	}
	printf ("%d",sum);
	return 0;
}
