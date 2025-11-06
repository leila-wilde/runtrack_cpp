<a id="fr"></a>

<div align="center">
  <a href="#en">🇬🇧 English version below</a>
</div>

# Révisions

#### Runtrack C++ Jour 1 : Un peu de révision

## Contexte

Dans le royaume de CodeTopia, une puissante équipe nommée **"La TeamPlat"** règne en maîtresse sur toutes les connaissances et compétences en programmation. Cependant, un maléfique bug appelé **"Errorus Fatalis"** menace de corrompre l’équipe, plongeant Codetopia dans le chaos. Seuls les plus braves et les plus astucieux programmeurs peuvent lever cette menace.

Votre mission, si vous l'acceptez, est de relever une série de défis en C++ pour restaurer l'ordre et la stabilité dans Codetopia. Chaque tâche est une étape vers la victoire, où vous apprendrez et démontrerez vos compétences de codage pour devenir le légendaire Maître du Code de Codetopia et rejoindre l’équipe. Préparez votre environnement de développement, aiguisez votre esprit, et embarquez dans cette quête héroïque avec les exercices suivants.

## Job 0 : Préparation au combat

Avant de partir à l’aventure, il est crucial de s’assurer que votre épée (compilateur) est bien aiguisée. En fonction de votre système d’exploitation, suivez les instructions pour installer GCC :

- **Linux** : GCC devrait être déjà présent. Si ce n’est pas le cas, l'installer avec votre package manager (apt, pacman…)
- **Mac** : GCC (ou clang, qui est une bonne alternative) devrait être déjà présent. Si ce n’est pas le cas, installer GCC avec votre package manager (brew)
- **Windows** : Suivre le guide d’installation de MSYS2, y compris l’installation de GCC, puis ajouter le dossier bin/ de MSYS2 contenant les exécutables de GCC a votre variable d’environnement système Path.

Utiliser la commande **“g++ -v”** pour vérifier que le compilateur est bien installé et présent dans la variable d’environnement PATH.

## Job 1 : Le Salut des Nouveaux Héros

Utiliser un programme en C++ pour afficher le message **“Hello world!”**. C’est votre cri de guerre, le signal que vous êtes prêt à commencer l’aventure.

## Job 2 : L’Épreuve de la Multiplication

Un héros doit résoudre des énigmes. Écrire un programme en C++ permettant de **multiplier** deux nombres et **d'afficher leur produit.**

## Job 3 : La Sagesse des cinq

Testons votre capacité à gérer les ressources avec sagesse.

Écrire un programme en C++ qui demande à l'utilisateur de
taper cinq entiers et qui affiche leur moyenne. Vous êtes limités à deux variables.

## Job 4 : Le duel Pair-Impair

Les héros doivent souvent déterminer la nature des choses.
Écrire un programme en C++ qui permet d'afficher si un nombre entier saisi au clavier est pair ou impair.

## Job 5 : L’échange des Destinées

Écrire un programme en C++ qui permet d'échanger le contenu de deux entiers n et m saisis par l'utilisateur, puis afficher ces entiers avant et après l’échange.

## Job 6 : La quête des Prix Justes

Vous êtes marchand de fruits et légumes dans l’agora
Codetopia. C’estun ouvert les citoyens où de espace
se rassemblent pour échanger des nouvelles, faire des affaires et discuter des affaires publiques. Aider un marchand de fruits en créant un programme qui **affiche**
le prix TTC des produits frais, qui **demande** à l'utilisateur de taper le prix HT d'un kilo de carottes, le nombre de kilos de carottes, et le taux de TVA (ex : 15 %). Le programme doit afficher le prix TTC d’une marchandise donnée.

## Job 7 : L’Inversion Mystique

Votre mission dans cette épreuve est de recevoir un nombre de la part de l'utilisateur, puis de manier habilement les chiffres pour en **inverser l'ordre**. Comme un sorcier des nombres, vous transformerez par exemple le nombre 12345 en 54321, démontrant ainsi votre expertise dans la manipulation des cycles et des mystères des nombres.

## Job 8 : Le Jugement de l’Année

Dans cette épreuve, votre tâche est de recevoir une année de la part de l'utilisateur et de discerner avec précision si elle est **bissextile.** Comme un oracle du temps, vous illuminerez votre chemin à travers les âges en déterminant si des années comme 2020, 2024 et 2028 sont bissextiles, ou si des années comme 1900, 2100 et 2200 ne le sont pas. Montrez votre habileté à naviguer dans les méandres du calendrier, apportant clarté et perspicacité à travers les époques.

