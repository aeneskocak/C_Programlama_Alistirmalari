#include <stdio.h>

void bubble_sort(int *dizi, int boyut)
{
	for (int i = 0; i<boyut; i++)
	{
		for (int j = 1; j < boyut - i; j++)
		{
			if (dizi[j - 1] > dizi[j])
			{
				int tmp = dizi[j];
				dizi[j] = dizi[j-1];
				dizi[j-1] = tmp;
			}
		}
	}
}

int main()
{
	int dizi[50], boyut;

	printf("Kac elemanli bir dizi olusturmak istiyorsunuz.\n");
	scanf("%d", &boyut);

	for (int i = 0;i<boyut;i++)
	{
		printf("%d. elemani giriniz.\n", i+1);
		scanf("%d", &dizi[i]);
	}

	bubble_sort(dizi, boyut);
	for (int i = 0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	return 0;
}
