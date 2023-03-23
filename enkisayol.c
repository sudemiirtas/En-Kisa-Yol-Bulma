#include<stdio.h>
#include<string.h>
#define kod 23

int dijkstra(int maliyet[][kod],int kaynak,int hedef );

int main()
{
    int uzaklik,kaynak,hedef,secim,maliyet[kod][kod];
    char ad1[20],ad2[20],ad3[20],harf[20],harf1[20],harf2[20],liste[kod][20];
    int i,j,birim,kod1,adres1,adres2,sayac=1;
    FILE *harfler,*mesafe;

    printf("iki harfin birbirlerine olan en kisa yolu icin 1 e basiniz\n");
    printf("Bir harfin diger tum harfler olan en kisa yolu icin 2 ye basiniz\n");

    basadon:

    printf("secim yapiniz:");
    scanf("%d",&secim);

    for(i=0; i<kod; i++)
    {
        for(j=0; j<kod; j++)
        {
            maliyet[i][j]=9999;
        }
    }

    mesafe=fopen("mesafe.txt","r");
    harfler=fopen("harfler.txt","r");


    if(secim==1)
    {
        printf("\nbaslangic harfini giriniz:");
        scanf("%s",ad1);
        printf("varis harfini giriniz:");
        scanf("%s",ad2);

    while(!feof(harfler))
    {
        fscanf(harfler,"%s - %d",harf,&kod1);
        strcpy(liste[sayac],harf);
        sayac++;

        if(strcmp(harf,ad1)==0)
          kaynak=kod1;
        if(strcmp(harf,ad2)==0)
          hedef=kod1;
        if(feof(harfler))
            break;
    }

        while(!feof(mesafe))
    {

        fscanf(mesafe,"%s - %s - %d",harf1,harf2,&birim);

        for(i=1; i<kod; i++)
        {
            if(strcmp(liste[i],harf1)==0)
            {
               adres1=i;
            }

            if(strcmp(liste[i],harf2)==0)
            {
                adres2=i;
                maliyet[adres1][adres2]=maliyet[adres2][adres1]=birim;
            }

        }

    }

        printf("\nGirdiginiz harfler arasindaki en kisa yol:\n\n");
        uzaklik = dijkstra(maliyet,kaynak,hedef);
        printf("%d birim\n",uzaklik);
    }
