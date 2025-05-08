#!/bin/bash
# Ce script convertit une palette extraite en format texte en format PAL.

input="graphics/summary_screen/palette.txt"
output="graphics/summary_screen/palette.pal"

# Nettoyer le fichier palette.txt pour ne garder que les valeurs RGB
grep -oP '\(\K[0-9,]+(?=\))' $input | while read color; do
    # Convertir les valeurs RGB en format hexadécimal
    r=$(echo $color | cut -d ',' -f1)
    g=$(echo $color | cut -d ',' -f2)
    b=$(echo $color | cut -d ',' -f3)
    
    # Ajouter les couleurs à un fichier PAL
    echo -n -e "\x$r\xg\xb" >> $output
done
