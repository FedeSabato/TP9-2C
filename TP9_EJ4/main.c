/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: fede
 *
 * Created on October 18, 2020, 10:10 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

#define MAX 50

int main(void) {
    
    int i = 0, cant=0;
    char c;
    
    char string[MAX]= {0};
    
    printf("Ingrese una palabra o frase a analizar. El largo maximo son 50 letras.\n");
    
    while((c=getchar())!='\n'){      //Cargo el caracter de entrada a la variable c
    			
        if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z'))){ //Restrinjo valores ASCII para que solo lea como entrada letras

            string[i]=c;    //Guardamos solo letras en el string
            cant++;         //Incrementamos contador de letras dentro del string
             i++;
                    
        }                
       
    }
    char *pfc;
    char *plc;
    
    pfc = &string[0];       //Apuntamos a la primera letra del string
    plc = &string[cant-1];  //Apuntamos a la ultima letra del string. restamos 1 porque empieza en 0
 
    mayus_to_min(string,cant); //Pasamos todo a minusculas
     
    if((is_palynd(pfc,plc))==1){
    
         printf("EL string ingresado es palindromo");
         
    }
    else{
    
        printf("El string ingresado no es palindromo");
    
    }
    
    return (EXIT_SUCCESS);
}