/*
 * calculos.c
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */
#include <stdio.h>
#include <stdlib.h>
void ContarPosiciones(int opcionPosicion, int * contadorArquero, int * contadorDefensa, int * contadorMediocampista, int * contadorDelantero)
{
	switch (opcionPosicion)
	{
		case 1:
			*contadorArquero += 1;
			break;
		case 2:
			*contadorDefensa += 1;
			break;
		case 3:
			*contadorMediocampista += 1;
			break;
		case 4:
			*contadorDelantero += 1;
			break;
	}
}

void ContarConfederaciones(int opcionConfederacion,int *contadorAfc, int *contadorCaf, int *contadorConcacaf,int *contadorConmebol, int *contadorUefa, int *contadorOfc)
{
	switch (opcionConfederacion)
	{
		case 1:
			*contadorAfc += 1;
			break;
		case 2:
			*contadorCaf += 1;
			break;
		case 3:
			*contadorConcacaf += 1;
			break;
		case 4:
			*contadorConmebol += 1;
			break;
		case 5:
			*contadorUefa += 1;
			break;
		case 6:
			*contadorOfc += 1;
			break;
	}
}

float CalcularPromedio(int contadorDeLaConfederacion, int contadorJugadoresTotales)
{
	float resultado;
	resultado = (float)(contadorDeLaConfederacion * 100) / contadorJugadoresTotales;
	return resultado;
}

int CalcularTotal(int hospedaje ,int comida, int transporte)
{
	int resultado;
	resultado = hospedaje + comida + transporte;
	return resultado;
}

int CalcularAumentoTotal(int sumaMantenimientoTotal, int porcentajeAumento, int * totalConAumento)
{
	int resultado;

	*totalConAumento = (sumaMantenimientoTotal * porcentajeAumento) / 100;
	resultado = sumaMantenimientoTotal + *totalConAumento;

	return resultado;
}
