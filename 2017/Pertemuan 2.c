#include <stdio.h>
int angka, a=1, pilih, alas, tinggi, sisi;
float luas;
main()
{
	/*printf("Masukkan angka : ");
	scanf("%d", &angka);*/
	/*while(a<=angka)
	{
		printf("*");
		a++;
	}*/
	/*for(a=1; a<=angka; a++)
	{
	printf("*");
	}*/
	do
	{
		printf("1. segitiga\n2. persegi\n3. Keluar\nPilihan : ");
		scanf("%d", &pilih);
		switch(pilih)
		{
			case 1: printf("masukkan alas");
					scanf("%d", &alas);
					printf("masukkan tinggi");
					scanf("%d", &tinggi);
					luas=alas*tinggi*0.5;
					printf("Luasnya adalah %f\n", luas);
			break;
			case 2: printf("masukkan sisi");
					scanf("%d", &sisi);
					luas=sisi*sisi;
					printf("Luasnya adalah %0.2f\n", luas);
			break;
			case 3: printf("Makasih");
			break;
			printf("gila");
			default: printf("Error\n");
		}
	}while(pilih!=3);
}
