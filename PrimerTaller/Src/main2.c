/*
 * main2.c
 *
 *  Created on: 25/08/2022
 *      Author: if420_01
 */



int main (void){

	char clearVariable1 = 0b11110101;
	char clearMask = 0b01111111;

	clearVariable1 = clearVariable1 & ~(1<<7);
	clearVariable1 &= ~(1<<7);

	char setVar = 0b10010111;
	char setmask = 0b01000000;

	setVar = setVar | setmask;
	setVar |= (1<<6);

	char ejercicioVar =0b10111010;
	ejercicioVar &= +(0b1111<<4);
	ejercicioVar |=(0xD<<4);



}
