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
void op_param(char op[][MAX],char val[][MAX],char par[][MAX], int argc, char** argv);

int main(int argc, char** argv) {
           
    char opciones[argc][MAX];
    char valores[argc][MAX];
    char parametros[argc][MAX];
 
    op_param(opciones,valores,parametros,argc,argv);

  
    
    return (EXIT_SUCCESS);
}

void op_param(char op[][MAX],char val[][MAX],char par[][MAX], int argc, char** argv){
    
    int i,k,j,y;
    
    char* pc;
    
    for(i=1 ; i<argc; i++){
        
        pc = argv[i];  //pc apunta al primer caracter de argv
        
        if(*pc == '-'){
            
            pc++;
            for(j=0;*(pc)!='\0';j++){
                               
                op[k][j] = *(pc);
                pc++;
                
            }   
            for(y=0;*(pc)!='\0';y++){
                
                val[k][y] = *(pc);
                pc++;
            }   
            k++;
        }
        
    }

}