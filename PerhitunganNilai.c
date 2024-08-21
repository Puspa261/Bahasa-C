#include <stdio.h>
#include <string.h>

int main(){
	
	char nim [10];
	char nama [30];
	int kehadiran, tugas, uts, uas;
	float nilai_akhir;
	
	strcpy(nim, "1122334455");
	strcpy(nama, "Puspa Khairunnisa");
	kehadiran = 100;
	tugas = 90;
	uts = 83;
	uas = 86;
	
	nilai_akhir = (0.1 * kehadiran) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);
	
	printf("NIM\t\t: %s", nim);
	printf("\nNama\t\t: %s", nama);
	printf("\nKehadiran\t: %i", kehadiran);
	printf("\nTugas\t\t: %i", tugas);
	printf("\nUTS\t\t: %i", uts);
	printf("\nUAS\t\t: %i", uas);
	printf("\nNilai Akhir\t: %.2f", nilai_akhir);
	
	return 0;
}
