#include <stdio.h>
#include <time.h>
#define TRUE    1
#define FALSE   0

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
**                                                                           **
**                                                                           **
**                                                                           **
******************************************************************************/

///////////////////////////Déclaration des constantes/////////////////////////////
const int INT_SIZE = 12; // Constante pour la valeur du nombre de mois

///////////////////////////Déclaration des variables//////////////////////////////
int tab_intJourMois[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 	// Tableau possédant le nombre de jours par mois
char *tab_chrMois[]=                                            // Tableau possédant les mois de l'année
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
	// Création de la variable intChoix et initialisation à 0
	int intChoix = 0;

	// Affichage des mois de l'année
	printf("\n  Voici les mois de l'année\n");
	printf("-----------------------------\n");

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

	// Demande à l'utilisateur
	printf("\nVeuillez seléctionner un mois : ");
	scanf("%d", &intChoix);

	// On retourne la valeur de intChoix
	return intChoix;
}

/*************************************************************
** ------------------------ METHODE ----------------------- **
** <Résume>                                                 **
**  Cette méthode est utilisée pour avoir le numéro du      **
**  premier jour de l'année et afficher la date à la        **
**  bonne position dans le calendrier.                      **
** <Résumé>                                                 **
** <Paramètre> "intAnnee" <Paramètre>                       **
*************************************************************/
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

/*********************************************************
** ---------------------- METHODE --------------------- **
** <Résume>                                             **
**  Cette méthode sert à determiner si c'est une année  **
**  bissextile.                                         **
** <Résumé>                                             **
** <Paramètre> "intAnnee"    <Paramètre>                **
** <Paramètre> "intCodeJour" <Paramètre>                **
** <Paramètre> "intChoix"    <Paramètre>                **
** <Paramètre> "intJour2"    <Paramètre>                **
*********************************************************/
void calendar(int intAnnee, int intCodeJour, int intChoix, int intJour2)
{
	// Création et initialisation à 0 des variables intMois, intJour et intBool
	int intMois, intJour, intBool = 0;

	// Boucle for pour afficher le calendrier
	for (intMois = 1; intMois <= INT_SIZE; intMois++)
	{
		// Si le compteur de mois == le mois choisi par l'utilisateur alors :
		if(intMois == intChoix)
		{
			// On affiche le nom du mois et l'année
			printf("%s %d", tab_chrMois[intMois], intAnnee);
			// On afficher les jours dans la semaine
			printf("\nSu Mo Tu We Th Fr Sa\n");
		}
		
		// Si le compteur de mois == le mois choisi par l'utilisateur alors :
		if(intMois == intChoix)
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
			if(intMois == intChoix)
			{
				// Si le compteur de jour == le jour actuel du mois alors :
				if(intJour == intJour2)
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
						// On met le background color en blanc et le texte en noir pour le jour actuel du mois
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
	// Création est initialisation à 0 des variables intAnne, intCodeJour, intLeapAnnee, intChoix, intChoix2 et intJour2
	int intAnnee, intCodeJour, intLeapAnnee, intChoix, intChoix2, intJour2 = 0;

	// Affichage au lancement du programme, on propose les deux possibilités
	printf("\n       Vous avez deux possibilités :\n");
	printf("------------------------------------------\n");
	printf("- Afficher le mois et la date actuelle (1)\n");
	printf("- Afficher une année et un mois choisi (2)\n");
	// On demande la réponse de l'utilisateur
	printf("\nVotre réponse : ");
	// On récupère sa réponse
	scanf("%d", &intChoix2);

	// Si sa réponse est 1 alors :
	if(intChoix2 == 1)
	{
		// On va rechercher la date de l'ordinateur de l'utilisateur
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
		
		// intAnnee prend la valeur de l'année actuelle
		// tm_year renvoie le nombre d'année depuis 1900 donc on ajoute 1900 pour arriver à l'année actuelle
		intAnnee = tm.tm_year + 1900;
		// intChoix prend la valeur du mois actuel
		// tm_mon renvoie les mois de 0 à 11 donc on fait + 1 pour le mois actuel
		intChoix = tm.tm_mon + 1;
		// intJour2 prend la valeur du jour actuel
		intJour2 = tm.tm_mday;
		// intCodeJour prend la valeur retournée par la méthode determineCodeJour(intAnnee)
		intCodeJour = determineCodeJour(intAnnee);

		// Après avoir récupérer tout ça, on appelle les différentes méthodes pour afficher le calendrier
		determineCodeAnnee(intAnnee);
		calendar(intAnnee, intCodeJour, intChoix, intJour2);
		printf("\n");
	}
	// Sinon :
	else
	{
		// intAnnee prend la valeur retournée par la méthode Annee()
		intAnnee = Annee();
		// intChoix prend la valeur retournée par la méthode choixMois()
		intChoix = choixMois();
		// intCodeJour prend la valeur retournée par la méthode determineCodeJour(intAnnee)
		intCodeJour = determineCodeJour(intAnnee);

		// Après avoir récupérer tout ça, on appelle les différentes méthodes pour afficher le calendrier
		determineCodeAnnee(intAnnee);
		calendar(intAnnee, intCodeJour, intChoix, intJour2);
		printf("\n");
	}
}
