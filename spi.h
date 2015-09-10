#ifndef SPI_H
#define SPI_H
#include "stm8s_type.h"

#define ERROR  1
#define SUCCESS  0 
#define EMPTY 0

/**
\brief cette fonction permet d'initialiser l'SPI
*/
void SPI_init(void);

/**
\brief reçoit un caractere par l'spi
\return le caractère reçu, 0 sinon
*/
char SPI_getchar(void);

/**
\brief envoie un caractère par l'spi
\param car le caractere a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
u8 SPI_putchar(char car);

/**
\brief envoie une chaine de caractere
\param chaine la chaine a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
u8 SPI_putstring(char *chaine);

#endif
