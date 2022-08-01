/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

int main(int argc, char *argv[])
{
    int x;
    x = atoi(argv[1]);
    if ((x % 2) == 0)
{
    printf("%d Bilangan Genap", x);
}
    else
{
    printf("%d Bilangan Ganjil", x);
}
return 0;
}
