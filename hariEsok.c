#include <stdio.h>

int main()
{
    int Tanggal;
    int Bulan;
    int Tahun;

    printf("Masukkan Tanggal = \n");
    scanf("%d", &Tanggal);
    printf("Masukkan Bulan = \n");
    scanf("%d", &Bulan);
    printf("Masukkan Tahun = \n");
    scanf("%d", &Tahun);

    if (Tanggal == 31)
    {
        Tanggal = 1;
        if (Bulan == 12)
        {
            Bulan = 1;
            Tahun++;
        }
        else
        {
            Bulan++;
        }
    }
    else if (Tanggal == 28 && Bulan == 2 || Tanggal == 30 && Bulan == 4 || Tanggal == 30 && Bulan == 6 || Tanggal == 30 && Bulan == 9 || Tanggal == 30 && Bulan == 11)
    {
        Tanggal = 1;
        if (Bulan == 12)
        {
            Bulan = 1;
            Tahun++;
        }
        else
        {
            Bulan++;
        }
    }
    else
    {
        Tanggal++;
    }

    switch (Bulan)
    {
    case 1:
        printf("Besok adalah %d Januari %d\n", Tanggal, Tahun);
        break;
    case 2:
        printf("Besok adalah %d Februari %d\n", Tanggal, Tahun);
        break;
    case 3:
        printf("Besok adalah %d Maret %d\n", Tanggal, Tahun);
        break;
    case 4:
        printf("Besok adalah %d April %d\n", Tanggal, Tahun);
        break;
    case 5:
        printf("Besok adalah %d Mei %d\n", Tanggal, Tahun);
        break;
    case 6:
        printf("Besok adalah %d Juni %d\n", Tanggal, Tahun);
        break;
    case 7:
        printf("Besok adalah %d Juli %d\n", Tanggal, Tahun);
        break;
    case 8:
        printf("Besok adalah %d Agustus %d\n", Tanggal, Tahun);
        break;
    case 9:
        printf("Besok adalah %d September %d\n", Tanggal, Tahun);
        break;
    case 10:
        printf("Besok adalah %d Oktober %d\n", Tanggal, Tahun);
        break;
    case 11:
        printf("Besok adalah %d November %d\n", Tanggal, Tahun);
        break;
    case 12:
        printf("Besok adalah %d Desember %d\n", Tanggal, Tahun);
        break;
    }
}
