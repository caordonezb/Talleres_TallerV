/*
 * Main.c
 *
 *  Created on: Sep 8, 2022
 *      Author: caordonezb
 */

#include <stdint.h>

int16_t resultadoOperacion (int8_t numero1, int8_t numero2, uint8_t operacion);


#define SUMA '+'
#define RESTA '-'
#define MULTIPLICACION '*'
#define DIVISION '/'

int16_t prueba = 0;

int main(void){

	prueba = resultadoOperacion (8,3,SUMA);

	while(1){
	}
}

int16_t resultadoOperacion (int8_t numero1, int8_t numero2, uint8_t operacion){
	int16_t resultado = 0;
	switch (operacion){

	case SUMA:
	{
		resultado = numero1 + numero2;
	break;
	}
	case RESTA:
	{
		resultado = numero1 - numero2;
	break;
	}
	case MULTIPLICACION:
	{
		resultado = numero1 * numero2;
	break;
	}
	case DIVISION:
	{
		resultado = numero1 / numero2;
	break;
	}
	default:
		resultado = 0;
	}
	return resultado;
}

