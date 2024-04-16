---
module:			B-INN-000
title:			Spring Camp 2024
subtitle:		C Password Generator

noFormalities:  true

author:			Baptiste Camerlynck
version:		1.0

#define linebreak \\vspace*{#1cm}
#define lb \#linebreak(1)
#define slb \#linebreak(0)
#define comment [comment]: <>(#1)

---

# Objectifs :

* Maîtriser les concepts de base du langage C.
* Comprendre la génération de nombres aléatoires en C.
* Savoir manipuler les chaînes de caractères en C.
* Récupérer les informations écrites par l’utilisateur

# Comment coder

1.  Pour coder en langage C, rendez vous sur le site [onlinegdb.com](https://onlinegdb.com/)
2.  Dans le coin supérieur droit de l’écran, dans la case “language”, sélectionnez “C”.
3.  Vous pouvez désormais coder !


#hint(En C, le programme commence toujours dans la fonction `main()`, c’est donc ici que vous écrirez votre code.)

Pour lancer votre programme, appuyez sur la case verte “Run” en haut de votre écran, le résultat du programme devrait s’afficher sur un terminal en bas de l’écran.

#imageCenterCorners(indication_onlinegdb.png, 500px, 1)
# Consigne

Dans ce projet, vous serez amené à créer un générateur de mots de passe en langage C.
Le programme demandera à l'utilisateur de spécifier la taille du mot de passe, puis générera un mot de passe aléatoire respectant cette taille.
#slb
affichage attendu : 

#terminalNoPrompt(Enter the length of the password: 16
Generated Password: _eqt@u%-%5yyZ5OH)

#hint(Quelques fonctions qui pourraient aider :

* `srand()` et `rand()` pour la génération de nombre aléatoire
* `printf()` pour afficher des informations à l'écran
* `scanf()` pour récupérer les informations entrées par l'utilisateur

)
