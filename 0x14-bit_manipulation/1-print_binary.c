#include "main.h"

/**
 * print_binary - Affiche la représentation binaire d'un nombre.
 * @n: Le nombre à convertir et à afficher en binaire.
 *
 * Description: Cette fonction utilise une approche récursive pour 
 * parcourir chaque bit du nombre donné. Elle déplace le bit le plus 
 * à droite à chaque appel récursif (en utilisant l'opération de décalage 
 * à droite) et l'affiche. La fonction s'arrête lorsque tous les bits 
 * ont été traités.
 */
void print_binary(unsigned long int n)
{
    // Appel récursif pour traiter les bits du nombre sauf le dernier
	if (n > 1)
		print_binary(n >> 1);

    // Affiche le dernier bit du nombre (0 ou 1)
	_putchar((n & 1) + '0');
}

