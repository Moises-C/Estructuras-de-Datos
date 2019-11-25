#ifndef _COLA_H_
#define _COLA_H_

#include <stdio.h>
#include <stdlib.h>

struct cola
{
  int dato;
  struct cola *siguiente;
};

void insertar (struct cola **, struct cola **, int dato);
void mostrar (struct cola **);
void eliminar (struct cola **, struct cola **);

#endif
