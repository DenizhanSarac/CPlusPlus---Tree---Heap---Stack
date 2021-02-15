#ifndef Fonksiyonlar
#define Fonksiyonlar
struct node{
	int veri;
	node *birsonraki;
	node *bironceki;
};

struct node *tekdugumOlustur();

void C_bellek_Temizle();
////////////Tek Yönlü Baðýl liste Fonksiyonlarý

void TYBL_basaelemanekle(int);
void TYBL_sonaelemanekle(int);
void TYBL_siralielemanekle(int);
void TYBL_bastanelemansilme();
void TYBL_sondanelemansilme();
void TYBL_belirlielemansilme(int);
void yazdir();

///////////////////////////////////////////
////////////Çift Baðlý Dairesel Fonksiyonlarý

void yazdircift();
void CYDBL_basaelemanekle(int);
void CYDBL_sonaelemanekle(int);
void CYDBL_bastanelemansilme();
void CYDBL_sondanelemansilme();
void CYDBL_belirlielemansilme(int);
void CYDBL_siralielemanekle(int);

#endif