## Job 9 : L’épreuve du Héros

Pour passer l’épreuve du Héros, écrire une fonction qui prend en entrée un **tableau d'entiers** et sa taille, puis **trouve** et **renvoie** le plus petit élément du tableau en utilisant des **pointeurs.**

## Job 10 : La Métamorphose du Héros

**Maintenant testons votre agilité !**

Modifiez la fonction précédente pour qu'elle prenne un tableau de pointeurs d'entiers au lieu d'un tableau d'entiers.

## Job 11 : Le Pacte des échanges

Écrire une fonction **swapValues** qui, tel un défi d’adresse, teste votre habilité à échanger avec maîtrise les valeurs de deux entiers en utilisant les références.

Dans cette épreuve, vous êtes appelé à démontrer votre dextérité et votre efficacité. **Vous ne devez pas utiliser de pointeurs pour cet exercice.**

## Job 12 : La Magie du doublon

Écrire une fonction doubleArray qui prend un **tableau d'entiers** et sa taille en entrée, qui **double** chaque élément du tableau en utilisant des **pointeurs** pour accéder aux éléments du tableau, et **renvoie** la somme de tous les éléments doublés.

Ensuite, écrivez une fonction **printArray** qui prend un tableau d'entiers et sa taille en entrée, et **affiche** les éléments du tableau après les avoir doublés.

## Job 13 : L’Énigme des Fibonacci

La suite de Fibonacci est une séquence d'entiers où chaque terme est la somme des deux termes précédents.

Créer une fonction **fibonacci** qui calcule le **N**-ième terme de la suite de Fibonacci. Le résultat doit être calculé par le compilateur lors du traitement du code, et non lors de son exécution.

Après avoir écrit votre fonction, utilisez-la dans le programme principal pour afficher les dix premiers termes de la suite de Fibonacci. Assurez-vous que les valeurs sont correctes et que le programme fonctionne comme prévu.

Écrire ensuite une fonction qui prend un entier non-signé sur 32 bits en entrée et retourne **vrai** si le nombre de bits à 1 est pair et **faux** sinon. Testons ta capacité à démêler les mystères de cette suite et d’anticiper ses séquences numériques.

## Job 14 : Le Calcul du Cube

Écrire un programme qui demande à l'utilisateur de taper un entier **N** et qui **calcule** la somme des cubes de **5^3** à **N^3**.

## Job 15 : La quête des Bitiums

La quête des Bitiums consiste à retourner **vrai** si le nombre de bit est pair, et **faux** sinon. Par exemple, si nous avons un nombre binaire tel que 101010 (qui représente 42 en décimal), il y a trois bits définis à 1. Dans ce cas, le nombre de bits à 1 est impair et la fonction retournera **faux**. Pour cette épreuve, utilisez uniquement les opérations sur les bits disponibles en C++. Il n’est pas autorisé
d’utiliser les opérateurs de comparaisons (==, != …).

**Seriez-vous capable de relever le défi ?**

## Job 16 : Le Trius des Corda

Écrire une fonction **MySortString** qui prend en entrée un tableau de chaînes de caractères et le **trie** en utilisant des **pointeurs**. Vous devez implémenter votre propre algorithme de tri en utilisant des pointeurs pour accéder aux éléments du tableau et effectuer les échanges nécessaires. Démontrer votre maîtrise des algorithmes de tri.

## Job 17 : Le Colisée des Spécialités

Créer un programme pour une école qui gère un ensemble de
spécialités.

Déclarer une énumération Spécialité avec cinq éléments : IA,
Web, Logiciel, Système Immersif Et Cybersécurité. Utiliser un tableau pour stocker les spécialités des étudiants de la promo. Initialiser ce tableau avec les spécialités et
associer le nombre d’étudiants de manière aléatoire (entre 12 et 66). Écrire une fonction **afficherSpecialite** qui prend une spécialité en paramètre et affiche son nom ainsi que le nombre de places disponible. Dans le programme principal, parcourez le tableau de spécialités et utilisez la fonction **“afficherSpecialite”** pour afficher le nom de chaque  spécialité.

## Job 18 : La Persévérance d’Héraclès

Imaginez-vous défier les épreuves divines comme l'aurait fait Héraclès dans la Grèce antique !

