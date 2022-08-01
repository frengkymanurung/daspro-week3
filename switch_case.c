/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int x;
    int y;
    int z;
    char operasi;

printf("Masukkan operasi aritmatika (+,-,x,/): ");
scanf("%c", &operasi);

switch(operasi)
{
    case '+':
        printf("Masukkan 2 bilangan bulat \n");
        scanf("%d %d", &x,&y);
        printf("x = %d \t y = %d\n\n",x,y);
        z = x+y;
        printf("x+y = %d\n", z);
        break;
    
    case '-':
        printf("Masukkan 2 bilangan bulat \n");
        scanf("%d %d", &x,&y);
        printf("x = %d \t y = %d\n\n",x,y);
        z = x-y;
        printf("x-y = %d\n", z);
        break;

    case 'x':
        printf("Masukkan 2 bilangan bulat \n");
        scanf("%d %d", &x,&y);
        printf("x = %d \t y = %d\n\n",x,y);
        z = x*y;
        printf("x*y = %d\n", z);
        break;

    case '/':
        printf("Masukkan 2 bilangan bulat \n");
        scanf("%d %d", &x,&y);
        printf("x = %d \t y = %d\n\n",x,y);
        float tempt = (float) x/y;
        printf("x/y = %d\n", tempt);
        break;
}


}
