#include <stdio.h>

int main (){
	
	printf("============== Looping ==============\n");
	
	printf("NO.1 : \n");
	int nilai;
	for (nilai = 1; nilai <= 10; nilai++)
	printf("Nilai %d\n", nilai);
	printf("\n");

	printf("NO.2 : \n");
	int i, n;
	for (i = 1; i <= 5; i++){
		for (n = 1; n <= i; n++){
			printf("%i", i);
		}
	printf("\n");
	} printf("\n");
	printf("\n");
	
	printf("NO.3 : \n");
	int m, total;
	for (m = 10; m <= 100; m++){
		total += m;
	}
	printf("Total : %d\n\n", total);
	printf("\n");
	
	printf("NO.4 : \n");
	char huruf;
	for(huruf = 'A'; huruf <= 'Z'; huruf++)
	printf("Huruf %c\n", huruf);
	printf("\n");
	
	printf("NO.5 : \n");
	int a, b, c = 0;
	printf("Masukkan Nilai : "); scanf("%d", &a);
	printf("%d", a);
	c = c + a;
	for (b = a-1; b >= 1; b--){
		printf(" + %d", b);
		c = c + b;
	} printf("\nHasil : %d\n", c);
	printf("\n");
	
	printf("NO.6 : \n");
	int f = 1;
	while (f <= 10){
		printf("%d, ", f);
		f = f + 1;
	}
	printf("\n\n");
	
	printf("NO.7 : \n");
	int j = 0, k;
	while (j < 5){
		k = 1;
		j++;
		while (k <= j){
			printf("%d", j);
			k++;
		} printf("\n");
	}
	
	return 0;
	
}
	
