/*
 * calculos.h
 *
 *  Created on: 21 sep. 2022
 *      Author: Emy
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/// @brief Cuenta en tiempo real las posiciones ingresadas hasta el momento
///
/// @param posicion: Valor de la posicion a ingresar
/// @param contadorPosicionUno: Valor del contador de una de las posiciones
/// @param contadorPosicionDos: Valor del contador de una de las posiciones
/// @param contadorPosicionTres: Valor del contador de una de las posiciones
/// @param contadorPosicionCuatro: Valor del contador de una de las posiciones
void ContarPosiciones(int posicion, int * contadorPosicionUno, int * contadorPosicionDos, int * contadorPosicionTres, int * contadorPosicionCuatro);

/// @brief Cuenta las confederaciones que se van eligiendo hasta el momento
///
/// @param confederacion: Valor de opcion de la confederacion elegida
/// @param confeUno: Valor del contador de una de las confederaciones
/// @param confeDos: Valor del contador de una de las confederaciones
/// @param confeTres: Valor del contador de una de las confederaciones
/// @param confeCuatro: Valor del contador de una de las confederaciones
/// @param confeCinco: Valor del contador de una de las confederaciones
/// @param confeSeis:  Valor del contador de una de las confederaciones
void ContarConfederaciones(int confederacion,int *confeUno, int *confeDos, int *confeTres,int *confeCuatro, int *confeCinco, int *confeSeis);

/// @brief Calcula el promedio y lo retorna
///
/// @param contadorConfe: Valor total del contador de confederaciones
/// @param jugadoresTotales: Valor total del contador de jugadores cargados
/// @return Retorna el promedio
float CalcularPromedio(int contadorConfe, int jugadoresTotales);

/// @brief Calcula la suma total del hospedaje, comida y transporte. Retorna el resultado total
///
/// @param hospedaje: Valor del acumulador total de hospedaje
/// @param comida: Valor del acumulador total de comida
/// @param transporte: Valor del acumulador total de transporte
/// @return Retorna el resultado de la suma
int CalcularTotal(int hospedaje ,int comida, int transporte);

/// @brief Calcula el valor de aumento segun el porcentaje y el total con el aumento aplicado. Retorna el valor total con aumento aplicado
///
/// @param total: El valor total de lo que deseo sacar el aumento
/// @param porcentaje: El valor del porcentaje a aplicar
/// @param aumento: El valor con el porcentaje aplicado
/// @return Retorna el valor total con el porcentaje aplicado
int CalcularAumentoTotal(int total, int porcentaje, int * aumento);
#endif /* CALCULOS_H_ */
