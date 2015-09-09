/* UART */


/**
\brief cette fonction permet d'initialiser l'UART
*/
void init();


/**
\brief reçoit un caractere par l'uart
\return le caractère reçu, 0 sinon
*/
char getchar();


/**
\brief envoie un caractère par l'uart
\param car le caractere a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
u8 putchar(char car);


/**
\brief envoie une chaine de caractere
\param chaine la chaine a envoyer
\return 0 si tout s'est bien passe, 1 sinon
*/
u8 putchars(char* chaine);
