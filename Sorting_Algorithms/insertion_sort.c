#include <stdio.h>

void	insertion_sort(int *dizi, int boyut)
{
    int eleman, oncesi;
    for (int i=1;i<boyut;i++)
    {
        eleman = dizi[i];
        oncesi = i - 1;

        while (oncesi>=0 && dizi[oncesi]>eleman)
        {
            dizi[oncesi+1] = dizi[oncesi];
            oncesi--;
        }
        dizi[oncesi+1] = eleman;
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

	insertion_sort(dizi, boyut);
	for (int i = 0;i<boyut;i++)
	{
		printf("%d ",dizi[i]);
	}
	return 0;
}