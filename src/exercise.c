#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "trainingsplan.h"

Exercise* newExercise(char *name, int numberOfExercises){
    Exercise* newExercise;

    newExercise = (Exercise*)malloc(sizeof(Exercise));
	if (newExercise == NULL){
		printf("Kein Speicher\n");
	}
	else {
        strcpy(newExercise->name,name);
        newExercise->numberOfSets = numberOfExercises;
		newExercise->pNext = NULL;
		newExercise->pPrev = NULL;
	}
	return newExercise;
}

void printExercise(Exercise *theExercise){
    printf("--------------------------------------------------\n");
    printf("Name der Übung: %s\n", theExercise->name);
    printf("Anzahl an Sets: %d\n", theExercise->numberOfSets);
}

