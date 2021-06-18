#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/******************************************************************************
** PROGRAMME  calendar.c                                                     **
**                                                                           **
** Lieu      : ETML - section informatique                                   **
** Auteur    : David Dieperink                                               **
** Date      : 15.06.2021                                                    **
**                                                                           **
** Modifications                                                             **
**   Auteur  :                                                               **
**   Version :                                                               **
**   Date    :                                                               **
**   Raisons :                                                               **
**                                                                           **
**                                                                           **
******************************************************************************/

/******************************************************************************
** DESCRIPTION                                                               **
** Calendrier crée en C, affichable uniquement dans un terminal via une      **
** commande. Deux options possibles, soit afficher le mois actuel, soit      **
** choisir l'année et le mois et les afficher.                               **
** Une fonction d'agenda est également présente, vous pouvez agender des     **
** événements si vous le souhaitez, ou lire votre agenda que vous avez       **
** rempli avant.                                                             **
******************************************************************************/

///////////////////////////Déclaration des constantes/////////////////////////////
#define TRUE      1   	// Constante TRUE à 1
#define FALSE     0    	// Constane FALSE à 0
#define INTSIZE   12   	// Constante INTSIZE à 12 pour le nombre de mois
#define INTANNEE  1900 	// Constane INTANNEE à 1900 pour l'addition des années
#define INTMOIS   1    	// Constante INTMOIS à 1 pour l'addition des mois
#define INTTAILLE 60   	// Constane INTTAILLE à 60 pour la taille des tableaux

