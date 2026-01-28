#include<stdio.h>
int main(){
	
	//Kullanýcýdan alýnan 5 tamsayý deðerini bir dizide saklayan ve bu deðerlerin ortalamasýný bulan bir program
	int dizi[5];
	int i,toplam=0;
	float ort;
	
	printf("bes adet sayi girin: ");
	
	for (i=0; i<5; i++){
		scanf("%d",&dizi[i]);
	}
	
	for(i=0; i<5; i++){
		toplam+=dizi[i];
	}
	ort= toplam/5.0;
	printf("dizi elemanlari ortalamasi : %.2f",ort);
	
	
	
	
		return 0;
}
