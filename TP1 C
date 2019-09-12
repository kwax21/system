#include <stdlib.h>
#include <stdio.h>
#include "Liste.h"

Maillon* newListe(int a)
{
	Maillon *racine = malloc ( sizeof *racine);
	if ( racine =! NULL )
	{
		racine->pred = racine;
		racine->next = racine;
		racine->val = a;
		tete = racine;
	}
	return tete;
};

Maillon* Suivant(void)
{
	tete = tete->succ;
	return tete;
};

Maillon* Suppr(void) 
{
	if(tete->succ == tete)
	{
		free(tete);
		tete = NULL;
	}
	else
	{
		tete->succ->pred = tete->pred;
		tete->pred->succ = tete->succ;
		free(tete);
		tete = NULL;
	}
	return tete;
};

Maillon* Add(int a)
{
	Maillon *new = malloc ( sizeof *new);
	if ( new =! NULL )
	{
		new->val = a;
		new->pred = tete->pred;
		new->succ = tete->succ->pred;
		tete->pred->succ = ma;
		tete->pred = ma;
	}
	return tete;
};
