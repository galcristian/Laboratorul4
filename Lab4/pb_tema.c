#include <stdio.h>
#include <string.h>

typedef struct binar
{
	int bit;
	struct binar *urm;
}nod;

nod *adauga(nod *prim, int bit)
{
	nod *p, *q;
	p = (nod *)malloc(sizeof(nod));

	p->bit = bit;
	p->urm = NULL;
	if (p == NULL)
	{
		printf("Eroare la alocarea memoriei!\n");
		exit(0);
	}
	if (prim == NULL)
		return p;
	else
	{
		q = prim;
		while (q->urm != NULL)
			q = q->urm;
		p->urm = q->urm;
		q->urm = p;
	}
	return prim;
}

void afisare(nod *prim)
{
	nod *q;
	q = prim;
	while (q != NULL)
	{
		printf("%d ", q->bit);
		q = q->urm;
	}
}

int main()
{
	nod *prim;
	prim = NULL;
	int i, n;

	printf("Introduceti numarul zecimal: ");
	scanf("%d", &n);
	for (i = 0; i <= 7; i++)
		prim = adauga(prim, (n & 1 << i) >> i);
	afisare(prim);
	printf("\n");

	system("pause");
	return 0;
}
