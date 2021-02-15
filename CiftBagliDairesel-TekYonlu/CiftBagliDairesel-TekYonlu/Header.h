#ifndef Fonksiyonlar
#define Fonksiyonlar
struct node{
	int veri;
	node *birsonraki;
	node *bironceki;
};

struct node *tekdugumOlustur();

void C_bellek_Temizle();
////////////Tek Y�nl� Ba��l liste Fonksiyonlar�

void TYBL_basaelemanekle(int);
void TYBL_sonaelemanekle(int);
void TYBL_siralielemanekle(int);
void TYBL_bastanelemansilme();
void TYBL_sondanelemansilme();
void TYBL_belirlielemansilme(int);
void yazdir();

///////////////////////////////////////////
////////////�ift Ba�l� Dairesel Fonksiyonlar�

void yazdircift();
void CYDBL_basaelemanekle(int);
void CYDBL_sonaelemanekle(int);
void CYDBL_bastanelemansilme();
void CYDBL_sondanelemansilme();
void CYDBL_belirlielemansilme(int);
void CYDBL_siralielemanekle(int);

#endif
