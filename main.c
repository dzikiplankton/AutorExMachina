
/*
 * main.c
 *
 *  Created on: 22-03-2015
 *      Author: plankton
 */

#include <stdio.h>
#include <string.h>
#include "kontener.h"


/**
 * Funkcja sterująca programem
 * @param argc -ile jest parametrów uruchomienia
 * @param argv -parametry uruchomienia
 * @return 0
 */

int main(int argc,char **argv){
		int in=0;                       //ile jest nowych tekstów bazowych
        int b=0;                        //czy kożystać z bazy
        int out=0;                      //czy podano ścierzkę dla pliku wynikowego
        int par=3;                      //ile akapitów
        int wrd=50;                     //ile słów w akapicie
        int stat=0;                     //czy statystyki
        int ngram=2;                    //rodzaj n gramów
        int i,j;

        char *plik_wyjsciowy;
        char **nowe_teksty;

        i=1;
        j=0;
        while(i<argc){
                if(strcmp(argv[i],"-in")==0){
                        while( argv[++i][0]!='-' ){
                        	nowe_teksty[j++]=argv[i];
                        }
                }else
                if(strcmp(argv[i],"-b")==0){
                        b=1;
                        i++;
                }else
                if(strcmp(argv[i],"-out")==0){

                }else
                if(strcmp(argv[i],"-par")==0){
                        par=atoi(argv[++i]);
                        i++;
                }else
                if(strcmp(argv[i],"-wrd")==0){
                        wrd=atoi(argv[++i]);
                        i++;
                }else
                if(strcmp(argv[i],"-stat")==0){

                }else
                if(strcmp(argv[i],"-ngram")==0){
                        ngram=atoi(argv[++i]);
                        i++;
                }

        }
        return 0;
}
