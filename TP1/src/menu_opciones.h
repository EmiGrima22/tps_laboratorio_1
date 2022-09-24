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
/// @param opcionMantenimiento: Valor de la opcion a cargar
/// @param acumuladorHospedaje: Valor del acumulador de hospedaje en tiempo real
/// @param acumuladorComida: Valor del acumulador de comida en tiempo real
/// @param acumuladorTransporte: Valor del acumulador de transporte en tiempo real
void IngresarMantenimiento(int opcionMantenimiento, int * acumuladorHospedaje, int * acumuladorComida, int * acumuladorTransporte);

/// @brief Informa el resultado total de los porcentajes de los jugadores seleccionados de cada confederacion
///
/// @param porcentajeUefa: Indica el porcentaje de jugadores de UEFA
/// @param porcentajeConmebol: Indica el porcentaje de jugadores de Conmebol
/// @param porcentajeConcacaf: Indica el porcentaje de jugadores de Concacaf
/// @param porcentajeAfc: Indica el porcentaje de jugadores de Afc
/// @param porcentajeOfc: Indica el porcentaje de jugadores de Ofc
/// @param porcentajeCaf: Indica el porcentaje de jugadores de Caf
void InformarResultados(float porcentajeUefa,float porcentajeConmebol,float porcentajeConcacaf,float porcentajeAfc,float porcentajeOfc,float porcentajeCaf);

/// @brief Informa el valor total del mantenimiento sin aplicar aumento, el aumento que va a aplicar y el total con el aumento aplicado
///
/// @param totalMantenimiento: valor del mantenimiento total
/// @param valorDeAumento: valor del aumento
/// @param totalConAumento: valor total con aumento incluido
void InformarTotalMantenimiento(int totalMantenimiento, int valorDeAumento, int totalConAumento);
#endif /* MENU_OPCIONES_H_ */
