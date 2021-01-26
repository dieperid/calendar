
# Commandes du programme :
Compiler le programme : gcc calendar.c -o nomDuFichier  
Executer le programme : ./nomDuFichier



# Bibliothèques :
```c
stdio.h
stdlib.h
math.h
time.h
string.h // (bibliothèque dédiée aux calculs sur des chaînes)
```
	
	
# 1. Variables :
**RETENEZ BIEN : une variable déclaréee dans une fonction n'est accessible qu'à l'intérieur de cette fonction. On appelle ça une variable locale !**
	
##	Variable globale :
Une variable globale est une variable qui est accessible dans tout les fichiers du projet.  
> Exemple :
```c
int resultat()
```

Une variable globale accessible seulement dans un fichier unique (le fichier ou est écrite la fonction). Il faut rajouter le mot "static" devant.  
**ATTENTION :** Si le mot "static" est rajouté à la déclaration d'une variable, elle n'aura pas le même effet qu'une variable sans le "static" devant.  
Je m'explique, la variable static n'est pas supprimée à la fin de la fonction, c'est à dire que à chaque fois qu'on appellerala fonction, la variable aura conservé sa valeur initiale.  
Donc si on exécute le programme une deuxième fois, il va additionner la valeur de la première exécution et de la deuxième.  
> Exemple :
```c
static int resultat()
```	
**Une variable qui prend les valeurs 0 et 1 est un booléan.**

##	Principal pour afficher du contenu :
```c
printf ("");
scanf(""); -> // Possibilité à l'utilisateur d'écrire
```
		
##	Premier type :
```c
int -> // Type entier (Nombre entier) -> Pour afficher (%d, )
float / double -> // Type decimal (Nombre decimal) -> Pour afficher (%f, )
char -> // Type character -> Pour afficher (%c, )
```
		
##	Deuxième type : Peuvent stocker que des nombres positifs
```c
unsigned int
unsigned char
```


