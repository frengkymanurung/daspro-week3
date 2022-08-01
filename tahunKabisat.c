#include <stdio.h>
#include <stdlib.h>

int main()
{

   int tahun;
   printf("Masukkan tahun :");
   scanf("%d", &tahun);
   if (tahun % 4 == 0)
   {
      if (tahun % 100 == 0)
      {
         if (tahun % 400 == 0)
         {
            printf("%d Merupakan Tahun Kabisat \n", tahun);
         }
         else
            printf("%d Bukan tahun kabisat \n", tahun);
      }
      else
      {
         printf("%d Merupakan tahun kabisat \n", tahun);
      }
   }
   else
   {
      printf("%d Bukan tahun kabisat \n", tahun);
   }
   return 0;
}
