#include <stdio.h>

int main(){
	
	char nama [25];
	char nim [10];
	char kelas [5];
	float nilai1, nilai2, nilai3;
	float rata_rata;
	
	printf("Masukkan Nama\t: "); scanf("%[^\n]", &nama);
	printf("Masukkan NIM\t: "); scanf("%s", &nim);
	printf("Masukkan Kelas\t: "); scanf("%s", &kelas);
	printf("Masukkan Nilai 1: "); scanf("%f", &nilai1);
	printf("Masukkan Nilai 2: "); scanf("%f", &nilai2);
	printf("Masukkan Nilai 3: "); scanf("%f", &nilai3);
	
	rata_rata = (nilai1 + nilai2 + nilai3) / 3;
	
	printf("\nNama\t\t: %s", nama);
	printf("\nNIM\t\t: %s", nim);
	printf("\nKelas\t\t: %s", kelas);
	printf("\n\nNilai Rata-Rata\t: %.2f\n", rata_rata);
	
	if(rata_rata >= 80 && rata_rata <= 100){
		printf("Grade\t\t: A\n\t\t: Pertahankan!!\n");
	}else if (rata_rata >= 66 && rata_rata <= 79){
		printf("Grade\t\t: B\n\t\t: Bagus!!\n");
	}else if (rata_rata >= 56 && rata_rata <= 65){
		printf("Grade\t\t: C\n");
	}else if (rata_rata >= 45 && rata_rata <= 55){
		printf("Grade\t\t: D\n");
	}else if (rata_rata >= 1 && rata_rata <= 44){
		printf("Grade\t\t: E\n");
	}else{
		printf("\t\tERROR!!!\n");
	}
	
	return 0;
}
