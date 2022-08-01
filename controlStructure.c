//Control Structure
//WEEK 3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{


    /*
    //If
    system ("cls");    //untuk membersihkan layar
    //Kamus
    char nama[50];

    //Algoritma
    printf("Masukkan nama anda \n");
    scanf("%s", &nama);
    if(strcmp(nama, "Baji") == 0)
       printf("%s adalah teman baik Chifuyu \n", nama);
    else
        printf("%s adalah teman aja \n", nama);
      //  printf("%s adalah teman aja \n", nama);
    return 0;
}
*/


    /*
    int x;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &x);
    if(x%2==0)
        printf("%d bilangan genap \n", x);
    else
        printf("%d bilangan ganjil \n", x);
    return 0;
}   */



    /*
    int x;
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &x);
    if(x%2==0)
        printf("%d bilangan genap \n", x);
    else
        printf("%d bilangan ganjil \n", x);
    return 0;
    }
    */

    /*
    float x;
    printf("Masukkan nilai Ujian Daspro Anda = ");
    scanf ("%f", &x);
    if(x >= 80)
        printf("Ciyee dapat nilai A nih");
    else{
        if(x >= 65)
            printf("Lumayan dapat nilai B");
        else
            printf("Waduh belajar lagi ya");
            return 0;
    }
    }
    */



    /*
    float nilai;
    printf("Masukkan nilai Ujian Daspro Kamu= ");
    scanf("%f", &nilai);
    if(nilai >= 80)
        printf("Ciye dapat nilai A nih");
    else if (nilai < 80 && nilai >= 65)
        printf("Lumayan dapat nilai B");
    else if (nilai < 65 && nilai >= 50)
        printf("Yah dapat C");
    else if (nilai < 50 && nilai >= 35)
        printf("Waduh harus banyak belajar lagi nih masa dapat D");
    else
        printf("dapat E, gagal, belajar lebih giat lagi ya");
    }
*/

    //else - if more efficient (without &&)

    int x; char ch;
    printf("Masukkan nilai kuliah Bahasa C anda:");
    scanf("%d", &x);
    //Algoritma//
    if(x >= 80) ch = 'A';
    else if (x >= 65) ch = 'B'; // Struktur logika, menyambung beberapa perintah//
    else if (x >= 50) ch = 'C';
    else if (x >= 35) ch = 'D';
    else ch = 'E';
    printf("Anda mendapatkan grade %c \n", ch);
}

    //Switch case
    /*
    char nilai;
    printf("Silahkan masukkan nilai Daspro anda (A-E) = ");
    scanf("%c", &nilai);

    switch(nilai){
      case 'A' :
        printf("Widihh dapat A, pertahankan dimata kuliah lain \n");
        break;
      case 'B' :
        printf("Lumayan ya dapat B \n");
        break;
      case 'C' :
        printf("Banyak main game nih pasti, kurangin noton anime hehe \n");
        break;
      case 'D' :
        printf("Hemm banyakin belajar, banyak begadang ya latihan ngoding \n");
        break;
      case 'E' :
        printf("Wahh ini ga pernah belajar dan pernah nonton anime pasti \n");
        break;
      default:
        printf("Sorry, format yang dimasukkan kayanya salah");

        return 0;

    }


    }
*/