# 2. Arthmetique :
- Addition = +  
- Soustraction = -  
- Multiplication = *  
- Division = /  
- Modulo = % (reste d'une divison) -> 9/2 = 2 * 4 + 1 -> donc dans ce cas la, le % = 1



# 3. Caractère spéciaux :
**Faire un backslash = Alt Gr + <**  
- \n = Retour à la ligne  
- \t = tabulation
	
	
	
# 4. Conditions (if, else)
##	Premier type :
- (==) -> est égal à  
- (>)  -> est supérieur à  
- (<)  -> est inférieur à  
- (=)  ->  est supérieur ou égal à  
- (<=) -> est inférieur ou égal  
- (!=) -> est différent de
		
##	Deuxième type :
- && -> ET  
- || -> OU  
- !  -> NON
		
##	Troisième type :
Les ternaires -> des conditions condensées, c'est comme un if, else mais en condensés.  
> Exemple if, else :
```c
if (majeur)
{
  age = 18;
}
else
{
  age = 17;
}
```
Cette condition en ternaire :  
Dans le cas suivant, le point d'interrogation permet de dire "est-ce que tu es majeur ?". Si oui alors on met la valeur 18 dans age, sinon les deux points ":" signifie else ici, on met la valeur 17.
```c
age = (majeur) ? 18 : 17;
```
		
		
#	5. Les boucles :
##	Il existe 3 types de boucles différentes les voici :
	
##	5.1 while :
La boucle répète la conditions tant que la condition demandée n'est pas obtenue, si la condition de départ est fausse la boucle ne fonctionnera pas.  
> Exemple d'une boucle while :  
> Dans ce cas de figure, la boucle se répète tant que le nombre 47 n'a pas été écrit
```c
while (nombreEntre != 47) {
  printf("Tapez le nombre 47 ! ");
  scanf("%d", &nombreEntre);
}
```		
##	5.2 do... while :
La boucle do... while est différente de la boucle while car, la boucle do... while s'exécutera au moins une fois même si la condition de départ est fausse.  
> Exemple d'une boucle do... while :  
> Dans ce cas de figure, la boucle se répète tant que la condition demandée n'est pas obtenue.
```c
do {
  printf("Salut les zeros !\n");
  compteur++;
} while (compteur < 10);
```  				
##	5.3 for :
La boucle for est une boucle while écrite d'une autre manière.  
> Exemple d'une boucle for :  
> Dans ce cas de figure, la boucle for répète 10 fois la phrase demandée.
```c
for (compteur = 0 ; compteur < 10 ; compteur++) {
  printf("Salut les Zeros!\n");
}
```


#	6. Les fonctions :
##	Il existe 2 sortes de fonctions :
	
1. Les fonctions qui renvoient une valeur : on leur met un des types que l'on connaît (int, char, float, ...).

2. Les fonctions qui ne renvoient pas de valeur : on leut met un type spécial "void" (qui signifie "vide").



#	7. Les prototypes :
    Les prototypes servent à annoncer à l'ordinateur que la fonctions existe, c'est une indication. Une fois que l'ordinateur  
    à l'indication que la fonction existe, peut importe ou vous mettez votre fonction dans le code, l'ordinateur comprendra  
    et pourra l'exécuter. De plus comme vous pourrez le constater, la fonction main ne possède pas de prototype. C'est la  
    seule fonction qui n'en nécessite pas parce que l'ordinateur la connait.
	
##	7.1 Exemple sans prototype :
Tout en haut de mon code je défini ma fonction sans prototype pour que mon programme puisse la lire et l'exécuter.
```c
float aireRectangle(float largeur, float hauteur)
{
  return largeur * hauteur;
}

int main(int argc, char *argv[])
{
  printf("Rectangle de largeur 5 et de hauteur 10. Aire = %f\n", aireRectangle(5, 10));
  printf("Rectangle de largeur 2.5 et de hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
  printf("Rectangle de largeur 4.2 et de hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

  return 0;
}
```

##	7.2 Exemple avec le prototype :
Comme vous pouvez le constater, en haut j'indique ma fonction à l'ordinateur avec un prototype, ce prototype est celui ci ";".
Et en bas du code vous pouvez constater que je défini ma fonction.
```c
float aireRectangle(float largeur, float hauteur);

int main(int argc, char *argv[])
{
  printf("Rectangle de largeur 5 et de hauteur 10. Aire = %f\n", aireRectangle(5, 10));
  printf("Rectangle de largeur 2.5 et de hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
  printf("Rectangle de largeur 4.2 et de hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

  return 0;
}

float aireRectangle(float largeur, float hauteur)
{
  return largeur * hauteur;
}
```


#	8. Les fichiers
> Il existe deux types de fichiers, les fichiers ".c" et les fichiers ".h". 
	
1. Dans les programmes les fichiers "**.h**" sont appelés fichiers header, ces fichiers contiennent les prototypes des fonctions.
		
2. Les fichiers "**.c**" sont les fichiers source, ils contiennent les fonctions elles-mêmes.
	
3. Pour inclure un fichier "**.h**" dans le programme on écrit tout en haut (la ou on spécifie les bibliothèque) :
```c
#include "nomFichiers.h".
```	
**Donc on met rarement les prototypes de fonctions dans les fichiers ".c", sauf si le programme est tout petit.**  
Comme vous pouvez le constater, le fichiers ".h" se marque entre guillemets et pas avec des chevrons (<>).
La commande #include demande d'insérer le contenu du fichiers dans notre fichiers ".c".
		
		
		  
# 9. La compilation séparée
##	La compilation est séparée en 3 parties :
	
##	1. Le préprocesseur :
  	Le préprocesseur est un programme qui démarre avant la compilation. Son rôle est d'exécuter les instructions spéciales 
    qu'on lui a données dans les directives de préprocesseur, ce sont ces fameuses lignes qui commencent par un **#**.
		   
##	2. La compilation :
  	La compilation est l'étape qui consiste à transformer vos fichiers source en code binaire compréhensible par  
    l'ordinateur. Le compilateur compile chaque fichier "**.c**" un à un.
		   
##	3. Linker (Edition des liens) :
  	Le linker (ou "éditeur de liens" en français) est un programme dont le rôle est d'assembler les fichiers binaires  
    "**.o**". Il les assembles en un seul gros fichier -> l'exécutable final !
	
**Cet ordre est l'ordre à respecter obligatoirement ! Sinon le programme ne fonctionnera pas.**



#	10. Les pointeurs
Tout d'abord pour introduire le sujet lisez ceci :  
Plus haut dans ce documents nous avons appris à afficher une valeur d'une variable grace au "%d" et les autres.  
Mais chaque variable est stockée dans la RAM de notre ordinateur, donc la RAM affecte une adresse au mot.

> Pour afficher l'age par exemple on écrira :
```c
printf("La variable age vaut : %d", age);
```

> Mais pour afficher l'adresse que l'ordinateur affecte au mot il faut écrire ça :
```c
printf("L'adresse de la variable age est : %d", &age);
```

Maintenant que vous avez lu tout cela, je vais vous expliquez ce qu'est un pointeur.
Un pointeur c'est une variable faite pour contenir des adresses, c'est ce qu'on appelle un pointeur.
	
Pour crée une variable de type pointeur, on doit rajouter le symbole "*" devant le nom de la variable.  
> Exemple :
```c
int *monPointeur;
```
Il est très important d'initialiser dès le départ ses variables en leur donnant la valeur 0 par exemple.
Pour initialiser un pointeur on utlise généralement pas le nombre 0 mais le mot-clé **NULL** :  
> Exemple :
```c
int *monPointeur = NULL;
```	
En mettant NULL on a un pointeur initialisé, donc il ne contient aucune adresse sur la RAM. Mais ce code va réserver une case en mémoire comme si vous aviez crée une variable normale.
	
	
	
#	11. Les chaines de caractères
    Les chaines de caractères sont en fait des tableaux qui contiennent des caractères et non des  chiffres.
    On utilise la variable "char" pour définir que le type d'information sera des caractères.
	

##	11.1 Voici un premier exemple :
On défini le nombre de caractères en haut, et ensuite on défini chaque case de la chaine avec un caractère.
```c
char chaine[6]; // Tableau de 6 char pour stocker S-a-l-u-t

// Initialisation de la chaîne (on écrit les caractères un à un en mémoire)
chaine[0] = 'S';
chaine[1] = 'a';
chaine[2] = 'l';
chaine[3] = 'u';
chaine[4] = 't';
chaine[5] = '\0';
				  
// Affichage de la chaîne grâce au %s du printf
printf("%s", chaine); 
```

##	11.2 Voici un deuxième exemple :
Dans celui ci vous remarquez qu'on défini pas de taille à notre chaine, on défini le mot qu'elle va contenir et ensuite la chaîne va s'adapter.
```c
// La taille du tableau chaine est automatiquement calculée
char chaine[] = "Salut";

// Affichage de la chaîne grâce au %s du printf
printf("%s", chaine);
```

##	11.3 Voici un troisième exemple :
Dans cet exemple on défini une taille de 100 à notre chaine car on ne sait ce que l'utilisateur va écrire.
```c
// On défini un tableau de 100 caractère maximum car on ne sait pas le prénom de la personne
char prenom[100];

// On demande son prenom, il l'écrit et pour finir on l'affiche 
printf("Comment t'appelles-tu petit ? ");
scanf("%s", prenom);
printf("Salut %s, je suis heureux de te recontrer !\n", prenom);
```


# 12. Les fonctions des chaînes de caractères
Il existe différent type de fonctions dans les chaines de caractères.  
> Ce sont celle si :  
-	strlen  
-	strcpy  
-	strcat  
-	strcmp  
-	strchr / strrchr  
-	strpbrk  
-	strstr  
-	sprintf
	
Elles ont toutes leur fonctions particulière.
	
##	12.1 Voici un exemple pour la fonction strlen :
On défini le prototype de la fonction en haut du programme, cette fonction a un paramètre de type "const".  
Il signifie que la fonction strlen "s'interdit" de modifier la chaine. La fonction "strlen" permet de calculer la longueur d'une chaîne.
```c
size_t strlen(const char* chaine);

int main(int argc, char *argv[])
{
  char chaine[] = "Salut";
  int longueurChaine = 0;

  // On récupère la longueur de la chaîne dans longueurChaine
  longueurChaine = strlen(chaine);

  // On affiche la longueur de la chaîne
  printf("La chaine %s fait %d caractères de long\n", chaine, longueurChaine);
}
```

##	12.2 Voici un exemple pour la fonction strcpy :
On défini le prototype de la fonction en haut du programme.  
On utilise la fonction strcpy, elle permet de copier une chaine dans une autre.
```c
char* strcpy(char* copieDeLaChaine, const char* chaineACopier);

/* Cette fonction prend deux paramètres  :
1. copieDeLaChaine : c'est un pointeur vers un char* (tableau de char). C'est dans ce tableau que la chaîne sera copiée 
				   
2. chaineACopier : c'est un pointeur vers un autre tableau de char. Cette chaine sera copiée dans copieDeLaChaine. 
*/

int main(int argc, char *argv[])
{
  /* 
  On crée une chaîne "chaine" qui contient un peu de texte et une copie (vide) de taille 100 pour être sur d'avoir la place pour copier. 
  */
  char chaine[] = "texte", copie[100] = {0};

  strcpy(copie, chaine); // On copie "chaine" dans "copie"

  // Si tout s'est bien passé, la copie devrait être identique à chaine
  printf("chaine vaut : %s\n", chaine);
  printf("copie vaut : %s\n", copie);

  return 0;
}
```

##	12.3 Voici un exemple pour la fonction strcat :
On défini le prototype de la fonction en haut du programme.  
On utilise la fonction strcat car, elle permet d'ajouter une chaine de caratère à la suite d'une autre. On appelle cela la **concaténation**.
```c
char* strcat(char* chaine1, const char* chaine2);

int main(int argc, char *argv[])
{
/*
On crée 2 chaînes. chaine1  doit être assez grande pour accueillir le contenu de chaine2 en plus, sinon rique de plantage.
*/
  char chaine1[100] = "Salut ", chaine2[] = "Mateo21";

  strcat(chaine1, chaine2); // On concatène chaine2 dans chaine1

  // Si tout s'est bien passé, chaine1 vaut "Salut Mateo21"
  printf("chaine1 vaut : %s\n", chaine1);
  // chaine2 n'a pas changé :
  printf("chaine2 vaut toujours %s\n", chaine2);
}
```

##	12.4 Voici un exemple pour la fonction strcmp :
On défini le prototype de la fonction en haut du programme.  
On utilise cette fonction pour comparer deux chaînes de caractères.  
Cette fonction renvoie un 0 si les chaînes sont identiques, ou alors elle renvoie une autre valeur (positive ou négative) si les chaînes sont différentes.
```c   	
int strcmp(const char* chaine1, const char* chaine2);

int main(int argc, char *argv[])
{
  char chaine1[] = "Texte de test", chaine2[] = "Texte de test";

  if (strcmp(chaine1, chaine2) == 0) // Si chaines identiques
  {
    printf("Les chaines sont identiques\n");
  }
  else
  {
    printf("Les chaines sont différentes\n");
  }
  return 0;
}
```

##	12.5 Voici un exemple pour la fonction strchr :
On défini le prototype de la fonction en haut du programme.  
On utilise cette fonction pour rechercher un caractère dans une chaîne. Cette fonction pointe sur le premier caractère qu'elle a trouvé.  
Pour cet exemple le premier "d" est le sixième caractère.  
```c
char* strchr(const char* chaine, int caractereARechercher);

int main(int argc, char *argv[])
{
  char chaine[] ="Texte de test", *suiteChaine = NULL;

  suiteChaine = strchr(chaine, 'd');

  if (suiteChaine != NULL) //Si on a trouvé quelque chose
  {
    printf("Voici la fin de la chaine a partir du premier d : %s\n", suiteChaine);
  }
}
```
Il existe une variante de cette fonction c'est strrchr, elle pointe sur le dernier caractère qu'elle a trouvé.

##	12.6 Voici un exemple pour la fonction strpbrk :
On défini le prototype de la fonction en haut du programme.  
On utilise cette fonction pour rechercher un des caractères dans la liste que on lui donne sous forme de chaine.  
Contrairement à la fonction strchr, celle ci permet de rechercher plusieurs caractères à la fois.
```c
char* strpbrk(const char* chaine, const char* lettreARechercher);

int main(int argc, char *argv[])
{
  char *suiteChaine;

  //On rechercher la première occurrence de x, d ou s dans "Texte de test"
  suiteChaine = strpbrk("Texte de test","xds");

  if (suiteChaine != NULL)
  {
    printf("Voici la fin de la chaine a partir du premier des caracteres trouves : %s\n", suiteChaine);
  }
}
```
Comme vous pouvez le constater on met **"xds"** pour rechercher les caractères dans une chaine. Les guillemets désignent une chaine.
Alors que si on met ça **'d'** c'est pour rechercher un caractère précis.Les apostrophes désignent un caractère.
			   
##	12.7 Voici un exemple pour la fonction strstr :
On défini le prototype de la fonction en haut du programme.  
On utilise cette fonction pour rechercher la première occurrence d'une chaîne dans une autre chaîne.  
Le prototype est similaire à strpbrk **mais attention à ne pas confondre : strpbrk recherche UN des caractères, tandis que strstr recherche toute la chaîne.**
```c
char* strstr(const char* chaine, const char* chaineARechercher);

int main(int argc, char *argv[])
{
  char *suiteChaine;

  //On cherche la première occurrence de "test" dans "Texte de test" :
  suiteChaine =strstr("Texte de test", "test");
  if (suiteChaine != NULL)
  {
    printf("Premiere occurrence de test dans Texte de test : %s\n", suiteChaine);
  }
}
```

##	12.8 Voici un exemple pour la fonction sprintf :
On défini le prototype de la fonction en haut du programme.  
Cette fonction ressemble énormément au printf. Donc la fonction printf écrit sur l'écran et sprintf écrit dans une chaîne, d'où son nom d'ailleurs.
```c
int main(int argc, char *argv[])
{
  char chaine[100];
  int age = 15;

  // On écrit "Tu as 15 ans" dans chaine
  sprintf(chaine, "Tu as %d ans !\n", age);

  // On affiche chaine pour vérifier qu'elle contient bien cela
  printf("%s", chaine);
}
```  
Comme vous pouvez le constater, elle s'utilise de la même manière que le printf, mis à part le fait que vous devez lui donner en premier paramètre un pointeur vers la chaîne qui doit recevoir le texte.
			    


#	13. Le préprocesseur
    Le préprocesseur est le programme qui sexécute juste avant la compilation.
	
##	Les directives de préprocesseur :
##	13.1 Les include
Jusqu'à maintenant on a vu que le #include, il sert a inclure des fichers.h dans notre programme. Tel que les bibliothèque.
		
##	13.2 Les define
Cette directive permet de définir une constante de préprocesseur, cela permet d'associer une valeur à un mot. 
Comme vous pourrez le voir, on écrit les constantes en majuscule, la différence avec les autres constantes c'est que ici les constantes
de préprocesseur ne sont pas stocké quelque part dans la RAM.
> Voici un exemple :
```c
#define NOMBRE_VIES_INITIALES 3
```
> Vous devez écrire dans l'ordre :
- le #define
- le mot auquel la valeur va être associée
- la valeur du mot
				
> Voici le code avant le passage du préprocesseur :
```c
#define NOMBRE_VIES_INITIALES 3

int main(int argc, char *argv[])
{
  int vies = NOMBRE_VIES_INITIALES;
}
```
> Voici le code après le passage du préprocesseur :
```c
#define NOMBRE_VIES_INITIALES 3

int main(int argc, char *argv[])
{
  int vies = 3;
}
```
##	13.3 Les constantes prédéfinies
En plus des constantes que l'on peut définir, il existe quelques constantes prédéfinies par le préprocesseur.
Chacune des constantes commence et se termine par deu symboles underscore "_" !
>Voici un exemple :
```c
int main(int argc, char *argv[])
{
  printf("Erreur a la ligne %d du fichier %s\n", __LINE__, __FILE__);
  printf("Ce fichier a ete compile le %s a %s\n", __DATE__, __TIME__);
  return 0;
}
```
###		Il existe 4 constantes prédéfinie :
```c	
1. __LINE__
2. __FILE__
3. __DATE__
4. __TIME__
```					
##	13.4 Les macros
Les #define permettent de remplacer un mot par une valeur comme dis plus haut.
> Exemple :
```c
#define NOMBRE 9
```				
Le mot NOMBRE sera remplacé par 9.
Lorsque on utilise un #define pour rechercher-remplacer un mot par un code source, on dit qu'on crée une macro.
			
##	13.5 Les macros sans paramètres
Vous pouvez voir que après le mot-clé ici c'est COUCOU(), il y'a des parenthèses vide, donc aucun paramètres.  
> Voici un exemple très simple :
```c				
#define COUCOU() printf("Coucou\n");

int main(int argc, char *argv[])
{
  COUCOU()

  return 0;
}
```			
> Voici un deuxième exemple :
```c
#define RACONTER_SA_VIE() \
printf("Coucou je m'appelle Brice\n"); \
printf("J'habite a Nice\n"); \
printf("J'aime la glisse\n");

int main(int argc, char *argv[])
{
  RACONTER_SA_VIE()

  return 0;
}
```
Dans le main, j'appelle ma macro pour qu'elle dise ce que j'ai défini en haut.
			
##	13.6 Les macros avec paramètres
> Voici un exemple :
```c			
#define MAJEUR(age) if (age >= 18) printf("Vous etes majeur\n");

int main(int argc, char *argv[])
{
  MAJEUR(22)

  return 0;
}
```			
On met les paramètres à notre macro en haut, si le nombre dans MAJEUR est supérieur ou égal à 18, la personne est majeur.
			
##	13.7 Les conditions
Il est possible de réaliser des conditions en langage préprocesseur.
> Exemple :

-	#if condition
-	#elif condition2
-	#endif
				
Voila l'intérêt de faire un #define d'une constante sans préciser de valeur.
```c
#define CONSTANTE
```			
Dans ces constantes il est possible d'utiliser **#ifdef** pour dire "Si la constante est définie".  
Et **#ifndef**, lui, sert à dire "Si la constante n'est pas définie".
> Exemple pour le #ifdef :
```c			
#define WINDOWS

#ifdef WINDOWS
/* Code source pour Windows */
#endif

#ifdef LINUX
/* Code source pour Linux */
#endif

#ifdef MAC
/* Code source pour Mac */
#endif
```			
C'est comme ça que font certains programmes multi-plates-formes pour s'adapter à l'OS par exemple. Alors bien entendu il faut recompiler
le programme pour chaque OS. Si vous êtes sous Windows, vous écrivez **#define WINDOWS**, la même chose pour Linux.
			
#ifndef est très utilisé dans les **.h** pour éviter les "inclusions infinies".  
Une inclusion infinie c'est très simple.  
J'ai un fichier **"A.h"** et un fichier **"B.h"**. Le fichier **"A.h"** contient un #include du fichier **"B.h"**. Le fichier B est donc inclu dans le fichier A.  
Mais, c'est la que ça commence à coincer. Admettons que le fichier **"B.h"** contienne à son tour un include du fichier **"A.h"** !  
Ca arrive quelques fois en programmation. Donc le premier fichier à besoin du second pour fonctionner, et le second a besoin du premier.
			
Voici l'astuce pour éviter ce gros problème, il faut inclure ça dans **TOUS** les fichiers ".h" de votre programme.
> Exemple pour #ifndef :
```c
#ifndef DEF_NOMDUFICHIER 
// Si la constante n'a pas été définie le fichier n'a jamais été inclus
				  
#define DEF_NOMDUFICHIER
// On définit la constante pour que la prochaine fois le fichier ne soit plus inclus

/* Contenu de votre fichier .h (autres #include, prototypes, #define, etc...) */
#include <stdio.h>
#include <stdlib.h>

#endif
```				
Bien évidemment lorsque vous marquerez cela, il faudra mettre le nom de votre fichier .h à la place de NOMDUFICHIER.
			
			
		
#	14. Les structures de variables
    Une structure est un assemblage de variables qui peuvent avoir différents types.
    Contrairement aux tableaux qui vous obligent à utiliser le même type dans tout le tableau, vous pouvez créer une 
    structure comportant des variables de types long, char int et double à la fois.
    Les structures sont généralement définies dans les fichiers .h au même titre donc que les prototypes et les define.
> Voici un exemple de structure :
```c	
struct NomDeVotreStructure
{
  int variable1;
  int variable2;
  int autreVariable;
  float nombreDecimal;
};
```		
Une structure commence par le mot "struct", le ";" est obligatoire à la fin de votre structure. Entre ces accolades on place les variables dont est composée votre structure.
		
##	14.1 Tableaux dans une structure
Les structures peuvent contenir des tableaux. On va pouvoir y mettre des tableaux de char (chaine de caractères).
> Voici un exemple :
```c
struct Personne
{
  char nom[100];
  char prenom[100];
  char adresse[100];

  int age;
  int garcon; // Booléen : 1 = garçon, 0 = fille
};
```				
###	Comment utiliser une structure ?  
Il est obligatoire de mettre "struct" devant pour que l'ordinateur puisse différencier un type de base (int, char, ...) d'un type personnalisé.
> Voici un exemple :
```c					
#include "structureVariables.h"
// Inclusion du .h qui contient les prototypes et structures.

int main(int argc, char *argv[])
{
  struct Coordonnees point;
  // Création d'une variable "point" de type Coordonnees
			  
  return 0;
}			
```			
Les programmeurs ont inventé une instruction spéciale qui n'oblige pas à mettre "struct" dans le programme.c  
Cette instruction spéciale c'est : typedef
> Voici un exemple :
```c
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
  int x; // Abscisses
  int y; // Ordonnées
};
```			
Juste avant la définition de la structure on ajoute une ligne commençant par typedef.  
> Cette ligne doit être découpée en troix morceaux :
			
- typedef : indique que nous allons créer un alias de structure
- struct Coordonnees : c'est le nom de la structure dont vous allez créer un alias (c'est à dire un "équivalent");
- Coordonnees : c'est le nom de l'équivalent
				
