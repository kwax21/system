typedef struct Liste Liste;

struct Liste
{
	int valeur;
	Liste *next;
	Liste *pred;
} Maillon ;

Maillon *tete;