///////////////////////////Déclaration des variables//////////////////////////////
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);	// Variable pour ouvrir le fichier texte
int fclose(FILE* pointeurSurFichier);                            	// Variable pour fermer le fichier texte
int fgetc(FILE* pointeurSurFichier);                             	// Variable pour écrire dans le fichier texte
int remove(const char* fichierASupprimer);                       	// Variable pour supprimer le fichier texte
int tab_intJourMois[]={0,31,28,31,30,31,30,31,31,30,31,30,31};   	// Tableau possédant le nombre de jours par mois
char *tab_chrMois[]=                                             	// Tableau possédant les mois de l'année
{
	" ",
	"\n    Janvier",
	"\n    Février",
	"\n      Mars",
	"\n     Avril",
	"\n      Mai",
	"\n      Juin",
	"\n    Juillet",
	"\n      Août",
	"\n   Septembre",
	"\n    Octobre",
	"\n    Novembre",
	"\n    Decembre"
};

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à demander l'année à l'utilisateur **
**  et la récupérer pour le programme.                    **
** <Résume>                                               **
** <Paramètre> "void" <Paramètre>                         **
***********************************************************/
int Annee(void)
{
	// Création de la variable intAnnee et initialisation à 0
	int intAnnee = 0;
	// Demande à l'utilisateur
	printf("\nEntrez l'année souhaitée : ");
	scanf("%d", &intAnnee);

	// On retourne la valeur de intAnnee
	return intAnnee;
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à demander le mois à l'utilisateur **
**  et le récupérer pour le programme.                    **
** <Résumé>                                               **
** <Paramètre> "void" <Paramètre>                         **
***********************************************************/
int choixMois(void)
{
	// Création de la variable intChoixMois et initialisation à 0
	int intChoixMois = 0;

	// Affichage des mois de l'année
	printf("\n┌────────────────────────────────────────┐\n");
	printf("│       Voici les mois de l'année        │\n");
	printf("└────────────────────────────────────────┘\n");

	// Affichage des mois à choix
	printf(" 1. Janvier\n");
	printf(" 2. Février\n");
	printf(" 3. Mars\n");
	printf(" 4. Avril\n");
	printf(" 5. Mai\n");
	printf(" 6. Juin\n");
	printf(" 7. Juillet\n");
	printf(" 8. Août\n");
	printf(" 9. Septembre\n");
	printf("10. Octobre\n");
	printf("11. Novembre\n");
	printf("12. Décembre\n");

	// Demande à l'utilisateur de choisir
	printf("\nVotre choix : ");
	scanf("%d", &intChoixMois);

	// On retourne la valeur de intChoixMois
	return intChoixMois;
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode est utilisée pour avoir le numéro du    **
**  premier jour de l'année et afficher la date à la      **
**  bonne position dans le calendrier.                    **
** <Résumé>                                               **
** <Paramètre> "intAnnee" <Paramètre>                     **
***********************************************************/
int determineCodeJour(int intAnnee)
{
	// Création est initialisation à des variables intCodeJour, intD1, intD2, intD3
	int intCodeJour,intD1, intD2, intD3 = 0;

	// Incrémentation des variables avec les calculs
	intD1 = (intAnnee - 1)/ 4;
	intD2 = (intAnnee - 1)/ 100;
	intD3 = (intAnnee - 1)/ 400;

	// Exemple : 2021 + 505 - 20 + 5 %7 = 5
	intCodeJour = (intAnnee + intD1 - intD2 + intD3) %7;

	// On retourne la valeur de intCodeJour
	return intCodeJour;
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à determiner si c'est une année    **
**  bissextile.                                           **
** <Résumé>                                               **
** <Paramètre> "intAnnee" <Paramètre>                     **
***********************************************************/
int determineCodeAnnee(int intAnnee)
{
	// Si c'est une année bissextile Février à 29 jours
	if(intAnnee % 4 == FALSE && intAnnee % 100 != FALSE || intAnnee % 400 == FALSE)
	{
		tab_intJourMois[2] = 29;
		return TRUE;
	}
	// Si c'est pas une année bissextile Février à 28 jours
	else
	{
		tab_intJourMois[2] = 28;
		return FALSE;
	}
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à determiner si c'est une année    **
**  bissextile.                                           **
** <Résumé>                                               **
** <Paramètre> "intAnnee"      <Paramètre>                **
** <Paramètre> "intCodeJour"   <Paramètre>                **
** <Paramètre> "intChoixMois"  <Paramètre>                **
** <Paramètre> "intJourActuel" <Paramètre>                **
***********************************************************/
void calendar(int intAnnee, int intCodeJour, int intChoixMois, int intJourActuel)
{
	// Création et initialisation à 0 des variables intMois, intJour et intBool
	int intMois, intJour, intBool = 0;

	printf("\n────────────────────");
	// Boucle for pour afficher le calendrier
	for (intMois = 1; intMois <= INTSIZE; intMois++)
	{
		// Si le compteur de mois == le mois choisi par l'utilisateur alors :
		if(intMois == intChoixMois)
		{
			// On affiche le nom du mois et l'année
			printf("%s %d", tab_chrMois[intMois], intAnnee);
			// On afficher les jours dans la semaine
			printf("\nSu Mo Tu We Th Fr Sa\n");
		}
		
		// Si le compteur de mois == le mois choisi par l'utilisateur alors :
		if(intMois == intChoixMois)
		{
			// On corrige la position pour la première date du mois
			for (intJour = 1; intJour <= 1 + intCodeJour * 3; intJour++)
			{
				printf(" ");
			}
		}
		
		// Boucle for pour afficher toutes les dates pour un mois
		for (intJour = 1; intJour <= tab_intJourMois[intMois]; intJour++)
		{
			// Si le compteur de mois == le mois choisi par l'utilisateur alors :
			if(intMois == intChoixMois)
			{
				// Si le compteur de jour == le jour actuel du mois alors :
				if(intJour == intJourActuel)
				{
					// Si le booléan intBool vaut 0 alors :
					if(intBool == 0)
					{
						// On met le background color en blanc et le texte en noir pour le jour actuel du mois
						printf("\033[30m\033[47m");
						printf("%d", intJour);
						// On reset tout à default
						printf("\033[0m");
					}
					// Sinon :
					else
					{
						// On met le background color en blanc et le texte en noir pour le jour actuel du mois et on rajoute un décalage
						printf("\033[30m\033[47m");
						printf("%2d", intJour);
						// On reset tout à default
						printf("\033[0m");
					}
				}
				// Si le compteur de jour != le jour actuel du mois alors :
				else
				{
					// Si le booléan intBool vaut 0 alors :
					if(intBool == 0)
					{
						// On affiche les jours du mois avec un plus petit décalage
						printf("%d", intJour);
					}
					// Sinon :
					else
					{
						// On affiche les jours du mois avec un plus grand décalage
						printf("%2d", intJour);
					}
				}
			
				// Si le jour est avant samedi alors :
				if ((intJour + intCodeJour) % 7 > 0)
				{
					// Si le booléan intBool vaut 0 alors :
					if(intBool == 0)
					{
						// On écrit un plus grand décalage
						printf("  ");
					}
					// Sinon :
					else
					{
						// On écrit un plus petit décalage
						printf(" ");
					}
				}
				// Si le jour n'est pas avant samedi alors on commence à la prochaine ligne
				else
				{
					intBool = 1;
					printf("\n");
				}
			}	
		}
		// On met la position pour le prochain mois
		intCodeJour = (intCodeJour + tab_intJourMois[intMois]) % 7;
	}
	printf("\n────────────────────\n");
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à écrire dans une fichier texte    **
**  les informations données.                             **
** <Résumé>                                               **
** <Paramètre> "void" <Paramètre>                         **
***********************************************************/
int ecrireAgenda(void)
{
	// Création d'un tableau pour le contenu du fichier initialisé à 60 en taille
	char tab_chrVal[INTTAILLE];

	// Appel du fichier
	FILE * fichier = NULL;

	// Ouverture du fichier en mode écriture, si il n'existe pas on le crée
	fichier = fopen("agenda.txt", "w");

	// Si le fichier retourne NULL c'est que le fichier n'a pas été crée
	if(fichier == NULL)
	{
		// Si le fichier n'existe pas on met un message d'erreur et on ferme le programme
		printf("Pas d'acès pour crée le fichier.\n");
		exit(EXIT_FAILURE);
	}

	// Demande à l'utilisateur d'écrire son événement
	fgets(tab_chrVal, INTTAILLE, stdin);
	printf("\nEntrez l'événement -> format (00.0.0000 : événement ) : ");
	// On écrit dans le tableau de que l'utilisateur à écrit
	fgets(tab_chrVal, INTTAILLE, stdin);

	// On écrit le contenu dans le fichier
	fputs(tab_chrVal, fichier);

	// On ferme le fichier
	fclose(fichier);
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode sert à afficher l'agenda de             **
**  l'utilisateur.                                        **
** <Résumé>                                               **
** <Paramètre> "void" <Paramètre>                         **
***********************************************************/
int lireAgenda(void)
{
	// Création de la variable intCaractereActuel et initialisation à 0
	int intCaractereActuel = 0;

	// Appel du fichier
	FILE* fichier = NULL;
	
	// Affichage du titre
	printf("\n┌────────────────────────────────────────┐\n");
	printf("│       Voici votre agenda rempli :      │\n");
	printf("└────────────────────────────────────────┘\n");

	// Ouverture du fichier text
	fichier = fopen("agenda.txt", "r");
	if (fichier != NULL)
	{
		// Boucle de lecture des caractères un à un
		// On continue tant que fgetc n'a pas retourner EOF (fin de fichier)
		for(int intX = 0; ((intCaractereActuel = fgetc(fichier)) != EOF); intX++)
		{
			// On écrit en console le contenu du fichier
			printf("%c", intCaractereActuel);
		}
		// Fermeture du fichier texte
		fclose(fichier);
	}
}

/***********************************************************
** ----------------------- METHODE ---------------------- **
** <Résume>                                               **
**  Cette méthode est la méthode main, donc la méthode    **
**  principale pour le fonctionnement du programme.       **
** <Résumé>                                               **
** <Paramètre> "void" <Paramètre>                         **
***********************************************************/
int main(void)
{
	// Création est initialisation à 0 des variables intAnne, intCodeJour, intLeapAnnee, intChoixMois, intChoixUtil et intJourActuel
	int intAnnee, intCodeJour, intLeapAnnee, intChoixMois, intChoixUtil, intJourActuel = 0;

	// Affichage au lancement du programme, on propose les deux possibilités
	printf("\n┌────────────────────────────────────────┐\n");
	printf("│      Vous avez deux possibilités :     │\n");
	printf("└────────────────────────────────────────┘\n");
	printf("- Afficher le mois et la date actuelle (1)\n");
	printf("- Afficher une année et un mois choisi (2)\n");
	// On demande la réponse de l'utilisateur
	printf("\nVotre réponse : ");
	// On récupère sa réponse
	scanf("%d", &intChoixUtil);

	// Si sa réponse est 1 alors :
	if(intChoixUtil == 1)
	{
		// On va rechercher la date de l'ordinateur de l'utilisateur
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		
		// intAnnee prend la valeur de l'année actuelle
		// tm_year renvoie le nombre d'année depuis 1900 donc on ajoute 1900 pour arriver à l'année actuelle
		intAnnee = tm.tm_year + INTANNEE;
		// intChoixMois prend la valeur du mois actuel
		// tm_mon renvoie les mois de 0 à 11 donc on fait + 1 pour le mois actuel
		intChoixMois = tm.tm_mon + INTMOIS;
		// intJourActuel prend la valeur du jour actuel
		intJourActuel = tm.tm_mday;
		// intCodeJour prend la valeur retournée par la méthode determineCodeJour(intAnnee)
		intCodeJour = determineCodeJour(intAnnee);

		// Après avoir récupérer tout ça, on appelle les différentes méthodes pour afficher le calendrier
		determineCodeAnnee(intAnnee);
		calendar(intAnnee, intCodeJour, intChoixMois, intJourActuel);
		printf("\n");
	}
	// Sinon :
	else
	{
		// intAnnee prend la valeur retournée par la méthode Annee()
		intAnnee = Annee();
		// intChoixMois prend la valeur retournée par la méthode choixMois()
		intChoixMois = choixMois();
		// intCodeJour prend la valeur retournée par la méthode determineCodeJour(intAnnee)
		intCodeJour = determineCodeJour(intAnnee);

		// Après avoir récupérer tout ça, on appelle les différentes méthodes pour afficher le calendrier
		determineCodeAnnee(intAnnee);
		calendar(intAnnee, intCodeJour, intChoixMois, intJourActuel);
		printf("\n");
	}
	
	// Réinitialisatio de la variable intChoixUtil à 0 pour la première question
	intChoixUtil = 0;

	// Demande à l'utilisateur si il veut agender un événement
	printf("┌────────────────────────────────────────┐\n");
	printf("│   Voulez vous agender un événements ?  │\n");
	printf("└────────────────────────────────────────┘\n");
	printf("- Oui (1)\n");
	printf("- Non (2)\n");
	// Récupération de sa réponse
	printf("\nVotre réponse : ");
	scanf("%d", &intChoixUtil);
 
	// Si sa réponse est 1 donc oui alors :
	if(intChoixUtil == 1)
	{
		// On appelle la méthode pour écrire dans l'agenda
		ecrireAgenda();
	}

	// Réinitialisatio de la variable intChoixUtil à 0 pour la deuxième question
	intChoixUtil = 0;

	// Demande à l'utilisateur si il veut lire le contenu de son agenda
	printf("\n\n┌────────────────────────────────────────┐\n");
	printf("│     Voulez vous voir votre agenda ?    │\n");
	printf("└────────────────────────────────────────┘\n");
	printf("- Oui (1)\n");
	printf("- Non (2)\n");
	// Récupération de sa réponse
	printf("\nVotre réponse : ");
	scanf("%d", &intChoixUtil);

	// Si sa réponse est 1 donc oui alors :
	if(intChoixUtil == 1)
	{
		// On appelle la méthode pour lire dans l'agenda
		lireAgenda();
	}

	// Retour à la ligne et fin du programme
	printf("\n");
	return 0;
}
