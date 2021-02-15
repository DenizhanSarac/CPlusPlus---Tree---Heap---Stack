#include<iostream>
#include<conio.h>
#include"Header.h"
using namespace std;
struct node *geciciDegisken;
struct node *baslangic = NULL;

struct node *tekdugumOlustur()
{
	struct node *element = (node*)malloc(sizeof(node));
	element->birsonraki = NULL;
	return element;
}

struct node *ciftdugumOlustur()
{
	struct node *element = (node*)malloc(sizeof(node));
	element->birsonraki = NULL;
	element->bironceki = NULL;
	return element;
}


void C_bellek_Temizle()  //////////TYBL ile CYDBL nin çakýþmamasý ve uygulama kapat  için oluþturulmuþ free komutu.
{
	free(baslangic);
	baslangic = NULL;
}


////////////Tek Yönlü Baðýl liste Fonksiyonlarý////////////////////
void yazdir()
{
	if (baslangic == NULL)
		cout << "Hic Dugum Yokturr!!" << endl;
	else
	{
		geciciDegisken = baslangic;
		int counter = 1;
		while (geciciDegisken->birsonraki != NULL)
		{
			cout << counter << ". Dugum Elemani : " << geciciDegisken->veri << endl;
			geciciDegisken = geciciDegisken->birsonraki;
			counter++;
		}
		cout << counter << ". Dugum Elemani : " << geciciDegisken->veri << endl;
	}
}

void TYBL_basaelemanekle(int gelen)
{
	geciciDegisken = baslangic;
	struct node *yeni = tekdugumOlustur();
	yeni->veri = gelen;
	yeni->birsonraki = geciciDegisken;
	baslangic = yeni;
	yazdir(); cout << endl;
}

void TYBL_sonaelemanekle(int gelen)
{
	struct node *yeni = tekdugumOlustur();
	yeni->veri = gelen;
	if (baslangic == NULL)
		baslangic = yeni;
	else
	{
		geciciDegisken = baslangic;
		while (geciciDegisken->birsonraki != NULL)
			geciciDegisken = geciciDegisken->birsonraki;

		geciciDegisken->birsonraki = yeni;
	}
	yazdir(); cout << endl;
}

void TYBL_siralielemanekle(int gelen)
{
	struct node *yeni = tekdugumOlustur();
	yeni->veri = gelen;
	if (baslangic == NULL)
		baslangic = yeni;

	else{
		if (baslangic->veri > gelen)
		{
			yeni->birsonraki = baslangic;
			baslangic = yeni;
		}
		else{
			geciciDegisken = baslangic;
			while (geciciDegisken->birsonraki != NULL && geciciDegisken->birsonraki->veri < gelen)
				geciciDegisken = geciciDegisken->birsonraki;
			struct node *gecici1 = tekdugumOlustur();
			gecici1->birsonraki = geciciDegisken->birsonraki;
			geciciDegisken->birsonraki = gecici1;
			gecici1->veri = gelen;
		}
	}
}

void TYBL_bastanelemansilme()
{
	if (baslangic != NULL)
	{
		if (baslangic->birsonraki != NULL)
		{
			struct node* gecici1 = baslangic;
			baslangic = baslangic->birsonraki;
			free(gecici1);
		}
		else
		{
			free(baslangic);
			baslangic = NULL;
		}
	}
	else
	{
		cout << "Silinecek Dugum Yok!!!" << endl;
	}

	yazdir(); cout << endl;
}

void TYBL_sondanelemansilme(){

	if (baslangic == NULL)
	{
		cout << "Liste Bos!!!" << endl;
	}

	else
	{
		if (baslangic->birsonraki == NULL)
		{
			free(baslangic);
			baslangic = NULL;
		}

		geciciDegisken = baslangic;
		while (geciciDegisken->birsonraki->birsonraki != NULL)
			geciciDegisken = geciciDegisken->birsonraki;

		struct node* gecici1 = geciciDegisken->birsonraki;
		free(gecici1);
		geciciDegisken->birsonraki = NULL;
	}
	yazdir(); cout << endl;
}

