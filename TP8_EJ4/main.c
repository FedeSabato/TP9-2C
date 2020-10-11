/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: fede
 *
 * Created on October 11, 2020, 3:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    
    int i,cont1=0,cont2=0;
    
    char *pc;
    
    for(i=1 ; i<argc; i++){
        
        pc = argv[i];  //pc apunta al primer caracter de argv
        
        if(*pc == '-'){
            
            cont1++;
            printf("Opcion %d : Clave: %s Valor: %s\n",cont1, argv[i],argv[i+1]);
            i++;  // Aumenta i una vez para no leer el valor de la clave denuevo.
            
        }
        else{
            
            cont2++;
            printf("Parametro %d: %s\n",cont2,argv[i]);
            
        }
        
    }
   
    return (EXIT_SUCCESS);
}
