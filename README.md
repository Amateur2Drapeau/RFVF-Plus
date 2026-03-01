# Guide RFVF+ — Fonctionnalités & FAQ

---

## Introduction

Cette Rom a été développée dans le but de maintenir au maximum l'expérience de base de Pokémon Rouge Feu et Vert Feuille de l'époque. Il n'y a presque aucun changement de scénario. Cependant un très grand nombre de changements liés au QOL (Quality of life) a été apporté que vous pourrez lire dans la section en question. J'ai rajouté également un moyen d'avoir tous les Pokémon de la 1ere à la 3e génération sauf exceptions qui seront rajoutés dans les prochaines mises à jour. 

Si vous souhaitez me faire un don pour mon travail vous pouvez le faire sur [cette page](https://ko-fi.com/materia1005#)

Je me suis basé sur le repo de Deokishisu [FRLG-Plus](https://github.com/Deokishisu/FRLG-Plus?tab=readme-ov-file). N'hésitez pas aller consulter son travail. 



---

## Table des matières

- [Fonctionnalités](#fonctionnalités)
  - [Ajouts mécaniques](#ajouts-mécaniques)
  - [Changements scénaristiques](#changements-scénaristiques)
  - [Qualité de vie](#qualité-de-vie)
  - [Corrections de bugs vanilla](#corrections-de-bugs-vanilla)
  - [Changements divers](#changements-divers)
- [FAQ](#faq)
  - [Mécaniques de jeu](#mécaniques-de-jeu)
  - [Disponibilité des Pokémon](#disponibilité-des-pokémon)
  - [Gameplay](#gameplay)
  - [Sauvegardes, émulateurs et flashcarts](#sauvegardes-émulateurs-et-flashcarts)
  - [Divers](#divers)

---

## Fonctionnalités

### Ajouts mécaniques

- **Réglages divers** (inspiré de Noir 2 / Blanc 2) : accessible depuis le menu principal (avant de charger sa sauvegarde) après avoir sauvegardé une première fois. Vous pouvez appuyer sur L pour consulter l'aide dans ce menu également. Les options disponibles sont :
  - **Version** : basculer entre Rouge Feu et Vert Feuille pour obtenir les Pokémon exclusifs à chaque version.
  - **Difficulté** : mode Normal, mode Facile (niveaux réduits) ou mode Défi (niveaux augmentés, entraîneurs avec un Pokémon supplémentaire, bonus de badges désactivés).
  - **Mode Nuzlocke** : active les règles Nuzlocke intégrées au jeu (voir détails ci-dessous).
  - **Calcul des IV** : traiter les IV de vos Pokémon comme tous parfaits (31), tous nuls, ou utiliser leurs IV réels. N'affecte pas les IV réels ni le Type Mystère.
  - **Calcul des EV** : traiter les EV comme toutes nulles ou utiliser les EV réelles. N'affecte pas les EV réelles accumulées.
  - **Pas de soins gratuits** : désactive les soins en Centre Pokémon, dans la Tour Lavande et autres zones de soin. Les Pokémon déposés en PC ne sont plus soignés non plus.
  - **Modificateur d'Expérience** : multiplicateur ×0, ×½, ×1 ou ×2.

- **Mode Nuzlocke intégré** : implémentation complète des règles Nuzlocke. Les Pokémon mis K.O. ne peuvent plus être soignés. Seul le premier Pokémon capturé ou reçu d'un PNJ dans chaque zone est utilisable ; les autres sont automatiquement mis K.O. après capture (mais ne comptent pas pour la clause des doublons). Un indicateur visuel sur la barre de vie ennemie signale si le Pokémon compte comme première rencontre dans la zone. En cas de défaite totale, le jeu propose de récupérer un Pokémon utilisable en PC ou de désactiver le Nuzlocke.

- **Split Physique / Spécial** : implémentation complète des capacité Physique et Spécial comme dans les jeux modernes. Par ex Poing feu qui était spécial dans le jeu d'origine devient physique. Toute l'interface des capacités en Combat, dans le résumé et dans la boite CT a été retravaillée pour indiquer si une capacité est physique ou spéciale.

---

### Changements scénaristiques

- Accès aux Îles Sevii disponible **immédiatement après être devenu Champion**, sans nécessiter le Pokédex National.
  - Oak remet un **Pokédex Étendu** listant tous les Pokémon obtenables sans échange.
  - Le Pokédex National s'obtient en échangeant un Pokémon absent de ce Pokédex Étendu.
- Une **bête légendaire** commence à errer dans Kanto dès la première entrée au Panthéon (et non plus à la remise du Saphir).
- Les **tickets d'événements** s'obtiennent via des jalons de progression, permettant l'accès à l'Île Aurore (Deoxys), au Roc Nombri (Ho-Oh/Lugia), à l'Île Lointaine (Mew, portée d'Émeraude) et à l'Île du Sud (Latias/Latios, portée d'Émeraude).
- **Post-game étendu** :
  - CS08 Plongée disponible et utilisable ; nouvelles zones sous-marines sur la Route 20 et le Pont du Lien.
  - Extension de la Zone Safari avec 3 nouvelles zones (Pour les Pokémon de Johto et de Hoenn).
  - **Tour de Combat Hoenn** portée depuis RS, accessible après avoir remis le Rubis à CILEO. Mode Niveau Libre comme dans Émeraude. La Grotte Atelier est accessible depuis le quai.
  - Nouvelle zone dans le Bois baies.
  - Zone à l'ouest du Cap Falaise avec des dresseurs rematchables pour le dressage EV.
  - **Revanche contre les Champions d'Arène** débloquable sur l'Île 7.
  - **Maîtres Dresseurs** présents dans tout Kanto après être devenu Champion (inspirés des Maîtres Dresseurs de Let's Go), avec quelques différences :
    - Rematch immédiat possible.
    - Leur Pokémon s'adapte au niveau de celui utilisé pour les défier.
    - Leurs Pokémon tiennent des objets et ont de meilleures capacités que dans Let's Go.
    - Battre les 151 Maîtres Dresseurs débloque un super-boss secret.
    - Victoire conférant un **titre** utilisable en combat link avec d'autres joueurs RFVF+.

---

### Qualité de vie

#### Déplacements
- Course à pied en intérieur.
- Course automatique avec le bouton R (toggle).
- Les arbres coupés par Coupe restent coupés définitivement.
- Maintenir B en surfant pour aller plus vite (ou plus lentement si la course auto est activée).
- Le vélo a deux vitesses ; appuyer sur B pour changer de vitesse (vitesse Mach disponible).
- Les casse-têtes à rochers de la Route Victoire ne se réinitialisent plus.
- Déplacement à vitesse de course sous l'eau (Plongée).
- Transition vers les cartes significativement plus rapide.

#### Inventaire et objets
- Poches agrandies ; possibilité de stocker une pile de chaque objet légalement obtenable.
- Deux nouvelles poches : **Médicaments** et **Objets tenus**.
- Tri du sac avec Start.
- Navigation circulaire entre les poches du sac.
- CT à usage illimité (les prix ont été ajustés en conséquence ; les CT ne restaurent pas les PP à l'apprentissage).
  - CT44 Repos (manquable sur le Paquebot) ajoutée au Grand Magasin de Céladopole.
  - CT10 (Puis. Cachée) disponible au Grand Magasin de Céladopole.
- **Baies réductices d'EV** portées d'Émeraude (le bug de la Baie Grenat a été corrigé).
- Quand un Repousse expire, le jeu propose d'en utiliser un autre immédiatement.
- Poké Balls de la Gen III disponibles à l'achat dans Silphe SARL. après libération.
- La Boule Lumière est tenue rarement par les Pikachu sauvages hors de la Forêt de Jade.
- **Honor Ball** à l'achat de multiples de 10 Poké Balls chez un marchant.
- Objets d'évolution par échange disponibles avant le post-game (voir FAQ pour les détails).

#### Combat
- Nouvelles options de vitesse de combat : désactivation des transitions, des animations d'intro, des délais de texte, vitesse de la barre de PV et de la barre d'XP.
- Nouveau style de combat "Switch" (comme Shift mais sans annoncer le Pokémon adverse entrant).
- Appuyer sur B dans le menu "Que va faire [Pokémon] ?" en combat sauvage déplace le curseur sur "Fuite".
- Message affiché en fin de combat si un Pokémon a ramassé un objet via Ramassage.

#### Capacités spéciales (CS) et Rappel
- 8 nouveaux Maîtres des Capacités : Taillade, Roulade, Dynamopoing, Blabla Dodo, Cauchemar, Explosion, Piqué et Vantardise.
- Les Maîtres des Capacités font payer après la première leçon (usage illimité payant). Végé-Attaque, Hydroblast et Rafale Feu sont gratuits et sans condition d'amitié.
- Le Rappel de Capacités peut écraser les CS et enseigner les capacités des pré-évolutions (avec quelques restrictions).

#### Interface utilisateur
- Indicateurs des statistiques affectées par les natures dans l'écran de résumé.
- Appuyer sur Select dans le menu du groupe pour échanger l'ordre sans passer par le menu.
- Appuyer sur Select sur l'écran d'accueil du Pokédex pour ouvrir la dernière entrée consultée.
- Le vrai type et la puissance de **Puis. Cachée** affichés dans le résumé et en combat.
- La vraie puissance de **Retour** et **Frustration** affichée dans le résumé.
- **Ball'Météo**, **Force Nature** et d'autres capacités météo affichent leurs statistiques réelles selon la météo en cours, dans le résumé et en combat.
- Défilement circulaire dans l'écran de résumé entre les Pokémon du groupe.
- Achat de jetons au Casino par tranche de 1 000.

#### Pokémon
- Les 4 formes de Deoxys disponibles ; changement de forme via la météorite au Musée d'Argenta.
- Plus de restriction d'évolution ; les Pokémon évoluent même si leur évolution n'est pas dans le Pokédex de Kanto.
  - Évoli évolue en Mentali en montant de niveau en extérieur avec une grande amitié, et en Noctali en montant de niveau en intérieur.
- Cap EV individuel à **252** (comme dans les générations suivantes).
- **Bracelet Link** (objet clé, obtenu automatiquement lors du scénario) permet d'évoluer les Pokémon qui évoluent par échange. Certains doivent tenir leur objet d'évolution en plus.
- Les Pokémon légendaires non capturés, les Pokémon errants et Ronflex réapparaissent à l'entrée au Panthéon.
- Les 3 bêtes légendaires sont toutes capturable dans une même partie.
- Une femme dans une maison sur l'Île 2 vérifie si un Pokémon a fini son entraînement EV et lui remet le **Ruban Effort**.

#### Pension
- Le Gardien de la Pension signale immédiatement qu'un Œuf est prêt sans changement de zone.
- La Pension envoie le Pokémon récupéré directement en PC si le groupe est plein (sauf s'il tient du Courrier).
- 50% de chance d'héritage de la nature de la mère ou du Métamorph si celui-ci tient une Pierre Stase (portée d'Émeraude).
- Le Gardien de la Pension sur la Route 5 indique le niveau auquel le Pokémon a été déposé.

#### Divers QoL
- Option de texte instantané.
- **Aucune restriction d'échange** : échange possible dès le deuxième Pokémon capturé, avec Rubis/Saphir/Émeraude, Colosseum, et XD.
- Le tutoriel du Vieux Monsieur est sauté si le joueur a au moins 2 Pokémon.
- La 5e étoile de la Carte de Dresseur (mini-jeux Ile 2) peut aussi s'obtenir avec une série de 50 victoires à la Tour de Combat.
- Les infirmières du Centre Pokémon abrègent leur dialogue après 2 étoiles.
- Mécanismes anti-softlock sur Cramois'Île et au Plateau Indigo.
- Un PC est disponible sur le Paquebot dans la salle de repos.

---

### Corrections de bugs vanilla

- Le Rocket du Pont aux Pépites ne peut plus donner des Pépites à l'infini.
- De nombreuses capacités affichent désormais correctement `---` pour leur précision au lieu de 100%.
- Raikou et Entei ne disparaissent plus s'ils utilisent Hurlement contre le joueur.
  - *(Le bug des IV des Pokémon errants ne sera pas corrigé car il affecte la légalité Gen III.)*
- Corrections de plusieurs bugs d'IA (Clairvoyance, Météo, Façade...).
- Correction du bug où les dalles de glace brisées de la Grotte de Glace pouvaient déclencher des Pokémon sauvages.
- Correction du [bug de capacité apprise à l'évolution](https://glitchcity.wiki/wiki/Evolution_move-learning_glitch).

---

### Changements divers

- NORMALEMENT tous les Pokémon du Pokédex National sont obtenables (Kanto/Johto/Hoenn) sauf Groudon/Kyogre/Rayquaza qui ne sont pas encore implémentés (futures mises à jour). Si vous constatez qu'un Pokémon n'est pas obtenable dans le jeu merci de me le faire savoir pour que je corrige ça.
- Effets des capacités spéciales en déplacement portés d'Émeraude. Paratonnerre charge le Pokénav deux fois plus vite.
- L'écran de résumé affiche correctement le lieu de rencontre de tous les Pokémon Gen III, y compris ceux de Rhode.
- Silphe SARL. est peuplée d'employés après sa libération.
- Changements esthétiques et musicaux sur les Îles Sevii pour les rendre plus distinctes.
- La Piste Cyclable force la musique du vélo (comme dans les jeux originaux RBJ).
- Les designs du joueur d'Émeraude apparaissent dans les salles multijoueur si on joue avec Émeraude.
- La boîte de dialogue RBJV originale est disponible en option dans les paramètres (type 11).
- La classe "Flambeur" a été dé-censurée.

---

## FAQ

### Mécaniques de jeu

**De nouvelles capacités ou objets tenus seront-ils ajoutés ?**
Non.

**Le Partage d'Expérience de la Gen VI+ sera-t-il ajouté ?**
Si beaucoup de demandes : pourquoi pas mais non prévu pour le moment.

**Les mécaniques de reproduction seront-elles améliorées ?**
Les mécaniques d'Émeraude ont été portées (sauf le Pichu Electacle). Aucune amélioration supplémentaire n'est prévue.

**Quel est le taux de Shiny ? Sera-t-il augmenté ?**
1/8192, comme en Gen III. Ce taux peut être ajusté sur demande

**Sera-t-il possible de modifier les IV, la Puis. Cachée, la Nature, etc. ?**
Non. Le hack n'a pas vocation à remplacer les jeux vanilla pour obtenir des Pokémon optimisés. L'option IV dans les réglages permet de simuler des IV parfaits pour le calcul des stats sans modifier les IV réels.

---

### Disponibilité des Pokémon

**Des Pokémon des générations suivantes seront-ils ajoutés ?**
Non. J'ai toujours trouvé que ce genre de fonctionnalités cassaient l'immersion. Je ne vais pas dépenser autant de temps et d'énergie pour une fonctionnalité que je n'aime pas. La quasi intégralité du Pokédex national de la GEN 1 à 3 sont disponibles directement dans le jeu sans avoir besoin de faire des échanges. Soit 386 Pokémon. Les quelques Pokémon manquant seront ajoutés dans des mises à jour plus tard.

**Combien de Pokémon sont disponibles ? Tous les Pokémon seront-ils attrapables ?**
99% des 386 Pokémon de la Gen 1 à 3. Les manquants seront ajoutés dans des mises à jour futures. 

**Peut-on obtenir les autres starters de Kanto ? Et le fossile non choisi ?**
Oui, ils sont tous a la fois dispo dans le jeu de base et dans le post game.
- Bulbizarre dans la forêt de Jade, Carapuce dans la route au Nord de Azuria et Salamèche dans la grotte sombre au nord de la Centrale.
- Le starter du Rival peut être obtenu sous forme d'Œuf chez le Gardien de la Pension sur l'Île 4.
- Le starter non choisi est donné par Nina après réparation de la Machine Réseau sur l'Île 1.
- Le fossile non choisi s'obtient dans le Passage de l'Ile 3, auprès du PNJ dans la grotte, après être devenu Champion.

**Peut-on faire évoluer les Pokémon de Kanto en leurs évolutions Johto sans le Pokédex National ?**
Oui. Le jeu ne bloque plus les évolutions vers des Pokémon absents du Pokédex de Kanto.

**Comment faire évoluer Évoli en Mentali ou Noctali ?**
Évoli évolue en **Mentali** en montant de niveau **en extérieur** avec une grande amitié, et en **Noctali** en montant de niveau **en intérieur** avec une grande amitié.

**Peut-on faire évoluer les Pokémon qui évoluent par échange sans échanger ?**
Oui. Le **Bracelet Link** (objet clé obtenu automatiquement lors de la défaite du Rival dans Silphe SARL.) s'utilise comme une Pierre d'Évolution. Les Pokémon qui nécessitent un objet tenu lors de l'échange doivent tenir cet objet avant d'utiliser le Bracelet.

**Les objets d'évolution par échange sont-ils disponibles avant le post-game ?**
Oui. La plupart sont tenus rarement par des Pokémon sauvages :
- **Peau Métal** : Magnéti et Magnéton sauvages.
- **Écaille Draco** : Minidraco et Draco sauvages.
- **Roche Royale** : Tétarte et Flagadoss sauvages.
- **Écaille Océan** : Lanturn sauvage (sous l'eau avec plongée).
- **Dent Océan** : Léviator sauvage (sous l'eau avec plongée).
- **Améliorator** : trouvable dans Silphe SARL.

**Comment obtenir les autres bêtes légendaires ?**
À chaque entrée au Panthéon, une bête légendaire non capturée commencera à errer dans Kanto.

**Comment obtenir les tickets d'événements ?**
- **Vieille Carte** (Mew sur l'Île Lointaine) : devenir Champion, puis parler à M. Fuji chez lui à Lavanville.
- **Ticket Mystique** (Lugia et Ho-Oh sur le Roc Nombri) : obtenir le Pokédex Étendu, puis recevoir le diplôme de complétion du Pokédex de Kanto à la Manoir de Céladopole.
- **Ticket Aurore** (Deoxys sur l'Île Aurore) : atteindre 28 victoires consécutives à la Tour de Combat.
- **Ticket Éon** (Latias et Latios sur l'Île du Sud) : atteindre 56 victoires consécutives à la Tour de Combat. Ces Pokémon sont exclusifs à chaque version ; changer de version via le Système de Clés pour les obtenir tous les deux.

**Comment faire attaquer Simularbre ?**
Avoir une Eau Fraîche dans le sac et lui parler.

**Comment obtenir les autres Pokémon du Dojo Karaté ?**
Faire de la reproduction pour obtenir des Débugant.

---

### Gameplay

**Où est le menu des réglages système ? Je ne peux pas changer la difficulté après une nouvelle partie !**
Après avoir démarré une nouvelle partie, sauvegardez et redémarrez le jeu. Les réglages apparaissent alors dans le menu principal à côté de "Continuer" et "Nouvelle Partie".

**Où débloquer les revanches contre les Champions d'Arène ?**
Une vieille femme dans une maison de l'Île 7 lance la quête secondaire.

**Comment fonctionne le système d'invitation des Champions d'Arène ?**
En montrant à la vieille femme une entrée complète du Mémorydex d'un Champion, son Piafabec part lui porter une invitation. Une fois revenu, le Champion visitera périodiquement le sous-sol de la Maison de Combat. Après la défaite, il retourne à son Arène mais revient s'entraîner automatiquement après un certain temps. Les visites et retours de Piafabec dépendent des pas effectués en dehors de l'Île 7 ; un système anti-malchance évite les trop longues attentes.

**Peut-on rematcher Giovanni ? Je ne peux inviter que sept Champions.**
Giovanni est canoniquement en fuite après avoir quitté son Arène. Seuls les sept premiers Champions sont rematchables.

**Où sont les nouveaux Maîtres des Capacités et que peuvent-ils enseigner ?**
- Taillade — Carmin sur Mer
- Roulade — Route 24
- Vantardise — Route 10
- Dynamopoing — Safrania
- Blabla Dodo — Silphe SARL.
- Cauchemar — Silph SARL.
- Explosion — Cramois'Île
- Piqué — Mt. Braise
*(Les maîtres de Parmanie et Silph Co. n'apparaissent qu'après la libération de la ville.)*

**Où trouver la liste des Maîtres Dresseurs ?**
Les Maîtres Dresseurs sont aux mêmes emplacements que dans Let's Go, sauf ceux de la Route Cyclable, déplacés sur les Routes 16 et 18. Consultez [la liste sur Bulbapedia](https://bulbapedia.bulbagarden.net/wiki/Master_Trainer#Trainer_list) en tenant compte de cela.

---

### Sauvegardes, émulateurs et flashcarts

**Ma sauvegarde vanilla RF/VF est-elle compatible avec RFVF+ ?**
Non. Le format de sauvegarde a été modifié ; les sauvegardes vanilla sont incompatibles (et vice-versa).

**Mon émulateur/flashcart ne fonctionne pas avec RFVF+ !**
L'émulateur recommandé sur PC est [mGBA](https://mgba.io/downloads.html). Si votre émulateur nécessite un patch pour faire fonctionner les jeux vanilla RF/VF, il sera incompatible avec RFVF+.

---

### Divers

**Où obtenir la CT10 (Puis. Cachée) ? Ramassage ne la donne plus !**
La CT10 a été retirée de la table de Ramassage et est désormais vendue au Grand Magasin de Céladopole.

Table de Pickup modifiée :
- 15% — Baie Oran
- 10% — Baie Ceriz, Baie Oran², Baie Pêche, Baie Laurier, Baie Aspic, Baie Kaki
- 5% — Max PP, Super Bonbon, Pépite, Baie Pomeg
- 1% — Baie Kelpsy, Baie Qualot, Baie Hondew, Baie Grepa, Baie Tamato
