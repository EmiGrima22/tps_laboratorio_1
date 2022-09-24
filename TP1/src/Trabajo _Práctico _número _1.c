#include <stdio.h>
#include <stdlib.h>
#include "menu_opciones.h"
#include "calculos.h"
#include "validaciones.h"
#define jugadoresMax 22
#define porcentaje 35

int main(void)
{
	setbuf(stdout, NULL);

	int guardarOpcion;
	int guardarOpcionMantenimiento;
	int guardarPosicion;
	int acumuladorCostoHospedaje = 0;
	int acumuladorCostoComida = 0;
	int acumuladorCostoTransporte = 0;
	int contadorArqueros = 0;
	int contadorDefensas = 0;
	int contadorMediocampistas = 0;
	int contadorDelanteros = 0;
	int guardarConfederacion;
	int contadorAfc = 0;
	int contadorCaf = 0;
	int contadorConcacaf = 0;
	int contadorConmebol = 0;
	int contadorUefa = 0;
	int contadorOfc = 0;
	int contadorJugadores = 0;
	int flagMantenimientoCargado = 0;
	int flagJugadoresCargado = 0;
	int flagCalculosRealizados = 0;
	float porcentajeAfc;
	float porcentajeCaf;
	float porcentajeConcacaf;
	float porcentajeConmebol;
	float porcentajeUefa;
	float porcentajeOfc;
	int totalMantenimiento;
	int aumento;
	int aumentoTotal;
	int flagAumento = 0;

	do
	{
		guardarOpcion = IngresarOpcion(acumuladorCostoHospedaje,acumuladorCostoComida,acumuladorCostoTransporte,contadorArqueros,contadorDefensas,contadorMediocampistas,contadorDelanteros);
		switch (guardarOpcion)
		{
			case 1:
				guardarOpcionMantenimiento = IngresarOpcionMantenimientoYValidar();
				IngresarMantenimiento(guardarOpcionMantenimiento,&acumuladorCostoHospedaje,&acumuladorCostoComida,&acumuladorCostoTransporte);

				if(acumuladorCostoHospedaje > 0 && acumuladorCostoComida > 0 && acumuladorCostoTransporte > 0)
				{
					flagMantenimientoCargado = 1;
				}

				break;
			case 2:
				if(contadorJugadores<jugadoresMax)
				{
					int flagCargaCorrecta = 0;
					guardarPosicion = IngresarPosicionYValidar();

					switch (guardarPosicion)
					{
						case 1://ARQUERO
							if(contadorArqueros<2)
							{
								ContarPosiciones(guardarPosicion,&contadorArqueros,&contadorDefensas,&contadorMediocampistas,&contadorDelanteros);
								IngresarCamisetaYValidar();
								guardarConfederacion = IngresarConfederacionYValidar();
								ContarConfederaciones(guardarConfederacion,&contadorAfc,&contadorCaf,&contadorConcacaf,&contadorConmebol,&contadorUefa,&contadorOfc);
								flagCargaCorrecta = 1;
							}
							else
							{
								printf("Se ingreso el maximo de arqueros\n");
							}
							break;
						case 2://DEFENSA
							if(contadorDefensas<8)
							{
								ContarPosiciones(guardarPosicion,&contadorArqueros,&contadorDefensas,&contadorMediocampistas,&contadorDelanteros);
								IngresarCamisetaYValidar();
								guardarConfederacion = IngresarConfederacionYValidar();
								ContarConfederaciones(guardarConfederacion,&contadorAfc,&contadorCaf,&contadorConcacaf,&contadorConmebol,&contadorUefa,&contadorOfc);
								flagCargaCorrecta = 1;
							}
							else
							{
								printf("Se ingreso el maximo de defensas\n");
							}
							break;
						case 3://MEDIOCAMPISTA
							if(contadorMediocampistas<8)
							{
								ContarPosiciones(guardarPosicion,&contadorArqueros,&contadorDefensas,&contadorMediocampistas,&contadorDelanteros);
								IngresarCamisetaYValidar();
								guardarConfederacion = IngresarConfederacionYValidar();
								ContarConfederaciones(guardarConfederacion,&contadorAfc,&contadorCaf,&contadorConcacaf,&contadorConmebol,&contadorUefa,&contadorOfc);
								flagCargaCorrecta = 1;
							}
							else
							{
								printf("Se ingreso el maximo de mediocampistas\n");
							}
							break;
						case 4://DELANTERO
							if(contadorDelanteros<4)
							{
								ContarPosiciones(guardarPosicion,&contadorArqueros,&contadorDefensas,&contadorMediocampistas,&contadorDelanteros);
								IngresarCamisetaYValidar();
								guardarConfederacion = IngresarConfederacionYValidar();
								ContarConfederaciones(guardarConfederacion,&contadorAfc,&contadorCaf,&contadorConcacaf,&contadorConmebol,&contadorUefa,&contadorOfc);
								flagCargaCorrecta = 1;
							}
							else
							{
								printf("Se ingreso el maximo de delanteros\n");
							}
							break;
					}

					if(flagCargaCorrecta == 1)
					{
						contadorJugadores++;
					}
				}
				else
				{
					printf("Se cargo \n");
				}
				flagJugadoresCargado = 1;
				break;
			case 3:
				if(flagMantenimientoCargado == 1 && flagJugadoresCargado == 1)
				{
					// calcular porcentaje de cada confe
					porcentajeAfc = CalcularPromedio(contadorAfc,contadorJugadores);
					porcentajeCaf = CalcularPromedio(contadorCaf,contadorJugadores);
					porcentajeConcacaf = CalcularPromedio(contadorConcacaf,contadorJugadores);
					porcentajeConmebol= CalcularPromedio(contadorConmebol,contadorJugadores);
					porcentajeUefa= CalcularPromedio(contadorUefa,contadorJugadores);
					porcentajeOfc= CalcularPromedio(contadorOfc,contadorJugadores);
					if(porcentajeAfc > 0 || porcentajeCaf > 0 || porcentajeConcacaf > 0 || porcentajeConmebol > 0 || porcentajeUefa > 0 || porcentajeOfc > 0)
					{
						printf("Se calculo el porcentaje correctamente\n");
					}
					// costo mantenimiento total
					totalMantenimiento = CalcularTotal(acumuladorCostoHospedaje,acumuladorCostoComida,acumuladorCostoTransporte);
					if(totalMantenimiento>0)
					{
						printf("Se calculo correctamente el total de mantenimiento\n");
					}
					//Aumento 35% si la mayor parte del plantel es UEFA 50% = 11 (contadorUefa > 10)
					if(contadorUefa>10)
					{
						aumentoTotal=CalcularAumentoTotal(totalMantenimiento,porcentaje,&aumento);
						if(aumentoTotal>0)
						{
							printf("Se realizo correctamente el calculo de aumento\n");
							flagAumento = 1;
						}
					}
					else
					{
						printf("No se realizo el calculo de aumento\n");
					}
					flagCalculosRealizados = 1;
				}
				else
				{
					if(flagMantenimientoCargado == 0)
					{
						printf("Se requiere ingresar costos de mantenimiento\n");
					}

					if(flagJugadoresCargado == 0)
					{
						printf("Falta cargar al menos un jugador\n");
					}
				}
				break;
			case 4:
				if(flagMantenimientoCargado == 1 && flagJugadoresCargado == 1 && flagCalculosRealizados == 1)
				{
					InformarResultados(porcentajeUefa,porcentajeConmebol,porcentajeConcacaf,porcentajeAfc,porcentajeOfc,porcentajeCaf);
					if(flagAumento == 1)
					{
						InformarTotalMantenimiento(totalMantenimiento,aumento,aumentoTotal);
					}
				}
				else
				{
					if(flagMantenimientoCargado == 0)
					{
						printf("Se requiere ingresar costos de mantenimiento\n");
					}

					if(flagJugadoresCargado == 0)
					{
						printf("Falta cargar al menos un jugador\n");
					}

					if(flagCalculosRealizados == 0)
					{
						printf("Falta realizar los calculos\n");
					}
				}
				break;
		}
		if(guardarOpcion < 1 || guardarOpcion > 5)
		{
			printf("Opcion Erronea, reingresar opcion...\n\n");
		}
	}while(guardarOpcion != 5);
}


