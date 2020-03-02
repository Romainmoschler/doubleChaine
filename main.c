#include <stdio.h>
#include <stdlib.h>
#include "double.h"

int main()
{
    Doublec *test = initialiser();

    empilerDebut(test,15);
    empilerDebut(test,458);
    empilerFin(test,14);
    empilerFin(test,7);

    afficherDoublec(test);
}



