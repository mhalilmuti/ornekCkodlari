#include <stdio.h>
#include <stdlib.h>

int main()
{

   int top_tek=0;
   int top_cift=0;
   int j;

   int sonsayi=100;

   //for dongusu
   for (j=0;j<sonsayi;j=j+1)
   {
        if ( j%2 ==0)
        {
            top_cift=top_cift + j;
        }
        else if (j%2==1)
        {
            top_tek=top_tek+j;
        }

   }
   printf("Tek sayilarin toplami: %d\n",top_tek);
   printf("Cift sayilarin toplami: %d\n",top_cift);

    system("PAUSE");
    return 0;
}