Dans cette quête : créer une fonction **addElement** qui prend en paramètre un tableau d'entiers, la taille actuelle du
tableau et l'entier à ajouter. Cette fonction doit:
- allouer dynamiquement un nouveau tableau avec une taille
augmentée de 1,
- copier les éléments de l'ancien tableau dans le nouveau,
- ajouter le nouvel entier à la fin du nouveau tableau,
- enfin, libérer la mémoire de l'ancien tableau.

Créer une fonction **showTable** qui prend en paramètre un tableau d'entiers et sa taille, et qui affiche tous les éléments du tableau.

Créer un tableau d'entiers vide avec une capacité initiale de 5 éléments. Ajoutez plusieurs entiers au tableau à l'aide de la fonction **addElement**, puis affichez le tableau à l'aide de la fonction **showTable.**

**Avez-vous réussi à surmonter cette épreuve comme l’aurait fait Héraclès ?**

## Compétences visées

- C++

## Rendu

La runtrack doit être disponible sur votre github, au nom “**runtrack-cpp**”. Les fichiers doivent être organisés précisément, comme indiqué dans les énoncés, dans un dossier correspondant à leur jour respectif.

**Exemple : jour01/job01/hello_world.cpp**

## Base de connaissances

- Apprendre le c++
- La syntaxe de base
- Aide mémoire C++
- Les boucles
- Les tableaux
- Les pointeurs
- Les pointeurs et références

---

<a id="en"></a>

<div align="center">
  <a href="#fr">🇫🇷 version français ci-dessus</a>
</div>

# Revisions

#### Runtrack C++ Day 1: A bit of revision

## Context

In the kingdom of CodeTopia, a powerful team named **"La TeamPlat"** rules supreme over all knowledge and programming skills. However, a malevolent bug called **"Errorus Fatalis"** threatens to corrupt the team, plunging CodeTopia into chaos. Only the bravest and most cunning programmers can lift this threat.

Your mission, should you accept it, is to take on a series of C++ challenges to restore order and stability in CodeTopia. Each task is a step towards victory, where you will learn and demonstrate your coding skills to become the legendary Master of Code of CodeTopia and join the team. Prepare your development environment, sharpen your mind, and embark on this heroic quest with the following exercises.

## Job 0: Preparation for Battle

Before embarking on adventure, it is crucial to ensure that your sword (compiler) is well-sharpened. Depending on your operating system, follow the instructions to install GCC:

- **Linux**: GCC should already be present. If not, install it with your package manager (apt, pacman…)
- **Mac**: GCC (or clang, which is a good alternative) should already be present. If not, install GCC with your package manager (brew)
- **Windows**: Follow the MSYS2 installation guide, including GCC installation, then add the bin/ folder of MSYS2 containing the GCC executables to your system environment variable Path.

Use the command **"g++ -v"** to verify that the compiler is properly installed and present in the PATH environment variable.

## Job 1: The Greeting of New Heroes

Use a C++ program to display the message **"Hello world!"**. This is your battle cry, the signal that you are ready to begin the adventure.

## Job 2: The Multiplication Trial

A hero must solve riddles. Write a C++ program to **multiply** two numbers and **display their product.**

## Job 3: The Wisdom of Five

Let's test your ability to manage resources wisely.

Write a C++ program that asks the user to
type five integers and displays their average. You are limited to two variables.

## Job 4: The Even-Odd Duel

Heroes must often determine the nature of things.
Write a C++ program that displays whether an integer entered from the keyboard is even or odd.

## Job 5: The Exchange of Destinies

Write a C++ program that exchanges the contents of two integers n and m entered by the user, then displays these integers before and after the exchange.

## Job 6: The Quest for Fair Prices

You are a fruit and vegetable merchant in the CodeTopia agora. It's an open space where citizens gather to exchange news, do business, and discuss public affairs. Help a fruit merchant by creating a program that **displays** the price including tax for fresh products, which **asks** the user to enter the price excluding tax per kilogram of carrots, the number of kilograms of carrots, and the tax rate (e.g.: 15%). The program must display the price including tax for a given product.

## Job 7: The Mystical Inversion

Your mission in this trial is to receive a number from the user, then skillfully manipulate the digits to **reverse their order**. Like a wizard of numbers, you will transform for example the number 12345 into 54321, thus demonstrating your expertise in manipulating cycles and the mysteries of numbers.

