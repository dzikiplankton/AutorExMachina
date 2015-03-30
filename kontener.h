/*
 * kontener.h
 *
 *  Created on: 22-03-2015
 *      Author: plankton
 */

#ifndef KONTENER_H_
#define KONTENER_H_
/**początkowa ilość pól w wektorze*/
#define START_VEC 2
/**maksymalna długość słowa*/
#define WRD_MAX_LENGHT 15

/** Maksymalna długość nazwy i scierzki pliku*/
#define MAX_FILE_DN  100

//STRUKTURY

//struktura opisująca wektor do przechowywania listy plików wejściowych
typedef struct wej{
	char**nazwy;						//lista ścierzek
	int pojemnosc;						//ilsć miejsc w wektorze
	int zajete;							//ilość zajętych miejs w wektorze
}wej_t;

wej_t* nowy_wej(){
	wej_t wej;
	wej->pojemnosc=2;
	wej->zajete=0;
	wej->nazwy=(char**)malloc(START_VEC*sizeof(char*));
	return wej;
}


//struktura zawierająca informacje o lokalizacji słowa w tekście
typedef struct lokalizacja{
        int nr;                         //numer wystąpienia w tekście
        int pref;                       //indx prefiksu
        int suf;                        //indx sufiksu
}lok_t;


//struktura zawierająca  informacje o słowie
typedef struct slowo{
        char v[WRD_MAX_LENGHT];         //treść słowa
        lok_t *lok;                     //adres wektora przechowującego informacje o wystąpieniach słowa
        int miejsce;                    //ilość pól w wektorze
        int zajete;                     //ilość zajętych pól w wektorze
}slowo_t;

//struktura zawierająca słownik czyli możliwe słowa oraz inf o lokalizacji
typedef struct slownik{
        slowo_t* slowo;                 ///<adres wektora przechowującego słowa
        int miejsce;                    //ilość pól w wektorze zaw słowa
        int zajete;                     //ilość zajętych pól w wektorze zaw słowa
        int ostatnie;                   //numer wys w tekście ostatniego dodanego do słownika słowa
}slownik_t;

//FUNKCJE

//tworzy pusty słownik
slownik_t *pusty_slownik();

//dodaje treść słowa do słownika zwraca 1/0
int add_slowo(char*v);

//dodaje informacje o lokalizacji słów do słownika
slownik_t *dodaj_wystapienia(slownik_t*slownik,char** teksty);

//dodaje do słownika wszystkie możliwe słowa (z powtórzeniami)
slownik_t *dodaj_slowa(slownik_t*slownik,char** teksty,int ilosc_tekstow);


//sortuje słownik alfabetycznie (usuwa powtórzenia ) zwraca adres
slownik_t *sortuj(slownik_t*slownik);

//łaczy słowniki (!!słownik_nowe bez lokalizacji) zwraca adres
slownik_t *polacz(slownik_t * slownik_z_lok ,slownik_t * slownik_nowe_slowa);

//dodaje informacje o lokalizacji wystąpienia słowa
int add_lok(slownik_t *slownik,char *slowo, char* pref,char* suf);

//zwraca indeks  słowa w słowniku
int daj_indx(slownik_t*slownik,char* slowo);


#endif /* KONTENER_H_ */
