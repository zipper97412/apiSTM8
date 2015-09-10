#include "stm8s.h"
#include "spi.h"
#include "stm8s_spi.h"


void SPI_init(void) {
	SPI->CR1 = 0x1A;  //CPOL = 1 CPHA = 0 LSBFIRST = 0 BR=3
    // echantillonnage au 1er front descendant
	SPI->CR2 = 0x03; //SOFT, master
	SPI->CR1 |= SPI_CR1_MSTR; //MASTER = 1
	SPI->CR1 |= SPI_CR1_SPE; //enable = 1
}

char SPI_getchar(void) {
	if ( (SPI->SR & SPI_SR_RXNE) == SPI_SR_RXNE ) {
		return SPI->DR;
	}
	else {
		return EMPTY;
	}
}

u8 SPI_putchar(char car) {
	if ( (SPI->SR & SPI_SR_TXE) == SPI_SR_TXE ) {
		SPI->DR = car;
		return SUCCESS;
	}
	else {
		return ERROR;
	}
}
u8 SPI_putstring(char *chaine) {
	char car;
	int i=0;
	
	while ( (car=chaine[i]) != '\0' ) {
		
		while (SPI_putchar(car) == ERROR);
		i++;
	}
		

}
