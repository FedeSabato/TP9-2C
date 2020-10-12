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
#define MAX 20
/*
 * 
 */

void op_param(char op[][MAX],char val[][MAX],char par[][MAX], int argc, char** argv,int* pco,int* pp);

int main(int argc, char** argv) {
           
    char opciones[argc][MAX];       //Arreglos en donde se van a guardar las entradas
    char valores[argc][MAX];
    char parametros[argc][MAX];
    
    int k,cont=0;
    int cantop,cantpar;
    int *pcop =&cantop;
    int *ppar =&cantpar;
   
    op_param(opciones,valores,parametros,argc,argv,pcop,ppar);  //Llamado a funcion

    for(k=0;k<cantop;k++){
        
        cont++;
        printf("Opcion %d: %s, Valor: %s\n",cont,opciones[k],valores[k]);   //Imprimimos opciones y valores
        
    }
    cont = 0;
    for(k=0;k<cantpar;k++){
        
        cont++;
        printf("Parametro %d: %s\n",cont,parametros[k]);    //Imprimimos parametros
        
    }
    
    return (EXIT_SUCCESS);
}

void op_param(char op[][MAX],char val[][MAX],char par[][MAX], int argc, char** argv,int* pco,int* pp){
    
    int i,k,h,l,cantop=0,cantpar=0;
    
    char* pc;
    
    for(i=1 ; i<argc; i++){
        
        pc = argv[i];  //pc apunta al primer caracter de argv
        
        if(*pc == '-'){         //Si el primer caracter es '-'
            
            for(h=0;h<MAX;h++){
                
                op[cantop][h] = argv[i][h];     //Copia lo que hay en esa posicion a la matriz opciones
                
            }
            
            for(k=0;k<MAX;k++){
                
                val[cantop][k] = argv[i+1][k];  //Copia lo que hay en la siguiente posicion a la matriz valores
                
            }
            
            cantop++;   //Aumentamos la cantidad de opciones encontradas
            i++;        //Salteamos un i para no leer denuevo VALORES
            (*pco)++;   //Pasamos la cantidad de opciones encontradas al main mediante un puntero
        }
        else{
        
           for(l=0;l<MAX;l++){
                
                par[cantpar][l] = argv[i][l]; //Si no es un -, copia lo que hay en esa posicion a la matriz parametros
                
            }
           
           cantpar++;   //Aumentamos la cantidad de parametros encontrados
           (*pp)++;     //Pasamos la cantidad de parametros encontradas al main mediante un puntero
        }   
        
        
    }

}