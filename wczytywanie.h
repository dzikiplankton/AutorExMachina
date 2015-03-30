/*
 * wczytywanie.h
 *
 *  Created on: 22-03-2015
 *      Author: plankton
 */


#ifndef WCZYTYWANIE_H_
#define WCZYTYWANIE_H_

#include "kontener.h"

//wczytuje wcześniej zapisany do pliku słownik zwraca adres wczytanego słownika
slownik_t *wczytaj_slownik(char* baza);

//powiększa słownik o informacje z nowych tekstów zwraca adres słownika
slownik_t *powieksz_slownik(char* baza ,char** teksty);




#endif /* WCZYTYWANIE_H_ */
