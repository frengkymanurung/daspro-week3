/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
int main()
{
    //Kamus
    int x;
    //algoritma
    printf("Masukkan sebuah bilangan bulat:");
    scanf("%d", &x);
    if(x%2==0)
        printf("%d bilangan genap\n", x);
    else
        printf("%d bilangan ganjil\n",x);
    getch();
    
    return 0;

}