En gros cette ligne dit "Ecrire le mot Coordonnees est désormait équivalent à écrire struct Coordonnees". En faisant cela, il n'y aura plus besoin de mettre le mot struct à chaque définition de variable de type Coordonnees.  
> Grace a tout cela on peut donc écrire ceci dans notre programme :
```c
#include "structureVariables.h"
// Inclusion du .h qui contient les prototypes et structures.

int main(int argc, char *argv[])
{
  Coordonnees point;
// L'ordinateur comprend qu'il s'agit de "struct Coordonnees" grâce au typedef
				  
  return 0;
}
```				
##	14.2 Les pointeurs de structures
Un pointeur de structure se crée de la même manière qu'un poiteur de int, de doube ou de n'importe quelle autre type de base.
> Voici un exemple :
```c
Coordonnees *point = NULL;
void initialiserCoordonnees(Coordonnees* point);

int main(int argc, char *argv[])
{
  Coordonnees monPoint;

  initialiserCoordonnees(&monPoint);

  return 0;
}

void initialiserCoordonnees(Coordonnees* point)
{
  (*point).x = 0;
  (*point).y = 0;
}
```			
Tout en haut je met le pointeur et le prototype de ma fonction.  
Pour la fonction tout en bas, vous remarquez que il est écrit (*point).x c'est pour définir le point x. Les programmeurs ont trouvée cette manère
d'écrire trop longue donc ils ont inventé le raccourci suivant :
```c				
point->x = 0;
```		
**ATTENTION :** Retenez bien ça, ne confondez pas la flèche avec le "point". La flèche est réservée aux pointeurs et le "point" est réservé aux variables.
> Un exemple pour se souvenir :
```c			
int main(int argc, char *argv[])
{
  Coordonnees monPoint;
  Coordonnees *pointeur = &monPoint;

  monPoint.x = 10; // On travaille sur une variable, on utilise le "point"
  pointeur->x = 10; // On travaille sur un pointeur, on utilise la flèche

  return 0;
}
```				
##	14.3 Les énumérations
Les énumérations constituent une façon un peu différente de créer ses propres types de variables. Ue énumération ne contient pas de "sous-variable" comme c'était le cas pour les structures. C'est une liste de "valeurs possibles" pour une variable.
> Voici un exemple d'énumération :
```c				
typedef enum Volume Volume;
enum Volume
{
  FAIBLE, MOYEN, FORT
};
```				
On utilise typedef comme avant mais pour créer l'énumération on utilise "enum" et pas "struct". Cette énumération s'appelle Volume, c'est un type de
variable personnalisé qui peut prendre une des trois valeur qu'on a indiqués : soit FAIBLE, soit MOYEN, soit FORT.  
Ensuite on créer une variabe de type Volume, par exemple musique, qui stockera le volume actuel de la musique.  
> On peut par exemple initialiser la musique au volume MOYEN :
```c			
Volume musique = MOYEN;
```				
Les valeurs possible de l'énumération sont écrite en majuscule, cela rappelle les constantes et les define. C'est assez similaire mais ce n'est pas pour autant la même chose. Le compilateur associe automatiquementun nombre à chacune des valeurs possibles de l'énumration.
			
