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

int main(int argc, char** argv) {
    
    int i = 0, cant=0;
    char c;
    
    char string[MAX]= {0};
    
    while((c=getchar())!='\n'){      //Cargo el caracter de entrada a la variable c
    			
        if(((c>='a')&&(c<='z'))||((c>='A')&&(c<='Z'))){ //Restrinjo valores ASCII para que solo lea como entrada letras

            string[i]=c;
            cant++;
             i++;
                    
        }                
       
    }
    char *pfc;
    char *plc;
    
    pfc = &string[0];
    plc = &string[cant-1]; 
 
    mayus_to_min(string,cant); //Pasamos todo a minusculas
     
    printf("%s\n",string);
    
    if((is_palynd(pfc,plc))==1){
    
         printf("EL string ingresado es palindromo");
         
    }
    else{
    
        printf("El string ingresado no es palindromo");
    
    }
    
    return (EXIT_SUCCESS);
}