void TYBL_belirlielemansilme(int gelen)
{
	int i = 0;
	geciciDegisken = baslangic;
	if (baslangic == NULL)
	{
		cout << "Liste Bos!!" << endl;
	}

	if (baslangic->veri == gelen)
	{
		TYBL_bastanelemansilme();
	}
	else if (geciciDegisken->birsonraki == NULL)
	{
		cout << "Girilen eleman bagli listede bulunmamaktadir." << endl;
	}

	else
	{
		while (geciciDegisken->birsonraki->veri != gelen){
			if (geciciDegisken->birsonraki->birsonraki == NULL)
			{
				cout << "Girilen eleman bagli listede bulunmamaktadir." << endl;
				return;
			}
			geciciDegisken = geciciDegisken->birsonraki;
		}
		struct node *gecici1 = geciciDegisken->birsonraki;
		geciciDegisken->birsonraki = geciciDegisken->birsonraki->birsonraki;
		free(gecici1);
	}

	yazdir(); cout << endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////
////////////Çift Baðlý Dairesel Fonksiyonlarý

void yazdircift()
{
	if (baslangic == NULL)
		cout << "Eleman Yok";
	else
	{
		int counter = 1;
		geciciDegisken = baslangic;
		while (geciciDegisken->birsonraki != baslangic)
		{
			cout << counter << ". Dugum Elemani:  " << geciciDegisken->veri << endl;
			geciciDegisken = geciciDegisken->birsonraki;
			counter++;
		}
		cout << counter << ". Dugum Elemani:  " << geciciDegisken->veri << endl;
	}
}

void CYDBL_basaelemanekle(int gelen)
{
	if (baslangic == NULL)
	{
		baslangic = ciftdugumOlustur();
		baslangic->veri = gelen;
		baslangic->birsonraki = baslangic;
		baslangic->bironceki = baslangic;
	}
	else
	{
		struct node *gecici = ciftdugumOlustur();
		gecici->veri = gelen;
		struct node *son = ciftdugumOlustur();
		son = baslangic;
		son->bironceki->birsonraki = gecici;
		gecici->birsonraki = son;
		gecici->bironceki = son->bironceki;
		son->bironceki = gecici;
		baslangic = gecici;
	}

}

void CYDBL_sonaelemanekle(int gelen)
{
	if (baslangic == NULL)
	{
		CYDBL_basaelemanekle(gelen);
	}
	else
	{
		struct node *gecici = ciftdugumOlustur();
		gecici->veri = gelen;
		struct node *son = baslangic;
		son->bironceki->birsonraki = gecici;
		gecici->birsonraki = son;
		gecici->bironceki = son->bironceki;
		son->bironceki = gecici;
	}

}

void CYDBL_bastanelemansilme()
{
	if (baslangic != NULL)
	{
		if (baslangic->birsonraki != NULL)
		{
			struct node *gecici = ciftdugumOlustur();
			gecici = baslangic;
			baslangic = baslangic->birsonraki;
			baslangic->bironceki = gecici->bironceki;
			gecici->bironceki->birsonraki = baslangic;
			gecici->bironceki = gecici->birsonraki = NULL;
			free(gecici);
		}
		else
		{
			free(baslangic);
			baslangic = NULL;
		}
	}
	else
	{
		cout << "Silinecek Dugum Yok!!!" << endl;
	}
	yazdircift(); cout << endl;
}

void CYDBL_sondanelemansilme()
{
	if (baslangic == NULL)
	{
		cout << "Silinecek Dugum Yok!!!" << endl;
	}
	else if (baslangic->birsonraki == baslangic)
	{
		baslangic = NULL;
		free(baslangic);
	}
	else
	{
		struct node *gecici = ciftdugumOlustur();
		gecici = baslangic;
		while (gecici->birsonraki != baslangic)
			gecici = gecici->birsonraki;
		gecici->bironceki->birsonraki = baslangic;
		baslangic->bironceki = gecici->bironceki;
		free(gecici);

	}
	yazdircift(); cout << endl;
}

void CYDBL_belirlielemansilme(int gelen)
{
	int i = 0;
	if (baslangic == NULL)
		cout << "Silinecek Dugum Yok !!";
	if (baslangic->veri == gelen)
	{
		CYDBL_bastanelemansilme();
	}
	else if (baslangic->bironceki->veri == gelen)
	{
		CYDBL_sondanelemansilme();
	}
	else
	{
		struct node *gecici = ciftdugumOlustur();
		gecici = baslangic;
		while (gecici->birsonraki != baslangic)
		{
			if (gecici->veri == gelen)
			{
				gecici->bironceki->birsonraki = gecici->birsonraki;
				gecici->bironceki->birsonraki->bironceki = gecici->bironceki;
				delete gecici;
				i = 1;
				break;
			}
			gecici = gecici->birsonraki;
		}

	}

	if (i == 0)
		cout << "Girilen eleman bagli listede bulunmamaktadir." << endl;

	yazdircift(); cout << endl;
}

void CYDBL_siralielemanekle(int gelen)
{
	if (baslangic == NULL)
		CYDBL_basaelemanekle(gelen);
	else
	{
		if (baslangic->veri > gelen)
		{
			CYDBL_basaelemanekle(gelen);
		}
		else
		{
			struct node *gecici = ciftdugumOlustur();
			struct node *yeni = ciftdugumOlustur();
			yeni->veri = gelen;
			gecici = baslangic;
			while (gecici->birsonraki != baslangic && gecici->birsonraki->veri < gelen)
				gecici = gecici->birsonraki;

			yeni->birsonraki = gecici->birsonraki;
			(gecici->birsonraki)->bironceki = yeni;
			gecici->birsonraki = yeni;
			yeni->bironceki = gecici;
		}
	}
	yazdircift(); cout << endl;
}
