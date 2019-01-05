#include <stdio.h>
#include <conio.h>

int ulang (int n);
int main (void)
{
    int n;
    printf("Masukkan Jumlah Pengulangan = ");
    scanf("%d",&n);
    ulang(n);
    getch();
}
int ulang (int n)
{
    int i;
    for (i=1;i<n;i++)
        printf("Algoritma Dan Pemograman\n");
    return i;
}
