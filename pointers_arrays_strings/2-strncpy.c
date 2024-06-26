#include "main.h"

/**
 * _strncpy - copia una cadena de caracteres
 * @dest: destino
 * @src: fuente
 * @n: cantidad de bytes desde src
 *
 * Return: el puntero hacia dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copia hasta n caracteres desde src a dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* Rellena con '\0' los caracteres restantes si src es más corta que n */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
