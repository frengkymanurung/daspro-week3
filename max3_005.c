/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/



#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);

    printf("Nilai Yang Anda Masukkan %d %d %d",a ,b,c);
    if(a>b && a>c)
    {
    printf("Nilai Yang Terbesar Adalah = %d",a);
    }
    else if(b>c)
    {
    printf("Nilai Yang Terbesar Adalah = %d",b);
    }
    else
    {
    printf("Nilai Yang Terbesar Adalah = %d",c);
    }
    getch();
    return 0;
}