Dans le cas au dessus, Volumme, FAIBLE vaut 0, MOYEN vaut 1 et FORT vaut 2.  
L'association est automatique et commence à 0.  
La différence avec le #defne est ici, contrairement a lui, ici c'est le compilateur qui associe MOYEN à 1 et non le préprocesseur.
			
>	Grâce à tout cela, vous n'avez plus qu'a écrire :
```c			
if (musique == MOYEN)
{
  // Jouer la musique au volume moyen
}
```				
Peut importe la valeur de MOYEN, vous laissez le compilateur se charger de gérer les nombres.
			
On peut également y associer une valeur précise.  
Il est possible d'associer une valeur précise à chaque élément de l'énumération.  
L'intérêt est le suivant, admettons que sur votre ordinateur le volume soit géré entre 0 et 100 (0 = pas de son, 100 = 100% du son).  
>	Il est alors pratique d'associer une valeur précise à chaque élément :
```c			
typedef enum Volume Volume;
enum Volume
{
  FAIBLE = 10, MOYEN = 50, FORT = 100
};
```				
Dans ce cas la, le niveau de volume FAIBLE correspondra à 10% de volume, MOYEN à 50%, etc. On pourrait aussi ajouter une valeur MUET, dans ce cas on y associera la valeur 0.
			


#	15. Les fichiers
    En C on peut lire et écrire dans des fichers, ces fichiers seront écrits sur le disque dur de votre ordinateur.  
    L'avantage est donc qu'il restent là, même si vous arrêtez le programme ou l'ordinateur.
	
##	15.1 Ouvrir et fermer un fichier
Pour ouvrir un fichier on appelle la fonction "fopen".  
Pour fermer un fichier on appelle la fonction "fclose".
			
##	15.2 fopen
>	Voici le prototype de la fonction fopen :
```c			
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
```				
>	Cette fonction attend deux paramètres :
- Le nom du fichier à ouvrir;
- Le mode d'ouverture du fichier, c'est à dire une indication qui mentionne ce que vous voulez faire : seulement écrire dans le fichier, seulement le lire, ou les deux à la fois.
				  
Revenons a notre fonction fopen. Il est extrêmement important d récupérer ce pointeur pour pouvoir ensuite lire et écrire dans le fichier. On va donc créer un pointeur de FILE au début de notre fonction.
```c	
int main(int argc, char *argv[])
{
  FILE* fichier = NULL;

  return 0;
}
```				
Le pointeur est initialiser à NULL dès le début, c'est une règle fondamentale d'initialiser ses pointeurs à NULL dès le début.
			
Pour se servir du second paramètres de notre fonction (modeOuverture), il y'a un code à renvoyé qui indiquera à l'ordinateur si vous ouvrez le fichier en mode de lecture seule, d'écriture seule, ou les deux à la fois.  
>	Voici les modes d'ouverture possibles :

- "r" : lecture seule
- "w" : écriture seule
- "a" : mode d'ajout -> Ecrire dans le fichier depuis la fin.
- "r+" : lecture et écriture
- "w+" : lecture et écriture avec suppression du contenu au préalable
- "a+" : ajout en lecture / écriture à la fin
				
>	Le code suivant ouvre le fichier test.txt en mode "r+" (lecture / écriture) :
```c			
int main(int argc, char *argv[])
{
  FILE* fichier = NULL;

  fichier = fopen("test.txt", "r+");

  return 0;
}
```			
Le pointeur fichier devient alors un pointeur sur test.txt. Le fichier test.txt doit être situé dans le même dossier que l'exécutable (.exe).
			
On va donc tester d'ouvrir le fichier, le pointeur fichier devrait contenir l'adresse de la structure de type FILE qui sert de descripteur de fichier. Celui-ci a été chargé en mémoire pour vous par la fonction fopen(). 

>	A partir de là, deux possibilités :

- soit l'ouverture a réussi, et vous pouvez continuer (c'est-à-dire commencer à lire et écrire dansle fichier);
- soit l'ouverture a échoué parce que le fichier n'existait pas ou était utilisé par un autre programme. Dans ce cas, vous devez arrêter de travailler sur le fichier. 
				  
Après l'ouverture on vérifie impérativement si l'ouverture a réussi ou non. Pour faire ça, c'est très simple : si le pointeur vaut NULL, l'ouverture a échoué. Si il vaut autre chose que NULL, l'ouverture a réussi.

