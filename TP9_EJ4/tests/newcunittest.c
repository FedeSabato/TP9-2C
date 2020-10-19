#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

void test (char string[ ], int cant_letras, int r); //recibe la palabra, cantidad de letras y la respuesta esperada

int main(void){

	printf("corriendo pruebas de control del programa...\n");

	test("neuquen",7,1);

	test("nosubasabuson",13,1);

	test("sometamosomatemos",17,1);

	test("isaacnoroncaasi",15,1);

	test("lavanesabasenaval",17,1);

	test("seralodoodolares",16,1);

	test("anna",4,1);

	test("civic",5,1);

	test("kayak",5,1);

	test("level",5,1);

	test("madam",5,1);

	test("mom",3,1);

	test("noon",4,1);

	test("racecar",7,1);

	test("radar",5,1);

	test("rotator",7,1);

	test("rotor",5,1);

	test("sagas",5,1);

	test("solos",5,1);

	test("wow",3,1);

	test("hola",4,0);

	test("asd",3,0);

	test("sdhf",4,0);

	test("wegjr",5,0);

	test("gbuytf",6,0);

	test("htfasdf",7,0);

	test("nbtqwert",8,0);

	test("qwertyuio",9,0);

	test("asdfghjklz",10,0);


	return(0);

}

void test (char string[ ], int cant_letras, int rta){		

    char *pfc, *plc;

    pfc = &string[0];
    plc = &string[cant_letras-1]; 

    if(is_palynd(pfc,plc)==rta){    //Si coincide:

    	printf("correcto\n");

    }
    else{   //Si no coincide:

    	printf("error en: %s",string);
    }

}