#include <stdio.h>

int main (){
	
	printf("NO.1 : \n");
	int awal, akhir, a, total;
	printf("Masukkan Batas Awal : "); scanf("%d", &awal);
	printf("Masukkan Batas Akhir : "); scanf("%d", &akhir);
	for (a = awal; a <= akhir; a++){
		total *= a;
	}
	printf("Total : %i", total);
	printf("\n\n");
	
	printf("NO.2 : \n");
	int nilai = 2;
	do {
		printf("%d, ", nilai);
		nilai += 2;
	} while (nilai <= 100);
	printf("\n\n");
	
	printf("NO.3 : \n");
	int i, j, k, l;
	printf("Masukkan Jumlah Bintang : "); scanf("%d", &l);
	for ( i = 0; i <= 5; i++){
		for (j = 0; j <= i; j++){
			printf(" ");
		}
		for (k = 1; k <= l; k++){
			if (k == l ){
				printf("*");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("NO.4 : \n");
	int m, n, o, p;
	printf("Masukkan Jumlah Bintang : "); scanf("%d", &p);
	for (m = 0; m < 5; m++){
		if (m > ((5 + 1) / 2) - 1){
			for (n = 0; n < 5 - m - 1; n++){
				printf(" ");
			}
		} else {
			for (n = 0; n < m; n++){
				printf(" ");
			}
		}
		for ( o = 1; o <= p; o++){
			if (o == p){
				printf("*");
			}else {
				printf("*");
			}
		}
		printf("\n");
	}
	printf("\n");
	
	printf("NO.5 : \n");
	int z;
	for (z = 1; z <= 15; z += 2){
		printf("%d, ", z);
	}
	printf("\n\n");
	
	printf("NO.6 : \n");
	int t = 5, q, r, s;
	for (q = 1; q <= p; q++){
		s = q;
		for (r = t - 1; r >= t - q; r--){
			if (r == t - q){
				printf("%d", s);
			}else {
				printf("%d", s);
			}
			s += r;
		} printf ("\n");
	}
	
	return 0;
}
