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
/*
    FILE *output_file;
    if ((output_file = fopen("fichier.html", "w" )) == NULL)
    {
       fprintf(stderr, "Cannot open %s\n", "output_file" );
    }
    else
    {
       fprintf(output_file, "<html>\n\tHello World !</html>\n" );
    }
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct
        {
         char nom[25];
         char prenom[15];
        }Employe;

void genereHtml(Employe employe,FILE* pfichier)
{
     printf("Entrez un nom\n");
     gets(employe.nom);
     printf("Entrez un prenom\n");
     gets(employe.prenom);
     fprintf(pfichier,"<td><img src='%s_%s.jpg' alt='%s %s' /></td>",employe.nom,employe.prenom,employe.nom,employe.prenom);
}
int main()
{
    int test;
    Employe employe;
    char ouinon;
    char fin[]="</tr>\n</table>\n</body>\n</html>\n";
    char debut[]="<!DOCTYPE html PUBLIC '-//W3C//DTD XHTML 1.0 Strict//EN' 'http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd'>\n<html xmlns='http://www.w3.org/1999/xhtml' xml:lang='fr' lang='fr'>\n<head>\n<title>\nTrombinoscope\n</title>\n<meta http-equiv='Content-Type'  content='text/html;charset=utf-8' />\n<link rel='stylesheet' media='screen' type='text/css' title='trombi' href='trombi.css' />\n</head>\n<body>\n<h1>Trombinoscope<br/></h1>\n<table>\n";

    FILE* pfichier=fopen("testhtml.htm","r");
    if(pfichier==NULL)
    {
        fclose(pfichier);
        FILE* pfichier=fopen("testhtml.htm","a+");
        fprintf(pfichier,"%s",debut);
    }
    else
    {
        fclose(pfichier);
        FILE* pfichier=fopen("testhtml.htm","a+");
    }
    do
    {
        genereHtml(employe,pfichier);
    	printf("Une autre personne? (o/n)\n");
    	fflush(stdin);
    	scanf("%c",&ouinon);
    	fflush(stdin);
    }while((ouinon=='o')||(ouinon=='O'));

    fprintf(pfichier,"%s",fin);
	system("pause");
	fclose(pfichier);
	return 0;
}

fprintf(pfichier,"<td><img src='%s_%s.jpg' alt='%s %s' /></td>",employe.nom,employe.prenom,employe.nom,employe.prenom);

*/