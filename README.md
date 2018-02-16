# CPP-ProjetEchec

Le projet consiste en la réalisation d'un jeu d'échec en C++. Le jeu devra ce jouer à 2 ou 4 joueurs.

### Ligne de conduite du projet
##### Mode console
* Créer un tableau 2d 8x8 qui représentera l'échiquier.
* Placer les pions sur l'échiquier, chaque piont a une coordonnée distinct.
* Coder le déplacement du pions sur l'échiquier, déplacement 1 en avant (points de vue du joueurs).
* Coder la possibilité de "manger" les pions adverse en diagonale.
* Faire des test en utilisant les règles du jeu de dames
##### Mode gaphique
* Afficher une fenêtre
* Mettre une image d'un échiquier en fond de la fenêtre
* Faire un menu qui contient "Nouvelle partie" "Mode de jeu" "Quitter"
* Placer les images des différents pions à leurs place sur l'échiquier
  * 16 x Pions
  * 4 x Tours
  * 4 x fous
  * 4 x cavalier
  * 2 x rois
  * 2 x reines
* Coder les déplacement des différents pions sur l'échéquier
  * Tours
  * Fous
  * Cavaliers
  * Rois
  * Reines
* Coder la partie ou le joueurs "mange" le pions adverse
* Coder la promotion du pion
  * proposer un choix de pions pour remplacer le pion
* coder la lecture de l'échec et mat
* Coder un mode de jeu avec un pion au hazard non connu des joueurs qui lorsqu'il ce fait manger "explose" et supprime les pionts adverse dans un rayons de 3 blocks
* Coder un autre mode de jeux pour 4 joueurs en reduissant le nombre de cavalier et de fous pour les joueurs.
* Include une options de timers qui lorsqu'il tombe à zéro (sans echec&mat) compte les points:
  * Pion 1 points
  * Tour 5 points
  * Fou 3 points
  * Cavalier 3 points
  * Dame 9 points
  * Le rois est sans points.
* Teste du jeux et différents mode de jeu 
