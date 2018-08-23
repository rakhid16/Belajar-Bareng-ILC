#include <stdio.h>
int matriksA[3][3], matriksB[3][3], hasil[3][3], i,j,ILC;
main()
{
	printf("Masukkan elemen pada MatriksA\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("elemen[%d][%d] : ", i+1,j+1);
			scanf("%d", &matriksA[i][j]);
		}
	}
	printf("\nMasukkan elemen pada MatriksB\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("elemen[%d][%d] : ", i+1, j+1);
			scanf("%d", &matriksB[i][j]);
		}
	}
	printf("\nMatriks A\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf(" %d ", matriksA[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriks B\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf(" %d ", matriksB[i][j]);
		}
		printf("\n");
	}
	do
	{
	
		printf("\nMau coba yang mana nih?\n1. A+B\n2. A-B\n3. AxB\n4. Keluar\n");
		scanf("%d", &ILC);
	switch(ILC)
	{
		case 1 :
		printf("\nA+B : \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				hasil[i][j]=matriksA[i][j]+matriksB[i][j];
				printf("%d ", hasil[i][j]);
			}
			printf("\n");
		}
		break;
	
		case 2:
		printf("\nA-B : \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				hasil[i][j]=matriksA[i][j]-matriksB[i][j];
				printf("%d ", hasil[i][j]);
			}
			printf("\n");
		}
		break;
	
		case 3:
		printf("\nAxB : \n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				hasil[i][j]=(matriksA[i][0]*matriksB[0][j])+(matriksA[i][1]*matriksB[1][j])+(matriksA[i][2]*matriksB[2][j]);
				printf("%d ", hasil[i][j]);
			}
			printf("\n");
		}
		break;
		case 4:
			{
				printf("Makasih banyak");
			}
		break;
		default: printf("Cuma no 1-3 mblo :)");
	}
	}while(ILC!=4);
}
