#include<stdio.h>
#include<conio.h>
#include<math.h>
int hesap(int n);
void main()
{
            int n,x,nx,hesapN,hesapX,hesapNX;
            double p,sonuc;
            printf("----------Binom Dagilimi Degeri Hesaplama----------\n");
            printf("n Degerini Girin:");
            scanf("%d",&n);
            printf("x Degerini Girin:");
            scanf("%d",&x);
            printf("p Degerini Girin:");
            scanf("%lf",&p);
            nx=n-x;
            hesapN=hesap(n);
            hesapX=hesap(x);
            hesapNX=hesap(nx);
            sonuc=(((hesapN/hesapX)*hesapNX)*pow(p,x)*(pow((1-p),nx)));
            printf("\n Sonuc=%.3lf",sonuc);
            getch();

}
int hesap(int n)
{
            return (n==1 || n==0) ? 1 : hesap(n-1)*n;
}
