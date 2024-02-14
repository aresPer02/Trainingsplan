#ifndef TRAININGSPLAN_H
#define TRAININGSPLAN_H

typedef struct exercise
{
    char name[15];
    unsigned int numberOfSets;

    Exercise *next;
    Exercise *prev;
}Exercise;

typedef struct plan
{
    char name[15];
    unsigned int numberOfExercises;

    Exercise exercises[];
};


#endif
