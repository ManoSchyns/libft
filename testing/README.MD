Pour lancer les tests souhaités.

-> placer le repo du testeur dans le dossier de votre librairie
-> creer votre librairie grace a votre Makefile.
-> executer la commande : gcc -I. testing/fichier_to_test -L. -lft -o go
-> Pas de tests effectués pour calloc
Exemple pour atoi : 
---> gcc -I. testing/ft_atoi_test.c -L. -lft -o go

Lancez l'executable go
---> ./go
Si il y a des erreurs, vous les verrez.

===> Pour les tests ft_strlcpy , ft_strlcat et ft_strnstr
-> installer la Bibliotheque bsd (ceci est pour Linux. Les autres pas la moindre idee): 
=========================   sudo apt install libbsd-dev   ==============================
-> Lancer avec le flag -lbsd