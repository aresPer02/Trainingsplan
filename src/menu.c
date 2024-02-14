#include <stdlib.h>
#include <stdio.h>
#include "menu.h"

void Uebungen(void){

}

Menu Hauptmenü = {
    1,"Hauptmenü",{
        {"Übungen",&Uebungen}
    }
};

void printMenu(Menu* pMenu){
	int i,inputNumber;
	printf("%s\n", pMenu->title);

	for (i = 0; i <= pMenu->maxMenuNumber-1; i++){
		printf("[%d] %s\n",i ,pMenu->menuList[i].menuFunctionName);
	}

	scanf("%d", &inputNumber);

	if (inputNumber < pMenu->maxMenuNumber){
		pMenu->menuList[inputNumber].pFunction();
	}
}