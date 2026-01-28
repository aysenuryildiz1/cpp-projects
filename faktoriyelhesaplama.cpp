#include <stdio.h>


int main() 
{
    int sayi, i;     //deðiþkenleri tanýmlýyoruz.
    long int faktoriyel = 1;

   
    printf("Bir sayi girin: ");   // kullanýcýdan sayý istiyoruz.
    scanf("%d", &sayi);           //kullanýcýdan sayý alýyoruz.

    // sayýnýn negatif olup olmadýðýný kontrol edelim(negatif sayýnýn fak. hesaplanmaz)
    
    if (sayi < 0) {
          printf("Negatif sayýlar icin faktoriyel tanimlanmaz.\n");
          
           // faktöriyeli hesaplayalým
          
    } else {
       
        for (i=1; i<=sayi; i++) {
            faktoriyel *= i;
        }
        printf("%d sayisinin faktoriyeli: %ld dir\n", sayi, faktoriyel);
    }

    return 0;
}
