#ifndef _PILA_H_
#define _PILA_H_

#include <stdio.h>
#include <stdlib.h>

struct pila
{
  int dato;
  struct pila *siguiente;
};

void agregar (struct pila **);
void mostrar (struct pila **);
void quitar (struct pila **);

#endif
