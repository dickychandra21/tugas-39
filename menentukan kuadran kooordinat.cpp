#include<stdio.h>
#include<conio.h>

int main()
{
    int x,y;
    printf("Mengetahui Kuadran Suatu Koordinat\n\n");
    printf("Masukka koordinat x : ");
    scanf("%i", &x);
    printf("Masukan koordinat y : ");
    scanf("%i", &y);

    if(x>0 && y>0)
        printf("Kuadrat I");
    if(x>0 && y<0)
        printf("Kuadrat II");
    if(x<0 && y<0)
        printf("Kuadrat III");
    if(x<0 && y>0)
        printf("Kuadrat IV");
    if(x==0 && y==0)
        printf("Titik Pusat");
getch();
}