>	On va donc suivre systématiquement le schéma suivant :
```c				
int main(int argc, char *argv[])
{
  FILE* fichier = NULL;

  fichier = fopen("test.txt", "r+");
// fprintf -> écrire dans le fichier ce que j'ai écris dans la fonction (We are in 2012)
  fprintf(fichier, "%s %s %s %d", "We", "are", "in", 2012);

  if (fichier != NULL)
  {
    // On peut lire et écrire dans le fichier
  }
  else
  {
    // On affiche un message d'erreur si on veut
    printf("Impossible d'ouvrir le fichier test.txt\n");
  }
  return 0;
}
```				
Faites toujours cela lorsque vous ouvrez un fichier. Si vous ne le faite pas et que le fichier n'existe pas, vous risquer un plantage du programme par la suite.
			
##	15.3 fclose
>	Voici le prototype de la fonction fclose :
```c				
int fclose(FILE* pointeurSurFichier);
```	
Cette fonction prend un paramètre : votre pointeur sur le fichier. Elle renvoie un int qui indique si elle a réussi à fermer le fichier.
>	Cet int vaut :

- 0 : si la fermeture à marché
- EOF : si la fermeture a échoué. EOF est un define situé dans stdio.h qui correspond à un nombre spécial, utilisé pour dire soit qu'il y'a une erreur, soit que nous sommes arrivés à la fin du fichier. Dans le cas présent cela signifique qu'il y'a une erreur.
			
>	Au final le schéma est le suivant :
```c				
int main(int argc, char *argv[])
{
  FILE* fichier = NULL;

  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    // On lit et on écrit dans le fichier
    // ...

    fclose(fichier); // On ferme le fichier qui a été ouvert
  }
  return 0;
}
```				
##	15.4 Ecrire dans le fichier
Il existe plusieurs fonctions capable d'écrire dans un fichier.  
> Voici les trois fonctions principale :
			
- fputc : écrit un caractère dans le fichier (UN SEUL caractère à la fois);
- fputs : écrit une chaîne dans le fichier;
- fprintf : écrit une chaîne "formatée" dans le fichier, fonctionnement quasi-identique à printf.
				
