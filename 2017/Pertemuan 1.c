#include <stdio.h>
int x,y, luasling, jari2,a;
float z, luasling1;
main()
{
	printf("Pilih yang ingin dihitung :\n 1. Segitiga \n 2. Lingkaran \n");
	scanf("%d", &a);
	switch(a)
	{
	case 1:	printf("Masukkan tinggi : \n");
			scanf("%d", &x);
			printf("Masukkan panjang alas : \n");
			scanf("%d", &y);
			z = x*y*0.5;
			printf("Luasnya adalah %0.2f", z);
	break;
	case 2:	printf("Masukkan jari-jari lingkaran : \n");
			scanf("%d", &jari2);
			if(jari2%7==0)
			{	
				luasling=22/7*jari2*jari2;
				printf("Luas lingkaran adalah %d", luasling );
			}		
			else
			{
				luasling1=3.14*jari2*jari2;
			printf("luas lingkaran adalah %0.2f", luasling1 );
			}
	break;
	default: printf("Masukkan 1 atau 2 !!");
	}
}
