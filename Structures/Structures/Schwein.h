#pragma once
#include <stdlib.h>
#include <string.h>
typedef struct schwein {

	char name[20];
	int gewicht;

} Schwein;

char* Schwein_ToString(Schwein *s, char* buffer, size_t maxSize);

void Schwein_SetName(Schwein *s, char* neuername);

char * Schwein_GetName(Schwein* s, char* buffer, size_t maxSize);


