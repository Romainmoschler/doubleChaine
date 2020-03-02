#include <stdio.h>
#include <stdlib.h>
#include "double.h"

Doublec *initialiser()
{
    Doublec *doublec = malloc(sizeof(*doublec));
    doublec->premier = NULL;
    doublec->dernier = NULL;

    return doublec;
}

void empilerDebut(Doublec *doublec, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if (doublec == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = doublec->premier;
    if(doublec->premier != NULL )
    doublec->premier->precedent = nouveau;
    doublec->premier = nouveau;
}

void empilerFin(Doublec *doublec,int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));
    if(doublec ==NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;
    nouveau->precedent = doublec->dernier;
    if(doublec->dernier != NULL)
    doublec->dernier->suivant = nouveau;
    doublec->dernier = nouveau;
}


void afficherDoublec(Doublec *doublec)
{
    if (doublec == NULL)
    {
        exit(EXIT_FAILURE);
    }
    Element *actuel = doublec->premier;

    while (actuel != NULL)
    {
        printf("%d\n", actuel->nombre);
        actuel = actuel->suivant;
    }

    printf("\n");
}