## Job 8: The Judgment of the Year

In this trial, your task is to receive a year from the user and discern with precision whether it is a **leap year.** Like an oracle of time, you will illuminate your path through the ages by determining whether years like 2020, 2024, and 2028 are leap years, or whether years like 1900, 2100, and 2200 are not. Show your ability to navigate the intricacies of the calendar, bringing clarity and insight through the ages.

## Job 9: The Hero's Trial

To pass the Hero's trial, write a function that takes as input an **array of integers** and its size, then **finds** and **returns** the smallest element of the array using **pointers.**

## Job 10: The Hero's Metamorphosis

**Now let's test your agility!**

Modify the previous function so that it takes an array of pointers to integers instead of an array of integers.

## Job 11: The Pact of Exchanges

Write a function **swapValues** that, like a skill challenge, tests your ability to skillfully exchange the values of two integers using references.

In this trial, you are called upon to demonstrate your dexterity and efficiency. **You must not use pointers for this exercise.**

## Job 12: The Magic of Doubling

Write a function doubleArray that takes an **array of integers** and its size as input, which **doubles** each element of the array using **pointers** to access the elements of the array, and **returns** the sum of all doubled elements.

Then, write a function **printArray** that takes an array of integers and its size as input, and **displays** the elements of the array after doubling them.

## Job 13: The Fibonacci Enigma

The Fibonacci sequence is a sequence of integers where each term is the sum of the two previous terms.

Create a function **fibonacci** that calculates the **N**-th term of the Fibonacci sequence. The result must be calculated by the compiler when processing the code, not when executing it.

After writing your function, use it in the main program to display the first ten terms of the Fibonacci sequence. Make sure the values are correct and the program works as expected.

Then write a function that takes an unsigned 32-bit integer as input and returns **true** if the number of bits set to 1 is even and **false** otherwise. Let's test your ability to unravel the mysteries of this sequence and anticipate its numerical sequences.

## Job 14: The Calculation of the Cube

Write a program that asks the user to enter an integer **N** and which **calculates** the sum of the cubes from **5^3** to **N^3**.

## Job 15: The Quest for Bitiums

The quest for Bitiums consists of returning **true** if the number of bits is even, and **false** otherwise. For example, if we have a binary number such as 101010 (which represents 42 in decimal), there are three bits set to 1. In this case, the number of bits set to 1 is odd and the function will return **false**. For this trial, use only the bit operations available in C++. It is not allowed
to use comparison operators (==, != …).

**Would you be capable of meeting the challenge?**

## Job 16: The Trius of Corda

Write a function **MySortString** that takes as input an array of character strings and **sorts** it using **pointers**. You must implement your own sorting algorithm using pointers to access the elements of the array and perform the necessary exchanges. Demonstrate your mastery of sorting algorithms.

## Job 17: The Colosseum of Specialties

Create a program for a school that manages a set of
specialties.

Declare a Specialty enumeration with five elements: AI,
Web, Software, Immersive System, and Cybersecurity. Use an array to store the specialties of the students of the class. Initialize this array with the specialties and
associate the number of students randomly (between 12 and 66). Write a function **displaySpecialty** that takes a specialty as a parameter and displays its name as well as the number of available places. In the main program, traverse the specialty array and use the **"displaySpecialty"** function to display the name of each specialty.

## Job 18: The Perseverance of Heracles

Imagine yourself facing divine trials as Heracles would have done in ancient Greece!

In this quest: create a function **addElement** that takes as a parameter an array of integers, the current size of the
array and the integer to add. This function must:
- dynamically allocate a new array with a size
increased by 1,
- copy the elements of the old array into the new one,
- add the new integer at the end of the new array,
- finally, free the memory of the old array.

Create a function **showTable** that takes as a parameter an array of integers and its size, and which displays all the elements of the array.

Create an array of empty integers with an initial capacity of 5 elements. Add several integers to the array using the **addElement** function, then display the array using the **showTable** function.

**Did you manage to overcome this trial as Heracles would have?**

## Skills Targeted

- C++

## Delivery

The runtrack must be available on your GitHub as "**runtrack-cpp**". Files must be organized precisely, as specified in the requirements, in a folder corresponding to their respective day.

**Example: day01/job01/hello_world.cpp**

## Knowledge Base

- Learn C++
- Basic syntax
- C++ Quick Reference
- Loops
- Arrays
- Pointers
- Pointers and References