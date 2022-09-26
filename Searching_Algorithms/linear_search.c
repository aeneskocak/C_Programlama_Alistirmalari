#include <stdio.h>
#include <stdlib.h>

int	linear_search(int dizi[], int x, int boyut)
{
	for (int i = 0; i < boyut; i++)
	{
		if (dizi[i] == x)
			return (i);
	}
	return -1;
}

int main()
{
	//Linear Search Algorithm
	int boyut;
	printf ("Kac elemanli bir dizi olusturmak istiyorsunuz?\n");
	scanf("%d", &boyut);
	int dizi[boyut];
	for (int i = 0;i < boyut; i++)
	{
		printf("Lutfen %d. elemani giriniz.\n", i+1);
		scanf("%d", &dizi[i]);
	}
	int aranacak_eleman;
	printf ("Lutfen aramak istediginiz elemani giriniz.\n");
	scanf("%d", &aranacak_eleman);
	int index = linear_search(dizi, aranacak_eleman, boyut);
	if (index >= 0)
		printf("Aradiginiz eleman %d. indexte bulunuyor.\n",index);
	else
		printf("Aradiginiz eleman dizide bulunmuyor.\n");
	return 0;
}
