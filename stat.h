/*
 * stat.h
 *
 *  Created on: 22-03-2015
 *      Author: plankton
 */

#include "kontener.h"
#ifndef STAT_H_
#define STAT_H_



//zwraca 5 najczęstrzych słów w słowniku
char** max_slowo(slownik_t *slownik);

//zwraca 5 najczęstrzych n gramów  w słowniku oraz ich PMI
char** max_gram(slownik_t *slownik,int n);

#endif /* STAT_H_ */
