#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char day1[] = "Su";
char day2[] = "Mo";
char day3[] = "Tu";
char day4[] = "We";
char day5[] = "Th";
char day6[] = "Fr";
char day7[] = "Sa";

// Fonction pour les mois de l'année
int mois()
{
  // Affichage + choix du mois
  int choix = 0;
  {
    printf("\n  Voici les mois disponible\n");
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

    printf("\nVeuillez seléctionner un mois : ");
    scanf("%d", &choix);

    return choix;
  }
}

// Fonction main
int main(int argc, char *argv[]) 
{
  // Switch case en fonction du mois seléctionné
  switch(mois())
  {
    ///////// Janvier /////////
    case 1:
      printf("\n    Janvier 2021  \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("                1  2\n");
      printf(" 3  4  5  6  7  8  9\n");
      printf("10 11 12 13 14 15 16\n");
      printf("17 18 19 20 21 22 23\n");
      printf("24 25 26 27 28 29 30\n");
      printf("31\n\n");
      break;

    ///////// Février /////////
    case 2:
      printf("\n    Février 2021  \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("    1  2  3  4  5  6\n");
      printf(" 7  8  9 10 11 12 13\n");
      printf("14 15 16 17 18 19 20\n");
      printf("21 22 23 24 25 26 27\n");
      printf("28\n\n");
      break;

    ////////// Mars //////////
    case 3:
      printf("\n     Mars 2021    \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("    1  2  3  4  5  6\n");
      printf(" 7  8  9 10 11 12 13\n");
      printf("14 15 16 17 18 19 20\n");
      printf("21 22 23 24 25 26 27\n");
      printf("28 29 30 31\n\n");
      break;

    ////////// Avril //////////
    case 4:
      printf("\n     Avril 2021   \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("             1  2  3\n");
      printf(" 4  5  6  7  8  9 10\n");
      printf("11 12 13 14 15 16 17\n");
      printf("18 19 20 21 22 23 24\n");
      printf("25 26 27 28 29 30\n\n");
      break;

    /////////// Mai ///////////
    case 5:
      printf("\n      Mai 2021    \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("                   1\n");
      printf(" 2  3  4  5  6  7  8\n");
      printf(" 9 10 11 12 13 14 15\n");
      printf("16 17 18 19 20 21 22\n");
      printf("23 24 25 26 27 28 29\n");
      printf("30 31\n\n");
      break;
    
    ////////// Juin ///////////
    case 6:
      printf("\n     Juin 2021    \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("       1  2  3  4  5\n");
      printf(" 6  7  8  9 10 11 12\n");
      printf("13 14 15 16 17 18 19\n");
      printf("20 21 22 23 24 25 26\n");
      printf("27 28 29 30\n\n");
      break;

    ///////// Juillet /////////
    case 7:
      printf("\n    Juillet 2021      \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("             1  2  3\n");
      printf(" 4  5  6  7  8  9 10\n");
      printf("11 12 13 14 15 16 17\n");
      printf("18 19 20 21 22 23 24\n");
      printf("25 26 27 28 29 30 31\n\n");
      break;

    ////////// Août //////////
    case 8:
      printf("\n     Août 2021    \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf(" 1  2  3  4  5  6  7\n");
      printf(" 8  9 10 11 12 13 14\n");
      printf("15 16 17 18 19 20 21\n");
      printf("22 23 24 25 26 27 28\n");
      printf("29 30 31\n\n");
      break;

    /////// Septembre ////////
    case 9:
      printf("\n   Septembre 2021      \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("          1  2  3  4\n");
      printf(" 5  6  7  8  9 10 11\n");
      printf("12 13 14 15 16 17 18\n");
      printf("19 20 21 22 23 24 25\n");
      printf("26 27 28 29 30\n\n");
      break;

    //////// Octobre /////////
    case 10:
      printf("\n    Octobre 2021  \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("                1  2\n");
      printf(" 3  4  5  6  7  8  9\n");
      printf("10 11 12 13 14 15 16\n");
      printf("17 18 19 20 21 22 23\n");
      printf("24 25 26 27 28 29 30\n");
      printf("31\n\n");
      break;

    /////// Novembre /////////
    case 11:
      printf("\n   Novembre 2021  \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("    1  2  3  4  5  6\n");
      printf(" 7  8  9 10 11 12 13\n");
      printf("14 15 16 17 18 19 20\n");
      printf("21 22 23 24 25 26 27\n");
      printf("28 29 30\n\n");
      break;

    /////// Décembre /////////
    case 12:
      printf("\n   Décembre 2021  \n");
      printf("%s %s %s %s %s %s %s\n", day1, day2, day3, day4, day5, day6, day7);
      printf("          1  2  3  4\n");
      printf(" 5  6  7  8  9 10 11\n");
      printf("12 13 14 15 16 17 18\n");
      printf("19 20 21 22 23 24 25\n");
      printf("26 27 28 29 30 31\n\n");
      break;
    
    //////// Défaut //////////
    default:
      printf("\nVeuillez sélectionner un nombre entre 1 et 12 !\n");
      break;
  }

  return 0;
}