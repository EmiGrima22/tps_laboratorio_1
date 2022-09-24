/*
 * menu_opciones.h
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */

#ifndef MENU_OPCIONES_H_
#define MENU_OPCIONES_H_

/// @brief Se muestra el menu principal para ingresar una opcion a cargar y retorna la opcion ingresada
///
/// @param hospedaje: valor del acumulador en tiempo real de lo que se va cargando en gastos de hospedaje
/// @param comida: valor del acumulador en tiempo real de lo que se va cargando en gastos de comida
/// @param transporte: valor del acumulador en tiempo real de lo que se va cargando en gastos de transporte
/// @param arqueros: valor del contador en tiempo real de lo que se va cargando en arquero
/// @param defensas: valor del contador en tiempo real de lo que se va cargando en defensa
/// @param medios: valor del contador en tiempo real de lo que se va cargando en mediocampista
/// @param delanteros: muestra el contador en tiempo real de lo que se va cargando en delantero
/// @return retorna la opcion ingresada a cargar
int IngresarOpcion(int hospedaje, int comida, int transporte, int arqueros, int defensas, int medios, int delanteros);

/// @brief Pide ingresar el valor a cargar y retorna dicho valor
///
/// @return Retorna el valor
int IngresarCosto();

/// @brief Segun la opcion seleccionada se acumulan los costos de mantenimiento de esa opcion
///
/// @param opcion: Valor de la opcion a cargar
/// @param acumUno: Valor del acumulador de uno de los costos de mantenimiento
/// @param acumDos: Valor del acumulador de uno de los costos de mantenimiento
/// @param acumTres: Valor del acumulador de uno de los costos de mantenimiento
void IngresarMantenimiento(int opcion, int * acumUno, int * acumDos, int * acumTres);

/// @brief Informa los valores de los porcentajes de cada confederacion
///
/// @param porcentajeUno: Valor del porcentaje de una de las confederaciones
/// @param porcentajeDos: Valor del porcentaje de una de las confederaciones
/// @param porcentajeTres: Valor del porcentaje de una de las confederaciones
/// @param porcentajeCuatro: Valor del porcentaje de una de las confederaciones
/// @param porcentajeCinco: Valor del porcentaje de una de las confederaciones
/// @param porcentajeSeis: Valor del porcentaje de una de las confederaciones
void InformarResultados(float porcentajeUno,float porcentajeDos,float porcentajeTres,float porcentajeCuatro,float porcentajeCinco,float porcentajeSeis);

/// @brief Informa el valor total del mantenimiento sin aumento, el aumento que va a aplicar y el total con el aumento aplicado
///
/// @param mantenimiento: valor del mantenimiento total
/// @param aumento: valor del aumento
/// @param total: valor del aumento aplicado al mantenimiento total
void InformarTotalMantenimiento(int mantenimiento, int aumento, int total);
#endif /* MENU_OPCIONES_H_ */
