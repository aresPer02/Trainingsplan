#include <stdlib.h>
#include <stdio.h>
#include "menu.h"
#include "trainingsplan.h"

void printExerciseMenu(void);
void printAllExercises(void);
void createExercise(void);
void plans(void);
void exit0(void);

Exercise* firstExercise;

Menu exercisesMenu = {
	3,"Exercise Menu",{
		{"Print Exercises", &printAllExercises},
		{"Create Exercise", &createExercise},
		{"Exit", &exit0}
	}
};

Menu mainMenu = {
    3,"Main Menu",{
        {"Exercises",&printExerciseMenu},
		{"Training Plans",&plans},
		{"Exit", &exit0}
    }
};

Menu *pMainMenu = &mainMenu;

void printExerciseMenu(void){
	printMenu(&exercisesMenu);
}

void printAllExercises(void){
	if(firstExercise == NULL){
		printf("There is no Exercise, you must first create one!");
		printExerciseMenu();
	} else {
		Exercise *theExercise = firstExercise;

		printExercise(theExercise);

		while (theExercise->pNext != NULL)
		{
			printExercise(theExercise->pNext);
			theExercise = theExercise->pNext;
		}

		printExerciseMenu();
		
	}
}

void createExercise(void){

	char name[20]= "";
	int numberOfSets= 0;

	printf("What is the Name of your Exercise?: ");
	scanf("%s",name);
	printf("How many sets?: ");
	scanf("%d", &numberOfSets);

	Exercise *theExercise = firstExercise;

	if (firstExercise == NULL){
		printf("NULL");
		firstExercise = newExercise(name,numberOfSets);
		printExerciseMenu();
	} else {
		while (theExercise->pNext != NULL)
		{
			theExercise = theExercise->pNext;
		}
		theExercise->pNext = newExercise(name,numberOfSets);
		printExerciseMenu();
	}

}

void plans(void){

}


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

void exit0(void){
	exit(0);
}