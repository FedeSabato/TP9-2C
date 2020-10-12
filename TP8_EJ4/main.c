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

    printf("opcion 1 = %s",parametros[1]);
    
    return (EXIT_SUCCESS);
}

void op_param(char op[][MAX],char val[][MAX],char par[][MAX], int argc, char** argv){
    
    int i,k,h,l,j=0,y=0,z=0,u=0;
    
    char* pc;
    
    for(i=1 ; i<argc; i++){
        
        pc = argv[i];  //pc apunta al primer caracter de argv
        
        if(*pc == '-'){
            
            for(h=0;h<MAX;h++){
                
                op[y][h] = argv[i][h];
                
            }
            
            for(k=0;k<MAX;k++){
                
                val[y][k] = argv[i+1][k];
                
            }
            
            j++;
            y++;
            i++;
                        
        }
        else{
        
           for(l=0;l<MAX;l++){
                
                par[z][l] = argv[i][l];
                
            }
           
           z++;
           u++;
          
        }
        
        
    }

}