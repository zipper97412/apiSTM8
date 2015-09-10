
/**
\brief cette fonction permet d'initialiser l'UART
*/
void UART_init(void);


/**
\brief reÃ§oit un caractere par l'uart
\return le caractÃ¨re reÃ§u, 0 sinon
*/
char UART_getchar(void);


/**
\brief envoie un caractÃ¨re par l'uart
\param car le caractere a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
u8 UART_putchar(char car);


/**
\brief envoie une chaine de caractere
\param chaine la chaine a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
//u8 UART_putstring(char* chaine);
u8 UART_putstring(char *chaine);


#endif
