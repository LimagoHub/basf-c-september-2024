#include <stdio.h>
#include "Schwein.h"





int main()
{
	int anzahlSchweine;
	printf("Bitte Anzahl der Schweine eingeben: ");
	scanf_s("%d", &anzahlSchweine, sizeof(int));

	Schwein** stall = malloc(sizeof(Schwein *) * anzahlSchweine);
	for (int i = 0; i < anzahlSchweine; ++i)
	{
		Schwein* s = malloc(sizeof(Schwein));
		printf("Bitte Namen Schweins Nr %d eingeben: ", i );
		scanf_s("%s", s->name, 20);
		s->gewicht = 10;
		stall[i] = s;
	}
	char buffer[100];
	for (int i = 0; i < anzahlSchweine; ++i)
	{
		printf("%s\n", Schwein_ToString(stall[i], buffer, 100));
		
	}

	for (int i = 0; i < anzahlSchweine; ++i)
	{
		free(stall[i]);

	}


	free(stall);
}