##	15.4.1 fputc
Cette fonction écrit un caractère à la fois dans le fichier.  
>	Son prototype est :
```c				
int fputc(int caractere, FILE* pointeurSurFichier);
```					
Le code suivant écrit la lettre 'A' dans test.txt (si le fichier existe, il est remplacé; si il n'existe pas, il est créé).  
Dans ce code il y'a tout : ouverture, test de l'ouverture, écriture et fermeture.
```c			
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
int fputc(int caractere, FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    fputc('A', fichier); // Ecriture du caractère A
    fclose(fichier);
  }
  return 0;
}
```					
Ouvrez le fichier test.txt et vous verrez que le fichier contient la lettre 'A'.
				
##	15.4.2 fputs
Cette fonction est très similaire à fputc, à la différence près qu'elle écrit tout une chaîne, ce qui est en général plus pratique que d'écrire
caractère par caractère. Cela dit, fputc reste utile lorsque vous devez écrire caractère par caractère, ce qui arrive fréquemment.
>	Prototype de la fonction :
```c				
int fputs(const char* chaine, FILE* pointeurSurFichier);
```			
> Cette fonction prend deux paramètres en compte :
- chaine : la chaîne à écrire. Ici le type est const char* : en ajoutant le mot const dans le prototype, la fonction indique que pour elle la chaîne sera considérée comme une constante.
- pointeurSurFichier : comme pour fputc, il s'agit de votre pointeur de type FILE* sur le fichier que vous avez ouvert.
					
>	Voila un exemple de la fonction :
```c				
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
int fputs(const char* chaine, FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    fputs("Salut les gars\nComment allez-vous ?", fichier);
    fclose(fichier);
  }
  return 0;
}
```				
En ouvrant le fichier vous verrez qu'il est écrit se qu'on a demandé au programme d'écrire.
				
##	15.4.3 fprintf
Voici un autre exemple de la fonction printf. Celle-ci peut être utilisée pour écrire dans un fichier. Elle s'utilise de la même manière que printf.  
Exepté le fait que vous devez indiquer un pointeur de FILE en premier.
				
>	Ce code demande l'age de l'utilisateur et l'écrit dans le fichier.
```c				
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int age = 0;

  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    // On demande l'age
    printf("Quel age avez-vous ? ");
    scanf("%d", &age);

    // On l'écrit dans le fichier
    fprintf(fichier, "Le Monsieur qui utilise le programme, il a %d ans", age);

    fclose(fichier);
  }
  return 0;
}
```				
Vous pouvez ainsi facilement réutiliser ce que vous savez de printf pour écrire dans un fichier !
			
##	15.5 Lire dans un fichier
Nous pouvons utiliser quasiment les mêmes fonctions que pour l'écriture, le nom change juste un petit peu :
			
- fgetc : lit un caractère;
- fgets : lit une chaîne;
- fscanf : lit une chaîne formatée.
				
##	15.5.1 fgetc
Cette fonction permet de lire un caractère dans un fichier.
>	Voici le prototype :
```c					
int fgetc(FILE* pointeurSurFichier);
```					
La fonction permet de lire un seul caractère, mais avec ce code elle va lire tout ce qui se trouve dans le fichier.  
Grace a une boucle qui dit que tant que fgetc ne renvoie pas EOF "End Of File" on continue à lire le fichier.
		
>	Voici le code :
```c				
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
int fgetc(FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int caractereActuel = 0;

  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    // Boucle de lecture des caractères un à un
    do
    {
      caractereActuel = fgetc(fichier); // On lit le caractère
      printf("%c", caractereActuel); // On l'affiche
    } while (caractereActuel != EOF); // On contine tant que fgetc n'a pas retourner EOF (fin de fichier)

    fclose(fichier);
  }
  return 0;
}
```				
Une fois le programme executé il affichera le contenu du fichier.
				
##	15.5.2 fgets
Cette fontion lit une chaîne dans le fichier. Cela évite de devoir lire les caractères un par un. Mais attention, la fonction lit au maximum une ligne (elle s'arrête au premier \n).
>	Voici le prototype :
```c					
char* fgets(char* chaine, int nbreDeCaractereALire, FILE* pointeurSurFichier);
```					
Cette fonction demande un paramètre un peu particulier : le nombre de caractère à lire. Cela demande à la fonction fgets de s'arrêter de lire la ligne si elle contient plus de X caractères.  
Pour cela on crée une chaîne suffisamment grande pour stocker le contenu de la ligne qu'on va lire.
Voila l'intérêt d'utiliser un define pour définir la taille de tableau.				
>	Voici un code pour pouvoir lire une ligne avec fgets :

```c
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
char* fgets(char* chaine, int nbreDeCaractereALire, FILE* pointeurSurFichier);
#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
					  
  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    // On lit maximum TAILLE_MAX caractère du fichier, on stock le tout dans "chaine"
    fgets(chaine, TAILLE_MAX, fichier); 
    printf("%s", chaine); // On affiche la chaîne

    fclose(fichier);
  }
  return 0;
}
```				
Une fois le programme executé il affichera le contenu du fichier. La différence avec fgetc c'est qu'ici on ne fait pas de boucle pour afficher le contenu du fichier. On affiche toute la chaîne d'un coup.
				
Avec le code au dessus, on pouvait lire une ligne maximum. Mais on peut lire tout le fichier on utilisant une boucle !
```c				
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);
char* fgets(char* chaine, int nbreDeCaractereALire, FILE* pointeurSurFichier);
#define TAILLE_MAX 1000

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  char chaine[TAILLE_MAX] = ""; // Chaîne vide de taille TAILLE_MAX
					  
  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    // On lit le fichier tant qu'on ne reçoit pas d'erreur (NULL)
    while (fgets(chaine, TAILLE_MAX, fichier) != NULL)
    {
      printf("%s", chaine); // On affiche la chaine qu'on vient de lire
    }
    fclose(fichier);
  }
  return 0;
}
```					
Ce code source lit et affiche tout le contenu de mon fichier, ligne par ligne. La ligne du while est très intéressante.
```c				
while (fgets(chaine, TAILLE_MAX, fichier) != NULL)
```					
La ligne du while fait deux choses : elle lit une ligne dans le fichier et vérifie si fgets ne renvoie pas NULL. Elle peut donc se traduire comme cela : "Lire une ligne du fichier tant que nous ne sommes pas arrivés à la fin du fichier".
				
##	15.5.3 fscanf
C'est le même principe que la fonction scanf, là encore. Cette fonction lit dans un fichier qui doit avoir été écrit d'une
manière précise. Supposons que votre fichier contienne trois nombr séparés par un espace, qui sont par exemple les trois plus hauts scores  
obtenus à votre jeu : 15 20 30.  
Je veux récupérer chacun de ces nombres dans une variable de type int. la fonction fscanf va me permettre de faire ça rapidement.
				
>	Voici le code :
```c				
FILE* fopen(const char* nomDuFichier, const char* modeOuverture);
int fclose(FILE* pointeurSurFichier);

int main(int argc, char *argv[])
{
  FILE* fichier = NULL;
  int score[3] = {0}; // Tableau des 3 meilleurs scores

  fichier = fopen("test.txt", "r+");

  if (fichier != NULL)
  {
    fscanf(fichier, "%d %d %d", &score[0], &score[1], &score[2]);
    printf("Les meilleurs scores sont : %d %d %d", score[0], score[1], score[2]);

    fclose(fichier);
  }
  return 0;
}
```					
Comme vous le voyez, la fonction fscanf attend trois nombres séparés par un espace ("%d %d %d"). Elle les stocke ici dans notre tableau de trois blocs.
				
##	15.6 Se déplacer dans un fichier
Il existe un curseur virtuel dans les fichiers qui indique votre position. On peut imaginer que c'est exactement comme le curseur de l'éditeur de texte
(tel Bloc-Notes). Il indique votre position dans le fichier et donc où vous allez écrire.  
En résumé, le système de curseur vous permet d'aller lire et écrire à une position précise dans le fichier.

> Il existe trois fonctions à connaître :
- ftell : indique à quelle position vous êtes actuellement dans le fichier;
- fseek : positionne le curseur à un endroit précis;
- rewind : remet le curseur au début du fichier (c'est équivalent à demander à la fonction fseek de positionner le curseur au début).

## 15.6.1 ftell
Comme dit plus haut, cette fonction permer d'indiquer à quelle position vous êtes dans le fichier.  
Cette fonction est très simple à utiliser. 

> Elle renvoie la position actuelle du curseur sous la forme d'un long :
```c
long ftell(FILE* pointeurSurFichier);
```

Le nombre renvoyé indique donc la position du curseur dans le fichier.

##  15.6.2 fseek
Comme dit plus haut, fseek permet de positionner le curseur à un endroit précis.

> Le prototype de fseek est le suivant :
```c
int fseek(FILE* pointeurSurFichier, long deplacement, int origine);
```

La fonction fseek permet de déplacer le curseur d'un certain nombre de caractère (indiqué par **deplacement**) à partir de la position
indiquée par **origine**.
- Le nombre **deplacement** peut être un nombre positif (pour se déplacer en avant), nul (= 0) ou négatif (pour se déplacer en arrière).
- Quant au nombre **origine**, vous pouvez mettre comme valeur l'une des trois constantes (généralement des **define**) listées ci-dessous :
  - SEEK_SET : indique le début du fichier;
  - SEEK_CUR : indique la position actuelle du curseur;
  - SEEK_END : indique la fin du fichier.

Voici quelques exemples pour bien comprendre comment on jongle avec **deplacement** et **origine**.

> Le code suivant place le curseur deux caractères *après* le début :
```c
fseek(fichier, 2, SEEK_SET);
```

> Le code suivant place le curseur quatre caractères *avant* la position actuelle :
```c
fseek(fichier, -4, SEEK_CUR);
```
Remarquez que **deplacement** est négatif car on se déplace en arrière.

> Le code suivant place le curseur à la fin du fichier :
```c
fseek(fichier, 0, SEEK_END);
```
La fonction fseek peut se comporter bizarrement sur des fichiers ouverts en mode texte. En général, on l'utilise plutôt pour se déplacer dans des
fichiers ouvert en mode binaire. Quand on lit et écrit dans un fichier en mode texte, on le fait généralement caracatère par caractère. La seule
chose qu'on se permet en mode texte avec fseek c'est de revenir au début ou de se déplacer à la fin.

## 15.6.3 rewind
Comme dit plus haut, cette fonction permet de remettre le curseur au début du fichier.  
Cette fonction est équivalente à utiliser fseek pour nous renvoyer à la position 0 dans le fichier.

> Le prototype de rewind est le suivant :
```c
void rewind(FILE* pointeurSurFichier);
```

L'utilisation est aussi simple que le prototype.

## 15.7 Renommer et supprimer un fichier
> On termine ce chapitre en douceur par l'étude de deux fonctions très simple :
- rename : renomme un fichier;
- remove : supprime un fichier.

La particularité de ces fonctions est qu'elles nécessitent pas de pointeur de fichier pour fonctionner. Il suffira simplement d'indiquer le nom
du fichier à renommer ou à supprimer.

## 15.7.1 rename

> Voici le prototype de cette fonction :
```c
int rename(const char* ancienNom, const char* nouveauNom);
```

La fonction renvoie 0 si elle a réussi à renommer, sinon elle renvoie une valeur différente de 0.

> Voici un exemple :
```c
int rename(const char* ancienNom, const char* nouveauNom);

int main(int argc, char *argv[])
{
  rename("test.txt", "test_renomme.txt");

  return 0;
}
```

## 15.7.2 remove
Cette fonction supprime un fichier sans demander son reste.

> Voici le prototype :
```c
int remove(const char* fichierASupprimer);
```

**Faites très attention en utilisant cette fonction ! Elle supprime le fichier indiqué sans demander de confirmation ! Le fichier n'est pas mis dans la corbeille,**
**il est littéralement supprimé du disque dur. Il n'est pas possible de récupérer un tel fichier supprimé.**

Cette fonction tombe bien, nous avons plus besoin de notre fichier test.txt.
> Voici le code pour supprimer le fichier :
```c
int rename(const char* ancienNom, const char* nouveauNom);

int main(int argc, char *argv[])
{
  rename("test_renomme.txt", "test.txt");

  return 0;
}
```



# 16. L'allocation dynamique
    Toutes les variables que nous avons créées jusqu'ici étaient construites automatiquement par le compilateur du langage C.  
    C'était la méthode. Il existe cependant une façon plus manuelle de créer des variables que l'on appelle l'allocation  
    dynamique.

    Un des principaux intérêts de l'allocation dynamique est de permettre à un programme de réserver la place nécessaire au  
    stockage d'un tableau en mémoire dont il ne connaissait pas la taille avant la compilation. En effet, jusqu'ici, la taille  
    de nos tableaux était fixée "en dur" dans le code source. Après la lecture de ce chapitre, vous allez pouvoir créer des  
    tableaux de façon bien plus flexible !

    Il est impératif de bien savoir manipuler les pointeurs pour pouvoir lire ce chapitre ! Si vous avez encore des doutes sur  
    les pointeurs, je vous recommande d'aller relire le chapitre correspondant avant de commencer.

Quand on déclare une variable, on dit qu'on **demande à allouer de la mémoire** :
```c
int monNombre = 0;
```
Lorsque le programme arrive à une ligne comme celle-ci, il se passe en fait les choses suivantes :
1.  Votre programme demande au système d'exploitations (Windows, Linux, Mac OS, ...)  
la permission d'utiliser un peu de mémoire.

2.  Le système d'exploitation répond à votre programme en lui indiquant où il peut stocker cette  
variable (il lui donne l'adresse qu'il lui a réservée).

3.  Lorsque la fonction est terminée, la variable est automatiquement supprimée de la mémoire.  
Votre programme dit au système d'exploitations : "Je n'ai plus besoin de l'espace en mémoire  
que tu m'avais réservé à telle adresse, merci !".

##  Dans ce chapitre, nous allons :
- Etudier le fonctionnement de la mémoire pour découvrir la taille que prend une variable en fonction
de son type.  
- Puis attaquer le sujet lui-même : nous verrons comment demander manuellement de la mémoire au système
d'exploitation. On fera ce qu'on appelle de l'allocation dynamique de mémoire.
- Enfin, découvrir l'intérêt de faire une allocation dynamique de mémoire en apprenant à créer un tableau
dont la taille n'est connue qu'à l'exécution de programme.

## 16.1 La taille des variables
Selon le type de variable que vous demandez au programme de créer (char, int, double, float, ...), vous avez besoin de plus ou moins de mémoire.

En effet, pour stocker un nombre compris entre -128 et 127 (un **char**), on a besoin que d'un octet en mémoire. C'est tout petit. En revanche, un  
**int** occupe généralement 4 octets en mémoire. Quant au double, il occupe 8 octets.

Le problème est... que ce n'est pas toujours le cas. Cela dépend des machines : peut-être que chez vous un **int** occupe 8 octets, qui sait ?  
Notre objectif ici est de vérifier quelle taille occupe chacun des types sur votre ordinateur.

Il y'a un moyen très facile pour savoir cela : utiliser l'opérateur **sizeof()**. Contrairement aux apparences, ce n'est pas une fonction mais une  
fonctionnalité de base du langage C. Vous devez juste indiquer entre parenthèse le type que vous voulez analyser.

> Pour connaître la taille d'un int, on devra donc écrire :
```c
    sizeof(int)
```

A la compilation, cela sera remplacé par un nombre : le nombre d'octets que prend **int** en mémoire. Chez moi **sizeof(int)** vaut 4, ce qui signifie  
que **int** occupe 4 octets. Chez vous, c'est problablement la même valeur, mais ce n'est pas une règle.

> Testez pour voir, en affichant la valeur à l'aide d'un **printf** par exemple :
```c
int main(int argc, char *argv[])
{
  printf("char : %d octets\n", sizeof(char));
  printf("int : %d octets\n", sizeof(int));
  printf("long : %d octets\n", sizeof(long));
  printf("double : %d octets\n", sizeof(double));

  return 0;
}
```
> Chez moi, cela affiche :

    char : 1 octets
    int : 4 octets
    long : 8 octets
    double : 8 octets

On peut également afficher la taille d'un type personnalisé qu'on a crée.  
> Par exemple pour une structure :
```c
typedef struct Coordonnees Coordonnees;
struct Coordonnees
{
  int x;
  int y;
};

int main(int argc, char *argv[])
{
  printf("Coordonnees : %d octets\n", sizeof(Coordonnees));

  return 0;
}
```
> Chez moi, cela affiche :  

    Coordonnees : 8 octets

Plus un structure contient de sous-variables, plus elle prend de mémoire. Terriblement logique, n'est ce pas ?

##  Une nouvelle façon de voir la mémoire
Jusqu'ici les schémas de mémoire étaient encore assez imprécis. On va enfin pouvoir les rendre vraiment précis et corrects maintenant qu'on  
connaît la taille de chacun des types de variables.

> Si on déclare une variable de type **int** :
```c
int nombre = 18;
```
Et que **sizeof(int)** indique 4 octets sur notre ordinateur, alors la variable occupera 4 octets en mémoire !

Supposons que la variable **nombre** soit allouée à l'adresse 1600 en mémoire. On peut donc dire que notre variable **nombre** de type **int** qui  
vaut 18, occupe 4 octets dans le mémoire. Elle commence à l'adresse 1600 et termine à l'adresse 1603. La prochaine variable ne pourra donc  
être stockée qu'à partir de l'adresse 1604 !  
Si on avait fait la même chose avec un **char**, on aurait alors occupé qu'un seul octet en mémoire.  

Imaginons maintenant un tableau de **int**. Chaque "case" du tableau occupera 4 octets.  
Si notre tableau fait 100 cases :
```c
int tableau[100];
```
On occupera alors en réalité 4 * 100 = 400 octets en mémoire. Même si le tableau est vide, il prend 400 octets ! La place en mémoire est  
réservée, aucun autre programme n'a le droit d'y toucher (à part la votre). Une fois qu'une variable est déclarée elle prend immédiatement  
de la place en mémoire.

Notez que si on crée un tableau de type **Coordonnees** :
```c
Coordonnees tableau[100];
```
On utilisera cette fois : 8 * 100 = 800 octets en mémoire.

## 16.2 Allocation de mémoire dynamique
Pour allouer de la mémoire dynamiquement, on va avoir besoin d'inclurela bibliothèque **<stdlib.h>**. Cette bibliothèque contient deux fonctions  
dont nous allons avoir besoin :
- malloc ("Memory ALLOCation"), c'est-à-dire ("Allocation de mémoire") :  
demande au système d'exploitation la permission d'utiliser de la mémoire;
- free ("Libérer") : permet d'indiquer à l'OS que l'on a plus besoin de la  
mémoire qu'on avait demandé. La place en mémoire est libérée, un autre  
programme peut maintenant s'en servir au besoin.

Lorsque que vous faites une allocation manuelle de mémoire, vous devez toujours suivre ces trois étapes :
1.  appeler **malloc** pour demander de la mémoire;
2.  vérifier la valeur retournée par **malloc** pour savoir si l'OS a bien réussi à allouer  
la mémoire;
3.  une fois qu'on a fini d'utiliser la mémoire, on doit la libérer avec **free**. Si on ne le  
fait pas, on s'expose à des fuites de mémoire, c'est-à-dire que votre programme risque au  
final de prendre beaucoup de mémoire alors qu'il n'a en réalité plus besoin de tout cet  
espace.

Ces trois étapes sont les mêmes que pour les fichiers. C'est le même principe, on alloue, on vérifie si l'allocation a marché, on utilise la  
mémoire, puis on libère quand on a fini de l'utiliser.

## 16.2.1 malloc
Comme dit plus haut, la fonction **malloc** permet d'allouer de la mémoire.

> Le prototype de la fonction **malloc** est assez simple :
```c
void* malloc(size_t nombreOctetsNecessaires);
```
La fonction prend un paramètre : le nombre à réserver. Ainsi, il suffira d'écrire **sizeof(int)** dans ce paramètre pour réserver suffisamment  
d'espace pour stocker un int.

Dans ce cas, la fonction renvoie un void* ! Cette fonction renvoie un valeur vide. En voyant cela, on se demande pourquoi la fonction retourne  
un "pointeur sur vide". Mais il y'a une raison à cela. En fait cette fonction renvoie un pointeur indiquant l'adresse que l'OS a réservée pour  
votre variable. Si l'OS a trouvé de la place à l'adresse 1600, la fonction renvoie donc un pointeur contenant l'adresse 1600.

Le problème ici, c'est que la fonction **malloc** ne sait pas quel type de variable vous cherchez à créer. En effet, vous ne lui donnez qu'un paramètre :
- le nombre d'octets en mémoire que vous avez besoin.

Comme **malloc** ne sait pas quel type elle doit retourner, elle renvoie le type void*. Ce sera une pointeur sur *n'importe quel type*. On peut donc  
dire que c'est un pointeur universel.

Passons maintenant à la pratique. Si je veux m'amuser à créer manuellement une variable de type **int** en mémoire, je devrais indiquer à  
**malloc** que j'ai besoin de **sizeof(int)** octets en mémoire. Je récupère le résultat du **malloc** dans un pointeur sur **int**.
```c
void* malloc(size_t nombreOctetsNecessaire);

int main(int argc, char *argv[])
{
  int* memoireAllouee = NULL; // On crée un pointeur sur int

  // La fonction malloc inscrit dans notre pointeur l'adresse qui a été réservée
  memoireAllouee = malloc(sizeof(int));
  
  return 0;
}
```
A la fin de ce code, **memoireAllouee** est un pointeur contenant une adresse qui vous a été réservée par l'OS, par exemple l'adresse 1600.

## Tester le pointeur
La fonction **malloc** a donc renvoyé dans notre pointeur **memoireAllouee** l'adresse qui a été réservée pour vous en mémoire.

Deux possibilités :
- si l'allocation a marché, notre pointeur contient une adresse;
- si l'allocation a échoué, notre pointeur contient l'adresse NULL.

Il est peu problable qu'une allocation échoue, mais cela peut arriver. Imaginez que vous demandiez à utiliser 34 Go de mémoire vive, il y'a très  
peu de chances que l'OS vous réponde favorablement.

Il est recommandé de toujours tester si l'allocation a marché.  
> On va faire ceci :
- si l'allocation a échoué, c'est qui n'y avait plus de mémoire de libre (c'est un cas critique).

Dans un tel cas, le mieux est d'arrêter immédiatement le programme parce que, de toute manière, il ne pourra pas continuer convenablement.

On va utiliser une fonction stantard qu'on avait pas encore vue. C'est **exit()**. Elle arrête immédiatement le programme.  
> Elle prend un paramètre :
- la valeur que le programme doit retourner.

```c
void* malloc(size_t nombreOctetsNecessaire);

int main(int argc, char *argv[])
{
  int* memoireAllouee = NULL;

  memoireAllouee = malloc(sizeof(int));
  if (memoireAllouee == NULL) // Si l'allocation a échoué
  {
    exit(0); // On arrête immédiatement le programme
  }
  // On peut continuer le programme normalement sinon
  return 0;
}
```
Si le pointeur est différent de NULL, le programme peut continuer, sinon il faut afficher un message d'erreur ou même mettre fin au programme,  
parce qu'il ne pourra pas continuer correctement s'il n'y a plus de place en mémoire.

## 16.2.2 free
Comme dit plus haut, la fonction **free** permet de libérer de la mémoire.

Tout comme on utilisait la fonction **fclose** pour fermer un fichier dont on avait plus besoin, on va utiliser la fonction **free** pour libérer  
de la mémoire dont on ne se sert plus.

> Voici le prototype :
```c
void free(void* pointeur);
```

La fonction **free** a juste besoin de l'adresse mémoire à libérer. On va donc lui envoyer notre pointeur, c'est-à-dire **memoireAllouee** dans notre  
exemple. Voici le schéma complet et final, ressemblant à s'y méprendre à ce qu'on a vu dans le chapitre sur les fichiers :
```c
void* malloc(size_t nombreOctetsNecessaire);
void free(void* pointeur);

int main(int argc, char *argv[])
{
  int* memoireAllouee;

  memoireAllouee = malloc(sizeof(int));
  if (memoireAllouee == NULL) // On vérifie si l'adresse mémoire a été allouée
  {
    exit(0); // Erreur : on arrête tout !
  }
  
  free(memoireAllouee); // On a plus besoin de la mémoire, on la libère

  return 0;
}
```

## Exemple concret d'utilisation
On va programmer quelque chose qu'on a appris à faire il y'a un moment : demander l'âge de l'utilisateur et le lui afficher. La seule différence  
avec ce qu'on a faisait avant, c'est qu'ici la variable va être allouée manuellement (on dit aussi *dynamiquement*) plutôt qu'automatiquement  
comme auparavant. Alors oui, du coup, le code est un peu plus compliqué. Mais faites l'effort de bien comprendre, c'est important :
```c
void* malloc(size_t nombreOctetsNecessaire);
void free(void* pointeur);

int main(int argc, char *argv[])
{
  int* memoireAllouee;

  memoireAllouee = malloc(sizeof(int)); // Allocation de la mémoire
  if (memoireAllouee == NULL)
  {
    exit(0);
  }
  
  // utilisation de la mémoire
  printf("Quel age avez-vous ? ");
  scanf("%d", memoireAllouee);
  printf("Vous avez %d ans\n", *memoireAllouee);

  free(memoireAllouee); // On a plus besoin de la mémoire, on la libère

  return 0;
}
```
> Ce code vous retourne ceci : 

    Quel age avez-vous ? 34  
    Vous avez 34 ans

**ATTENTION : Comme memoireAllouee est un pointeur, on ne l'utilise pas de la même manière qu'une vraie variable. Pour obtenir la  
valeur de la variable il faut placer une étoile devant : memoireAllouee (regardez le printf). Tandis que pour indiquer l'adresse,  
on a juste besoin d'écrire le nom du pointeur memoireAllouee (regardez le scanf).**

Revenons à notre code. On y a alloué dynamiquement une variable de type **int**. Au final, ce qu'on a écrit revient exactement au même que  
d'utiliser la méthode "automatique" qu'on connaît bien maintenant :
```c
int main(int argc, char *argv[])
{
  int maVariable = 0; // Allocation de la mémoire (automatique)

  // Utilisation de la mémoire
  printf("Quel age avez-vous ? ");
  scanf("%d", &maVariable);
  printf("Vous avez %d ans\n", maVariable);

  return 0;
} // Libération de la mémoire (automatique à la fin de la fonction)
```
> Ce code vous retourne ceci :

    Quel age avez-vous ? 31
    Vous avez 31 ans

En résumé, il y'a deux façons de créer une variable, c'est-à-dire d'allouer de la mémoire.  
Soit on le fait :
- automatiquement : c'est le méthode que vous connaissez et qu'on a utilisé jusqu'ici;
- manuellement (*dynamiquement*) : c'est la méthode qu'on vient de voir.

Cette méthode est plus compliquée, mais pas inutile ! Nous sommes parfois obligés d'allouer manuellement de la mémoire, comme nous  
allons le voir maintenant.

## Allocation dynamique d'un tableau
Pour l'instant on à utilisé l'allocation dynamique uniquement pour créer une petite variable. Or en général, on ne sert pas de l'allocation  
dynamique pour cela. On utilise la méthode automatique qui est plus simple.  

On utilise l'allocation dynamique lorsque on doit créer un tableau dont on ne connaît pas la taille.

Imaginons par exemple un programme qui stocke l'âge de tous les amis de l'utilisateur dans un tableau. On pourrait créer un tableau de **int**  
pour stocker les âges, comme ceci :
```c
int ageAmis[15];
```

Mais dans ce cas, on ne sait pas si l'utilisateur a que 15 amis, il en a sûrement plus !  
Voilà l'intêret de l'allocation dynamique : on va demander le nombre d'amis à l'utilisateur, puis on fera une allocation dynamique pour créer un  
tableau ayant exactement la taille nécessaire (ni trop petit, ni trop grand). Si l'utilisateur a 15 amis, on créera un tableau de **15 int**, s'il  
en a 28 on créera un tableau de **28 int**, etc.

Il est interdit de créer un tableau en indiquand sa taille à l'aide d'une variable :
```c
int amis[nombreAmis];
```

L'avantage de l'allocation dynamique, c'est qu'elle nous permet de créer un tableau qui a exactement la taille de la variable **nombreAmis**, et  
cela grâce à un code qui fonctionnera partout !

On va demander au **malloc** de nous réserver **nombreAmis * sizeof(int)** octets en mémoire :
```c
amis = malloc(nombreAmis * sizeof(int));
```

Ce code permet de créer un tableau de type **int** qui a une taille correspondant exactement au nombre d'amis !

Voici ce que fait le programme dans l'ordre :
1.  demander à l'utilisateur combien il a d'amis;
2.  créer un tableau de **int** ayant une taille égale à son nombre d'amis (via malloc);
3.  demander l'aĝe de chacun de ses amis un à un, qu'on stocke dans le tableau;
4.  afficher l'âge des amis pour montrer q'on a bien mémorisé tout cela;
5.  à la fin, puisqu'on a plus besoin du tableau contenant l'âge des amis, le libérer avec la fonction **free**.

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int nombreAmis = 0, i = 0;
  int* ageAmis = NULL; // Ce pointeur va servir de tableau après l'appel du malloc

  // On demande le nombre d'amis à l'utilisateur
  printf("Combien d'amis avez-vous ? ");
  scanf("%d", &nombreAmis);

  if (nombreAmis > 0) // Il faut qu'il ait au moins un ami
  {
    ageAmis = malloc(nombreAmis * sizeof(int)); // On alloue de la mémoire pour le tableau

    if (ageAmis == NULL) // On vérifie si l'allocation a marché ou non
    {
      exit (0); // On arrête tout
    }
    
    // On demande l'âge des amis un à un
    for (i = 0; i < nombreAmis; i++)
    {
      printf("Quel âge a l'ami %d ? ", i + 1);
      scanf("%d", &ageAmis[i]);
    }
    
    // On affiche les âges stockés un à un
    printf("\nVos amis ont les âges suivant :\n");
    for (i = 0; i < nombreAmis; i++)
    {
      printf("%d ans\n", ageAmis[i]);
    }
    
    // On libère la mémoire allouée avec malloc, on en a plus besoin
    free(ageAmis);
  }
  return 0;
}
```

> Au final ce code vous retourne ceci :

    Combien d'amis avez-vous ? 5
    Quel âge a l'ami 1 ? 13
    Quel âge a l'ami 2 ? 14
    Quel âge a l'ami 3 ? 15
    Quel âge a l'ami 4 ? 16
    Quel âge a l'ami 5 ? 17

    Vos amis ont les âges suivant :
    13 ans
    14 ans
    15 ans
    16 ans
    17 ans

Ce programme est tout à fait inutile : il demande les âges et les affiche ensuite. C'est un exemple "simple" (si vous avez compris le **malloc**).

Dans la suite, on aura l'occasion d'utiliser le **malloc** pour des choses bien plus intéressates que le stockage de lâge de ses amis !