/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   functions.h
 * Author: fede
 *
 * Created on October 18, 2020, 10:41 AM
 */


#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int errors(char *pfc , int chars);  //Errors necesita un puntero al primer caracter y la cantidad de los mismos 
                                    //En esta funcion se ve si hay caraceres incorrectos
                                    //Devuelve 1 si hay error y 0 si no hay

void mayus_to_min(char *pfc, int chars); //Mayus_to_min necesita un puntero al primer caracter y la cantidad de los mismos 
                                          //En esta funcion se pasan todos los caracteres del string a minuscula


int is_palynd(char *pfc , char *plc);   //Is_palynd necesita un puntero al primer y al ultimo caracter del string
                                        //Funcion que verifica si el string es palindromo o no
                                        //Devuelve 1 si es verdadero y un 0 si es falso

#endif /* FUNCTIONS_H */

