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

void IngresarMantenimiento(int opcionMantenimiento, int * acumuladorHospedaje, int * acumuladorComida, int * acumuladorTransporte)
{
	switch (opcionMantenimiento)
	{
		case 1:
			*acumuladorHospedaje += IngresarCosto();
			break;
		case 2:
			*acumuladorComida += IngresarCosto();
			break;
		case 3:
			*acumuladorTransporte += IngresarCosto();
			break;
	}
}

void InformarResultados(float porcentajeUefa,float porcentajeConmebol,float porcentajeConcacaf,float porcentajeAfc,float porcentajeOfc,float porcentajeCaf)
{
	printf("\n            Informar todos los resultados               \n\nPorcentaje Uefa %.2f\nPorcentaje Conmebol %.2f\nPorcentaje Concacaf %.2f\nPorcentaje Afc %.2f\nPorcentaje Ofc %.2f\nPorcentaje Caf %.2f\n",porcentajeUefa,porcentajeConmebol,porcentajeConcacaf,porcentajeAfc,porcentajeOfc,porcentajeCaf);
}

void InformarTotalMantenimiento(int totalMantenimiento, int valorDeAumento, int totalConAumento)
{
	printf("El costo de mantenimiento era de $%d y recibio un aumento de $%d, su nuevo valor es de: $%d\n",totalMantenimiento,valorDeAumento,totalConAumento);
}
