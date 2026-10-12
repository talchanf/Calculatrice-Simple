# Calculatrice simple (C++)

Calculatrice en ligne de commande qui effectue une opération entre deux nombres, puis propose d'en refaire une autre.

## Fonctionnement

1. Le programme demande un premier nombre, un opérateur (`+`, `-`, `*`, `/`) puis un second nombre.
2. Il affiche le résultat.
3. Il demande si tu veux faire un autre calcul (`y` ou `n`).

Les nombres sont lus en `double`, donc les décimaux sont acceptés.

## Compiler et lancer

```
g++ SimpleCalculator.cpp -o calculatrice
./calculatrice
```

Sous Windows : `calculatrice.exe`.

## Limites

- Un opérateur invalide arrête le programme au lieu de reposer la question.
- La division par zéro n'est pas gérée.
- Une saisie qui n'est pas un nombre n'est pas vérifiée.

## Contexte

Petit exercice pour s'entraîner aux bases du C++ : entrées/sorties, boucle `while`, conditions.
