/*
 * calculos.h
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/// @brief Cuenta las posiciones elegidas en tiempo real
///
/// @param opcionPosicion: Opcion de la posicion a cargar
/// @param contadorArquero: Lleva la cuenta de los arqueros ingresados
/// @param contadorDefensa: Lleva la cuenta de los defensas ingresados
/// @param contadorMediocampista: Lleva la cuenta de los mediocampistas ingresados
/// @param contadorDelantero: Lleva la cuenta de los delanteros ingresados
void ContarPosiciones(int opcionPosicion, int * contadorArquero, int * contadorDefensa, int * contadorMediocampista, int * contadorDelantero);

/// @brief Cuenta las confederaciones que se van eligiendo hasta el momento
///
/// @param opcionConfederacion: Opcion de la conferecion a elegir
/// @param contadorAfc: Lleva la cuenta de los jugadores de confederacion AFC
/// @param contadorCaf: Lleva la cuenta de los jugadores de confederacion CAF
/// @param contadorConcacaf: Lleva la cuenta de los jugadores de confederacion CONCACAF
/// @param contadorConmebol: Lleva la cuenta de los jugadores de confederacion CONMEBOL
/// @param contadorUefa: Lleva la cuenta de los jugadores de confederacion UEFA
/// @param contadorOfc:  Lleva la cuenta de los jugadores de confederacion OFC
void ContarConfederaciones(int opcionConfederacion,int *contadorAfc, int *contadorCaf, int *contadorConcacaf,int *contadorConmebol, int *contadorUefa, int *contadorOfc);

/// @brief Calcula el promedio y lo retorna
///
/// @param contadorDeLaConfederacion: Valor total del contador de confederaciones
/// @param contadorJugadoresTotales: Valor total del contador de jugadores cargados
/// @return Retorna el promedio
float CalcularPromedio(int contadorDeLaConfederacion, int contadorJugadoresTotales);

/// @brief Calcula la suma total de los gastos de mantenimiento: hospedaje, comida y transporte. Retorna el resultado total
///
/// @param hospedaje: Valor del acumulador total de hospedaje
/// @param comida: Valor del acumulador total de comida
/// @param transporte: Valor del acumulador total de transporte
/// @return Retorna el resultado de la suma
int CalcularTotal(int hospedaje ,int comida, int transporte);

/// @brief Calcula el valor de aumento segun el porcentaje y el total con el aumento aplicado. Retorna el valor total con aumento aplicado
///
/// @param sumaMantenimientoTotal: La suma de los tres acumuladores hospedaje,comida y transporte
/// @param porcentajeAumento: El valor del porcentaje a aplicar
/// @param totalConAumento: El valor final con el aumento aplicado
/// @return Retorna el valor total con el porcentaje aplicado
int CalcularAumentoTotal(int sumaMantenimientoTotal, int porcentajeAumento, int * totalConAumento);
#endif /* CALCULOS_H_ */
