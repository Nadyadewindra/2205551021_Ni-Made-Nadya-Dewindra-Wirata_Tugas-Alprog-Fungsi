#include <stdio.h>
#include <stdlib.h>

void lingkaran(void);
void luas_lingkaran(void);
void keliling_lingkaran(void);
void volume_tabung(void);
void luas_tabung(void);
void menghitung_skala(void);

void luas_lingkaran(void){
	printf("Jika panjang jari-jari Lingkaran adalah 14 cm\n");
	printf("Dengan rumus Luas Lingkaran = pi*r*r\n");
	printf("Maka, luas Lingkaran adalah 615.44 cm\n\n");
}

void keliling_lingkaran(void){
	printf("Jika panjang jari-jari Lingkaran adalah 14 cm\n");
	printf("Dengan rumus keliling Lingkaran = 2*pi*r\n");
	printf("Maka, keliling Lingkaran adalah 87.92 cm\n\n");
}

void volume_tabung(void){
	printf("Jika panjang jari-jari Tabung adalah 7 cm dan tinggi Tabung adalah 8 cm\n");
	printf("Dengan rumus volume Tabung = pi*r*r*t\n");
	printf("Maka, volume Tabung adalah 1230.88 cm\n\n");
}
void luas_tabung(void){
	printf("Jika panjang jari-jari Tabung adalah 7 cm dan tinggi Tabung adalah 8 cm\n");
	printf("Dengan rumus Luas Tabung = 2*pi*r*r*t\n");
	printf("Maka, luas Tabung adalah 2461.76 cm\n\n");
}

void menghitung_skala(void){
	printf("Jika jarak pada peta adalah 78 cm\n");
	printf("Dengan jarak sebenarnya adalah = 35 km\n");
	printf("Maka, Skala = 1 : 2 \n\n");
}

int main(void){
	luas_lingkaran();
	keliling_lingkaran();
	volume_tabung();
	luas_tabung();
	menghitung_skala();
	
return 0;
}
