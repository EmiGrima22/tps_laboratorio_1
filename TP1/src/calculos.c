/*
 * calculos.c
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */
#include <stdio.h>
#include <stdlib.h>
void ContarPosiciones(int posicion, int * contadorPosicionUno, int * contadorPosicionDos, int * contadorPosicionTres, int * contadorPosicionCuatro)
{
	switch (posicion)
	{
		case 1:
			*contadorPosicionUno += 1;
			break;
		case 2:
			*contadorPosicionDos += 1;
			break;
		case 3:
			*contadorPosicionTres += 1;
			break;
		case 4:
			*contadorPosicionCuatro += 1;
			break;
	}
}

void ContarConfederaciones(int confederacion,int *confeUno, int *confeDos, int *confeTres,int *confeCuatro, int *confeCinco, int *confeSeis)
{
	switch (confederacion)
	{
		case 1:
			*confeUno += 1;
			break;
		case 2:
			*confeDos += 1;
			break;
		case 3:
			*confeTres += 1;
			break;
		case 4:
			*confeCuatro += 1;
			break;
		case 5:
			*confeCinco += 1;
			break;
		case 6:
			*confeSeis += 1;
			break;
	}
}

float CalcularPromedio(int contadorConfe, int jugadoresTotales)
{
	float resultado;
	resultado = (float)(contadorConfe * 100) / jugadoresTotales;
	return resultado;
}

int CalcularTotal(int hospedaje ,int comida, int transporte)
{
	int resultado;
	resultado = hospedaje + comida + transporte;
	return resultado;
}

int CalcularAumentoTotal(int total, int porcentaje, int * aumento)
{
	int totalConAumento;

	*aumento = (total * porcentaje) / 100;
	totalConAumento = total + *aumento;

	return totalConAumento;
}
