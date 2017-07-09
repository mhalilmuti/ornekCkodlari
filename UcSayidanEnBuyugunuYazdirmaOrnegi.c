//Bu C kod parcasi Muhammet Halil Muti Tarafindan
//mhmuti.wordpress.com adresindeki
// C egitimi icin hazirlanmistir.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //long degisken tipi
    long a,b,c;
    printf("a degerini girin:");
    scanf("%d",&a);

    printf("b degerini girin:");
    scanf("%d",&b);

    printf("c degerini girin:");
    scanf("%d",&c);

    //if-else kosul ifadesi
    if (  (a>b) && (a>c)  )
    { printf("En buyuk sayi: a = %d \n",a); }
    else if (b>c)
    { printf("En buyuk sayi: b = %d \n",b); }
    else
    {  printf("En buyuk sayi: c = %d \n",c); }

    system("PAUSE");
    return 0;
}
