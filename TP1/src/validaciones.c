#include <stdio.h>
#include <stdlib.h>

int IngresarOpcionMantenimientoYValidar()
{
	int opcionMantenimiento;
	do
	{
		printf("Que opcion desea ingresar[1 - 3]\n");
		printf("1.Costo de hospedaje\n");
		printf("2.Costo de comida\n");
		printf("3.Costo de transporte\n");
		scanf("%d",&opcionMantenimiento);

		if(opcionMantenimiento<1 || opcionMantenimiento>3)
		{
			printf("Opcion Erronea!\n");
		}
	}while(opcionMantenimiento<1 || opcionMantenimiento>3);

	return opcionMantenimiento;
}

int IngresarPosicionYValidar()
{
	int posicion;
	do
	{
		printf("Que posicion desea cargar [1-4]\n");
		printf("1.Arquero\n");
		printf("2.Defensor\n");
		printf("3.Mediocampista\n");
		printf("4.Delantero\n");
		scanf("%d",&posicion);
		if(posicion<1 || posicion>4)
		{
			printf("Posicion Erronea!\n");
		}
	}while(posicion<1 || posicion>4);

	return posicion;
}

int IngresarConfederacionYValidar()
{
	int confederacion;
	do
	{
		printf("Que confederacion desea cargar [1-6]\n");
		printf("1.AFC\n");
		printf("2.CAF\n");
		printf("3.CONCACAF\n");
		printf("4.CONMEBOL\n");
		printf("5.UEFA\n");
		printf("6.OFC\n");
		scanf("%d",&confederacion);
		if(confederacion<1 || confederacion>6)
		{
			printf("Confederacion Erronea!\n");
		}
	}while(confederacion<1 || confederacion>6);

	return confederacion;
}

void IngresarCamisetaYValidar()
{
	int camiseta;
	do
	{
		printf("Que numero de camiseta desea cargar [1-99]\n");
		scanf("%d",&camiseta);
		if(camiseta<1 || camiseta>99)
		{
			printf("Numero de camiseta Erronea!\n");
		}
	}while(camiseta<1 || camiseta>99);
}
