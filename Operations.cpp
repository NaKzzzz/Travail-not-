#include "Operations.h"

int addition(int a, int b)
{
	int resultat;
	
	resultat = a + b;
	
	return resultat;
}

int soustraction(int a, int b)
{
	int resultat;
	
	resultat = a - b;
	
	return resultat;
}

int exposant(int nb, int exp)
int factoriel(int nb)

int	NBpremier(int nb)
{
	int	div;

	div = 2;
	if (nb < 2)
		return (0);
	while (div <= nb / 2)
	{
		if (nb % div == 0)
			return (NBpremier(nb + 1));
		div++;
	}
	return (nb);
}