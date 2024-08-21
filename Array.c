#include <stdio.h>

int main(){
	
	printf("NO.1 (Dimensi Satu)\n");
	int jml_tanggal[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int length = sizeof(jml_tanggal)/sizeof(*jml_tanggal);
	int i, j;
	for(i = 0; i < length; i++){
		printf("Bulan ke-%d memiliki %d Hari\n", (i + 1), jml_tanggal[i]);
	}
	
	printf("\n\nNo.2 (Milti Dimensi)\n");
	int matriks[4][3] = {
	{10, 11, 12},
	{13, 14, 15},
	{16, 17, 18},
	{19, 20, 21}
	};
	int k, l;
	for(k = 0; k < 4; k++){
		for(l = 0; l < 3; l++){
			printf(" %d", matriks[k][l]);
		}printf("\n");
	}
	printf("Nilai pada matriks ke-(1, 1) adalah %d\n", matriks[1][1]);
	printf("Nilai pada matriks ke-(3, 2) adalah %d\n", matriks[3][2]);
	return 0;
}
