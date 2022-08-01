/*Nama : Frengky Manurung
NIM : 13321005
Kelas : D3TK1
*/

int main(int argc, char *argv[])
{
    float x;
    char ch;
    x = atof(argv[1]);
    
     
    if(x>80) ch = 'A';
    else if (x>=65) ch = 'B';
    else if (x>=50) ch = 'C';
    else if (x>=65) ch = 'D';
    else ch = 'E';
    printf("Anda mendapatkan grade %c\n", ch);
    getch();

    return 0;

}
    
   


