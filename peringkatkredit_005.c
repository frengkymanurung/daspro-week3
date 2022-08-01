/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>

int main(){
	
	float pokok_utang;
	int masa_tunggak;
	char peringkat_creadit;
	
	printf("Masukkan pokok utang : ");
	scanf("%f", &pokok_utang);
	printf("Masukkan masa tunggak : ");
	scanf("%f", &masa_tunggak);
	
	if(pokok_utang <= 100000000){
		if(masa_tunggak <= 6){
			printf("Peringkat Utang anda Jadwalkan");
		}else if(masa_tunggak > 6){
			printf("Peringkat Utang anda di Gagalkan");
		}
	}else if(pokok_utang > 100000000){
		if(masa_tunggak <= 12){
			printf("Peringkat Utang anda Jadwalkan");
		}else if(masa_tunggak > 12){
			printf("Peringkat Utang anda di Gagalkan");
		}
	}
}