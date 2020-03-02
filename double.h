#ifndef DOUBLE_H_INCLUDED
#define DOUBLE_H_INCLUDED


typedef struct Element
{
    int nombre;
    struct Element *suivant;
    struct Element *precedent;
}Element;

typedef struct Doublec
{
    Element *premier;
    Element *dernier;
}Doublec;

//PROTOTYPE

Doublec *initialiser();
void empilerDebut(Doublec *doublec, int nvNombre);
void empilerFin(Doublec *doublec, int nvNombre);
void afficherDoublec(Doublec *doublec);


#endif // DOUBLE_H_INCLUDED
