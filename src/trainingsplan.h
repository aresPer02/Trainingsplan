#ifndef TRAININGSPLAN_H
#define TRAININGSPLAN_H

typedef struct exercise
{
    char name[15];
    unsigned int numberOfSets;

    struct exercise *pNext;
    struct exercise *pPrev;
}Exercise;

typedef struct plan
{
    char name[15];
    unsigned int numberOfExercises;

    Exercise exercises[];
}Plan;

Exercise* newExercise(char *name, int numberOfExercises);
void printExercise(Exercise *theExercise);

#endif
