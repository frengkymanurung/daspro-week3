/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x,y;

    x = atoi(argv[1]);
    y = atoi(argv[2]);

  
    if(x > y)
    {
    printf("Bilangan Maksimum adalah %d", x);
    }
    else
    {
    printf("Bilangan Maksimum adalah %d", y);
    }
    return 0;
}




