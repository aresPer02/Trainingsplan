#include <stdio.h>
#include <stdlib.h>
#include "trainingsplan.h"

Exercise* newExercise(void){
    Exercise* newExercise;

    newExercise = (Exercise*)malloc(sizeof(Exercise));
	if (newExercise == NULL){
		printf("Kein Speicher\n");
	}
	else {
		newExercise->pNext = NULL;
		newExercise->pPrev = NULL;
	}
	return newExercise;
}