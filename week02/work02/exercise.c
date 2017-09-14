/*
 Name: [Julio Muhammad Pranadano]
 NPM: [1706106785]
 Class: [Ekstensi-2017]
 Comment: [Wedew]
*/

#define LINETXT "============\n"
#define LOOP 3
#include <stdio.h>

void main(){
int x,i,n,hasil;
printf("Masukkan Angka :"); scanf("%d",&x);
printf("Masukan Pangkat :"); scanf ("%d", &n);
i = 1; hasil = 1;
for (i=1; i<=n; i++)
{
hasil= hasil*x;
}
printf("%d to the power of ",x);
printf("%d",n);
printf(" equals %d",hasil);
scanf("%d");
}
