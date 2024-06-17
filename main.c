#include <stdio.h>
#include "advanced.h"
int main() {
    Population population;
    population= read_csv("../40.csv");
    link_popu(&population);
    for (int i=0;i<population.taille;i++)
        printf("%d %s\n",i,population.pers[i].p_mere->prenom);
    return 0;
}
