//Bu C kod parcasi Muhammet Halil Muti Tarafindan
//mhmuti.wordpress.com adresindeki
// C egitimi icin hazirlanmistir.

#include <stdio.h>
#include <stdlib.h>

int main()
{

   int top_tek=0;
   int top_cift=0;
   int j=0;

   int sonsayi=100;

   //while dongusu
   while(j<sonsayi)
   {
        if ( j%2 ==0)
        {
            top_cift=top_cift + j;
        }
        else if (j%2==1)
        {
            top_tek=top_tek+j;
        }
        j++;
   }
   printf("Tek sayilarin toplami: %d\n",top_tek);
   printf("Cift sayilarin toplami: %d\n",top_cift);

    system("PAUSE");
    return 0;
}
