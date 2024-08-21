#include <stdio.h>

void menu();

void cetak(char nama[]);

int total(int array[], int d);

void menu(){
	printf("Pilihan Menu \n");
}

void cetak(char nama[]){
	printf("Selamat Sore %s, Have a Nice Day\n", nama);
}

int total(int array[], int d){
	int hasil = 0, i;
	for(i = 0; i < d; i++){
		hasil =+ array[i];
	}
	return hasil;
}

int main(){
	printf("NO.1\n");
	menu();
	printf("\n");
	
	printf("NO.2\n");
	cetak("Puspa");
	printf("\n");
	
	printf("NO.3\n");
	int array[] = {1, 2, 3};
	int d = 3;
	printf("Hasil : %d", total(array, d));
	return 0;
}


