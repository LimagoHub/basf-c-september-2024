#include "Schwein.h"

#include <stdio.h>

char* Schwein_ToString(Schwein *s, char* buffer, size_t maxSize)
{
	sprintf_s(buffer, maxSize, "Schwein: Name=%s, Gewicht=%d", s->name, s->gewicht);
	return buffer;
}

void Schwein_SetName(Schwein *s, char* neuername)
{
	strcpy_s(s->name, sizeof(s->name), neuername);
}

char * Schwein_GetName(Schwein* s, char* buffer,  size_t maxSize)
{
	strcpy_s(buffer, maxSize, s->name);
	return buffer;
}