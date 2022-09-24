/*
 * validaciones.h
 *
 *  Created on: 20 sep. 2022
 *      Author: Emy
 */

#ifndef VALIDACIONES_H_
#define VALIDACIONES_H_

/// @brief Pide el Ingreso de una opcion, valida si esta dentro del rango de opciones y retorna la opcion validada
///
/// @return Retorna la opcion validada
int IngresarOpcionMantenimientoYValidar();

/// @brief Pide el ingreso de una posicion, valida que este dentro del rango de opciones de las posiciones y retorna la opcion de la posicion validada
///
/// @return Retorna la opcion de la posicion
int IngresarPosicionYValidar();

/// @brief Pide el ingreso de una confederacion, valida que la opcion este dentro del rango de las opciones de confederaciones y retorna la opcion de la confederacion validada
///
/// @return Retorna la opcion validada de la confederacion
int IngresarConfederacionYValidar();

/// @brief Pide el ingreso de un numero de camiseta entre un rango y lo valida
///
void IngresarCamisetaYValidar();
#endif /* VALIDACIONES_H_ */
