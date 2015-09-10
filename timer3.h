/* TIMER 3 */


/**
\brief cette fonction permet d'initialiser le timer 3
*/
void t3_init();


/**
\brief cette fonction permet de modifier les registres ARR
\param arr la nouvelle valeur à mettre dans les registres
*/
void t3_setARR(u16 arr);


/**
\brief cette fonction permet de modifier la valeur dans le registre du prescalaire
\param pscr la nouvelle valeur a mettre dans le registre
*/
void t3_setPSCR(u8 pscr);


/**
\brief cette fonction permet de lancer le comptage
*/
void t3_start();


/**
\brief cette fonction permet d'arreter le comptage et de mettre en condition pour repartir
*/
void t3_reset();


/**
\brief cette fonction permet de connaitre le contenu actuel du registre CNTR
\return la valeur des registres
*/
u16 t3_getTime();
