#include "main.h"

/**
* _islower - Entry point
* @c: The character to be checked.
* Description: Écrivez une fonction qui vérifie la présence de minuscules.
*
*Prototype : int _islower(int c);
*Renvoie 1 si c est en minuscule
*Renvoie 0 sinon
*
*Pour info: la bibliothèque standard propose une fonction similaire : islower.
*Exécutez man islower pour en savoir plus.
*
* Return: 0
*/

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
