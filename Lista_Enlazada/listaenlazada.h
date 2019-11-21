#ifndef _LISTAENLAZADA_H_
#define _LISTAENLAZADA_H_

#include <stdio.h>
#include <stdlib.h>

struct Lista
{
  int dato;
  struct Lista *siguiente;
};

void inicializar ();
void mostrar (struct Lista *);
void menu (struct Lista *);
struct Lista *insertar (struct Lista *, int, int);
struct Lista *pedir (struct Lista *, int);
struct Lista *borrarprimero (struct Lista *);
struct Lista *borrarelemento (struct Lista *lista);

#endif
