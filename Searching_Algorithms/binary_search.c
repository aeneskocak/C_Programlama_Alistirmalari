/* Binary Search: Linear Search'in aksine
 karmasik bir dizide degil de
 sirali bir dizide arama yapar onun icin
  Binary Search'de dizi sirali olmalidir */

int	binary_search(int dizi[], int en_dusuk, int en_yuksek, int aranacak_eleman)
{
	while (en_dusuk<=en_yuksek)
	{
		int medium = en_dusuk + (en_yuksek - en_dusuk) / 2;

		if (dizi[medium] == aranacak_eleman)
			return (medium);

		if (dizi[medium] < aranacak_eleman)
			en_dusuk = en_yuksek + 1;
		else
			en_yuksek = medium - 1;
	}
	return (-1);
}

int main()
{
	int sayilar[] = {2,5,7,14,24,36,67};
	int boyut = sizeof(sayilar)/sizeof(int);
	int aranilan_sayi;

	printf("Indexini ogrenmek istediginiz sayiyi giriniz.\n");
	scanf("%d", &aranilan_sayi);

	int index = binary_search(sayilar, 0, boyut -1, aranilan_sayi);

	if (index >= 0)
		printf ("Aradiginiz %d. indexte bulunmaktadir.\n", index);
	else
		printf ("Aradiginiz sayi bulunamamaktadir.\n");
}
