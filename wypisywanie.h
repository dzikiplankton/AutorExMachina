/*
 * wypisywanie.h
 *
 *  Created on: 22-03-2015
 *      Author: plankton
 */

#ifndef WYPISYWANIE_H_
#define WYPISYWANIE_H_
#include "kontener.h"


/**
 * zapisuje słownik do pliku
 */
int  wyp_sl(slownik_t * slownik, char * scierzka);

//tworzy plik z wygenerowanym tekstem
int gen_t(int slowa, int akapity, char*plik, slownik_t *slownik);

//tworzy plik ze statystykami
int gen_stat(slownik_t* slownik);


#endif /* WYPISYWANIE_H_ */
