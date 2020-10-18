/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Functions.c
 * Author: fede
 *
 * Created on October 18, 2020, 10:39 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void mayus_to_min(char *pfc, int chars){

    int i;
    
    for(i=0;i<chars;i++){
        
        if((*pfc>='A')&&(*pfc<='Z')){
        
            *pfc = *pfc +32;
        }
        pfc++;
    }
    
}

int is_palynd(char *pfc , char *plc){

    if(plc<=pfc){ //Si apuntan al mismo lugar entonces termina o el que apuntaba al final se hace menor que el inicial
        
        if(*pfc==*plc){ //Si contienen el mismo valor devolvemos el anterior y el siguiente
        
            return 1;
        
        }
        else{
        
            return 0;
        }
    }
    else{
    
        if(*pfc==*plc){ //Si contienen el mismo valor devolvemos el anterior y el siguiente
        
            return is_palynd(pfc+1,plc-1);
        
        }
        else{
        
            return 0;
        }
        
    }
    
    
}