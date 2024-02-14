#include <stdio.h>
#include <stdlib.h>
#include "trainingsplan.h"

int main(void){
    char name[15];
    int numberOfSets;
    Exercise *startExercise;

    printf("Gib den Namen der Übung ein: ");
    scanf("%s", name);
    printf("Gib die Anzahl der Sets ein: ");
    scanf("%d", &numberOfSets);

    startExercise = newExercise(name,numberOfSets);

    printExercise(startExercise);

}