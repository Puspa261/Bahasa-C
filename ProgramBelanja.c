#include <stdio.h>

int main (){
	
	printf(" _______________________________________________________________\n");
	printf("|                                                               |\n");
	printf("|                        PROGRAM BELANJA                        |\n");
	printf("|_______________________________________________________________|\n\n");
	
	char Nama_Pembeli[50], Nama_Barang[10];
	int Harga_Satuan, Jumlah_Barang, Total;
	int Harga, Diskon, Kembalian, Pembayaran;
	
	printf(" ================ Selamat Datang Di Toko Puspa =================\n");
	printf("\tInput Nama Pembeli\t\t: "); scanf(" %[^\n]", &Nama_Pembeli);
	printf("\tInput Nama Barang Yang Dibeli\t: "); scanf(" %[^\n]", &Nama_Barang);
	printf("\tInput Harga Satuan\t\t: Rp"); scanf("%d", &Harga_Satuan);
	printf("\tInput Jumlah Barang\t\t: "); scanf("%d", &Jumlah_Barang);
	
	printf("\n ======================= Daftar Belanja ========================\n");
	printf("\tNama Pembeli\t\t\t: %s\n", Nama_Pembeli);
	printf("\tBarang yang Dibeli\t\t: %s\n", Nama_Barang);
	printf("\tHarga Satuan\t\t\t: Rp%d\n", Harga_Satuan);
	printf("\tJumlah Barang\t\t\t: %d\n", Jumlah_Barang);
	
	Harga = Harga_Satuan * Jumlah_Barang;
	
	printf("\tHarga\t\t\t\t: Rp%d\n", Harga);
	
	if (Harga >= 500000){
		printf("\t\t _______________________________________\n");
    	printf("\t\t|                                       |\n");
    	printf("\t\t| Selamat Anda Mendapatkan Tas Pinggang |\n");
    	printf("\t\t|             Serta Diskon              |\n");
		printf("\t\t|_______________________________________|\n");
		Diskon = Harga * 0.20;
	} else if (Harga > 200000 && Harga < 500000){
		printf("\t\t _________________________________\n");
    	printf("\t\t|                                 |\n");
    	printf("\t\t| Selamat Anda Mendapatkan Payung |\n");
    	printf("\t\t|           Serta Diskon          |\n");
		printf("\t\t|_________________________________|\n");
		Diskon = Harga * 0.15;
	} else if (Harga > 100000 && Harga <= 200000){
		printf("\t\t _______________________________\n");
    	printf("\t\t|                               |\n");
    	printf("\t\t| Selamat Anda Mendapatkan Kaos |\n");
    	printf("\t\t|          Serta Diskon         |\n");
		printf("\t\t|_______________________________|\n");
		Diskon = Harga * 0.10;
	} else if (Harga > 50000 && Harga <= 100000){
		printf("\t\t __________________________________\n");
    	printf("\t\t|                                  |\n");
    	printf("\t\t| Selamat Anda Mendapatkan Cangkir |\n");
    	printf("\t\t|           Serta Diskon           |\n");
		printf("\t\t|__________________________________|\n");
		Diskon = Harga * 0.05;
	} else {
		printf("\t\t ____________________________________\n");
    	printf("\t\t|                                    |\n");
    	printf("\t\t| Maaf Anda Tidak Mendapatkan Diskon |\n");
		printf("\t\t|____________________________________|\n");
		Diskon = Harga * 0;
	}
	
	printf("\n ========================= Total Harga =========================\n");
	printf("\tHarga\t\t\t\t: Rp%d\n", Harga);
	printf("\tDiskon\t\t\t\t: Rp%d\n", Diskon);
	
	Total = Harga - Diskon;
	
	printf("\tTotal Harga\t\t\t: Rp%d\n", Total);
	
	
	printf("\n ========================= Pembayaran ==========================\n");
	printf("\tTotal Harga\t\t\t: Rp%d\n", Total);
	printf("\tPembayaran\t\t\t: Rp"); scanf("%d", &Pembayaran);
	
	Kembalian = Pembayaran - Total;
	
	printf("\tKembalian\t\t\t: %d\n", Kembalian);
	printf("\n ======================== Terima Kasih ========================\n");
	
	return 0;
}
