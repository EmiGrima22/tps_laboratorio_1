/*
 * menu_opciones.c
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */
#include <stdio.h>
#include <stdlib.h>

int IngresarOpcion(int hospedaje, int comida, int transporte, int arqueros, int defensas, int medios, int delanteros)
{
	int opcion;
	printf("           Menu Principal      \n\n1.Ingreso de los costos de Mantenimiento\n Costo de hospedaje -> $%d\n Costo de comida -> $%d\n Costo de transporte -> $%d\n2.Carga de jugadores\n Arqueros -> %d\n Defensores -> %d\n Mediocampistas -> %d\n Delanteros -> %d\n3.Realizar todos los calculos\n4.Informar todos los resultados\n5.Salir\n",hospedaje,comida,transporte,arqueros,defensas,medios,delanteros);
	scanf("%d",&opcion);
	return opcion;
}

int IngresarCosto()
{
	int opcion;
	printf("Ingresar costo\n");
	scanf("%d",&opcion);
	return opcion;
}

void IngresarMantenimiento(int opcion, int * acumUno, int * acumDos, int * acumTres)
{
	switch (opcion)
	{
		case 1:
			*acumUno += IngresarCosto();
			break;
		case 2:
			*acumDos += IngresarCosto();
			break;
		case 3:
			*acumTres += IngresarCosto();
			break;
	}
}

void InformarResultados(float porcentajeUno,float porcentajeDos,float porcentajeTres,float porcentajeCuatro,float porcentajeCinco,float porcentajeSeis)
{
	printf("\n            Informar todos los resultados               \n\nPorcentaje Uefa %.2f\nPorcentaje Conmebol %.2f\nPorcentaje Concacaf %.2f\nPorcentaje Afc %.2f\nPorcentaje Ofc %.2f\nPorcentaje Caf %.2f\n",porcentajeUno,porcentajeDos,porcentajeTres,porcentajeCuatro,porcentajeCinco,porcentajeSeis);
}

void InformarTotalMantenimiento(int mantenimiento, int aumento, int total)
{
	printf("El costo de mantenimiento era de $%d y recibio un aumento de $%d, su nuevo valor es de: $%d\n",mantenimiento,aumento,total);
}
