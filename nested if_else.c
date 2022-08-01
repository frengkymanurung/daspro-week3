/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int umur;
    float gaji;
    bool statusApl = false;
    umur = atoi(argv[1]);
    gaji = atoi(argv[2]);
    printf("Umur anda: %d \n", umur);
    printf("Gaji anda: %.2f\n", gaji);

    if(umur>60){
        statusApl = false;
        printf("Aplikasi anda ditolak! \n");
    }
    else if (gaji<3000000){
        statusApl = false;
        printf("Aplikasi anda ditolak! \n");
    }
    else
    {
        statusApl = true;
        printf("Aplikasi anda diterima! \n");
    
    }

}