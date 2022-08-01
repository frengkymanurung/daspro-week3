/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float T;
    printf("Masukkan Nilai Suhu (Celcius)=");
    scanf("%f", &T);

    if (T < 36)
    {
        printf("Hipotermia \n");
    }
    else if (36 <= T <= 37.5)
    {
        printf("Normal \n");
    }
    else if (37.5 < T <= 39)
    {
        printf("Demam \n");
    }
    else if (T > 39)
    {
        printf("Hipertermia \n");
    }
    return 0;
}