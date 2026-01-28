#include <stdio.h>



int main() {
    int sayi, i, asal = 1;

   
    printf("Bir sayi girin: ");    // Kullanýcýdan sayý alalým.
    scanf("%d", &sayi);

    // sayý negatifse veya bir ise asal olmaz koþulu yazalým.
    if (sayi <= 1) {
    asal = 0;
    
    } else {
    // iki sayýsýndan sayýnýn kendisine kadar sayýnýp bölünüp bölünmediðine bakalým
    
    for (i = 2; i <= sayi / 2; i++) 
	{
    if (sayi % i == 0) {
    asal = 0;
    break;
    
    
           }
        }
    }

    // sonucu yazdýralým.
    if (asal == 1) {
        printf("%d asaldir.\n", sayi);
    } else {
        printf("%d 1asal degildir.\n", sayi);
    }

    return 0;
}
