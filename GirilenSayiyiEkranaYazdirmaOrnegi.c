#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Degisken taimlama
    int sayi,sonuc;

    printf("Sayi Degerini Giriniz:");

    //Kullanicidan deger alma
    scanf("%d",&sayi);

    printf("Girilen Deger: %d \n",sayi);

    //degiskenlere deger atama
    sonuc = sayi * 2 ;

    printf("Girilen Degerin iki kati: %d \n",sonuc);

    system("PAUSE");
    return 0;
}
