/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Masukkan Nilai Suhu (Celcius)=");
    scanf("%d", &x);

    if(x<0)
{

    printf("Wujud Padat \n");
}
    else if (x<100)
{
    printf("Wujud Cair \n");
}
    else if (x>=100)
{
    printf("Wujud Gas \n");
}
    return 0;
}