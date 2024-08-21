#include <stdio.h>

int main(){
    
    char Nama [20];
    char Kelas [5];
    char NIM [10];
    char Grade;
    int Nilai_1;
    int Nilai_2;
    int Nilai_3;
    int Rata_Rata;

    printf(" =============== Input Data Diri Mahasiswa ===============\n");
    printf(" \tInputkan Nama\t\t: "); scanf("%[^\n]", &Nama);
    printf(" \tInputkan Kelas\t\t: "); scanf("%s", &Kelas);
    printf(" \tInputkan NIM\t\t: "); scanf("%s", &NIM);
    
    printf(" ================= Input Nilai Mahasiswa =================\n");
    printf(" \tInputkan Nilai 1\t: "); scanf("%d", &Nilai_1);
    printf(" \tInputkan Nilai 2\t: "); scanf("%d", &Nilai_2);
    printf(" \tInputkan Nilai 3\t: "); scanf("%d", &Nilai_3);
    
    Rata_Rata = (Nilai_1 + Nilai_2 + Nilai_3) / 3;
    
    printf(" ====================== Hasil Akhir ======================\n");
    printf(" \tNama Mahasiswa/i\t: %s\n", Nama);
    printf(" \tKelas Mahasiswa/i\t: %s\n", Kelas);
    printf(" \tNIM Mahasiswa/i\t\t: %s\n", NIM);
    printf(" \tRata-Rata Mahasiswa/i\t: %d\n", Rata_Rata);
    printf(" =========================================================\n");
    
    if (Rata_Rata >= 80 && Rata_Rata <= 100){
    	printf("\t\t _________________\n");
    	printf("\t\t|                 |\n");
    	printf("\t\t|     GRADE A     |\n");
    	printf("\t\t|_________________|\n");
	} else if (Rata_Rata >= 66 && Rata_Rata <= 79){
		printf("\t\t _________________\n");
    	printf("\t\t|                 |\n");
    	printf("\t\t|     GRADE B     |\n");
    	printf("\t\t|_________________|\n");
	} else if (Rata_Rata >= 56 && Rata_Rata <= 65){
		printf("\t\t _________________\n");
    	printf("\t\t|                 |\n");
    	printf("\t\t|     GRADE C     |\n");
    	printf("\t\t|_________________|\n");
	} else if (Rata_Rata >= 45 && Rata_Rata <= 55){
		printf("\t\t _________________\n");
    	printf("\t\t|                 |\n");
    	printf("\t\t|     GRADE D     |\n");
    	printf("\t\t|_________________|\n");
	} else if (Rata_Rata >= 1 && Rata_Rata <= 44){
		printf("\t\t _________________\n");
    	printf("\t\t|                 |\n");
    	printf("\t\t|     GRADE E     |\n");
    	printf("\t\t|_________________|\n");
	} else {
		printf("\t\t _______________\n");
    	printf("\t\t|               |\n");
    	printf("\t\t|     ERROR     |\n");
    	printf("\t\t|_______________|\n");
	}
	
	printf(" \n=========================================================\n");
	
	if (Rata_Rata >= 80 && Rata_Rata <= 100){
    	Rata_Rata = 'A';
	} else if (Rata_Rata >= 66 && Rata_Rata <= 79){
		Rata_Rata = 'B';
	} else if (Rata_Rata >= 56 && Rata_Rata <= 65){
		Rata_Rata = 'C';
	} else if (Rata_Rata >= 45 && Rata_Rata <= 55){
		Rata_Rata = 'D';
	} else if (Rata_Rata >= 1 && Rata_Rata <= 44){
		Rata_Rata = 'E';
	}
	
	switch (Rata_Rata){
		case 'A':
			printf("\t\t _______________________\n");
    		printf("\t\t|                       |\n");
	    	printf("\t\t|     PERTAHANKAN!!     |\n");
	    	printf("\t\t|_______________________|\n");
	    	break;
	    case 'B':
			printf("\t\t _________________\n");
    		printf("\t\t|                 |\n");
	    	printf("\t\t|     BAGUS!!     |\n");
	    	printf("\t\t|_________________|\n");
	    	break;
	    case 'C':
			printf("\t\t _______________________\n");
    		printf("\t\t|                       |\n");
	    	printf("\t\t|     BELAJAR LAGI!     |\n");
	    	printf("\t\t|_______________________|\n");
	    	break;
	    case 'D':
			printf("\t\t __________________________________\n");
    		printf("\t\t|                                  |\n");
	    	printf("\t\t|     JANGAN KESERINGAN BOLOS!     |\n");
	    	printf("\t\t|__________________________________|\n");
	    	break;
	    case 'E':
			printf("\t\t ____________________________\n");
    		printf("\t\t|                            |\n");
	    	printf("\t\t|     KESERINGAN BOLOS!!     |\n");
	    	printf("\t\t|____________________________|\n");
	    	break;
	    default:
			printf("\t\t _______________\n");
	    	printf("\t\t|               |\n");
	    	printf("\t\t|     ERROR     |\n");
	    	printf("\t\t|_______________|\n");
	}
	
	return 0;
	
}
