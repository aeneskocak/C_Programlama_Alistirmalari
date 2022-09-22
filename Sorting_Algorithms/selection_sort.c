#include <stdio.h>

void	selection_sort(int *dizi, int boyut)
{
	int min;
	for (int i = 0;i < boyut;i++)
	{
		min = i;
		for (int j = i;j < boyut; j++)
		{
			if (dizi[j]<dizi[min])
			{
				min = j;
			}
		}
		int tmp = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = tmp;
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

	selection_sort(dizi, boyut);
	for (int i = 0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	return 0;
}
