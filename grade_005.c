/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

int main()
{
    // kamus:
    float x;
    char ch;
    // Algoritma:
    printf("Masukan nilai kuliah anda: ");
    scanf("%d", &x);
    if (x > 80)
        ch = 'A';
    else if (x >= 65)
        ch = 'B';
    else if (x >= 50)
        ch = 'C';
    else if (x >= 65)
        ch = 'D';
    else
        ch = 'E';
    printf("Anda mendapatkan grade %c\n", ch);
    getch();

    return 0;
}