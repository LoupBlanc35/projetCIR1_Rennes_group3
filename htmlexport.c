#include <stdio.h>
#include "htmlexport.h"

int sprintf(char* buffer, const char* format){
    FILE* file = fopen("file", "w");
    char buffer[20];
    int nb_characters = 0; //count the number of printed characters
    int index = nb_characters; //index indicates the position where it prints in the buffer
    nb_characters += sprintf(buffer + index, "hello");//update current index
    index = nb_characters += sprintf(buffer + index, " world");

    printf("%d caracteres ecrits : %s \n", nb_characters, buffer);
}

int titreHTMLPerson(char* buffer, Person* p){
    Person jeanDupont;
    sprintf(jean.Dupont.firstname, "Jean");
    sprintf(jean.Dupont.lastname, "Dupont");
    //AFFICHAGE d'un element HTML pour 3
    char buffer[255];
    int m = titreHTMLPerson(buffer, &jeanDupont);
    printf("%s %d characters written \n\n", buffer, m);
}