#include <stdio.h>


int main()
 {
int sayi, yuzler, onlar, birler, rakamintoplami, rakamkupu ; //deðiþken tanýmlýyoruz.


printf("Bir sayi giriniz: ");
scanf("%d", &sayi);


// sayiyi basamaklarina ayiralim
yuzler = sayi / 100;
onlar = (sayi / 10) % 10;
birler = sayi % 10;

// rakamlarýn küplerinin toplamýný hesaplayalým.

rakamkupu = (yuzler*yuzler*yuzler) + (onlar*onlar*onlar) + (birler*birler*birler);


// rakamlarýn toplamýný hesaplayalým
rakamintoplami = yuzler + onlar + birler;


// koþullarý test edelim
if (rakamkupu == sayi) {
printf("Armstrong sayisidir.\n");
}
else{
	printf("Armstrong sayisi degildir.\n");
}

return 0;
}
