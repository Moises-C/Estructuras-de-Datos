#include "cola.h"

void
insertar (struct cola **primero, struct cola **ultimo, int dato)
{
  struct cola *colanueva = (struct cola *) malloc (sizeof (struct cola));
  colanueva->dato = dato;
  colanueva->siguiente = NULL;
  if (*primero == NULL)
    *primero = colanueva;
  else
    (*ultimo)->siguiente = colanueva;
  *ultimo = colanueva;
}

void
eliminar (struct cola **primero, struct cola **ultimo)
{
  int dato = (*primero)->dato;
  struct cola *aux = *primero;
  if (*primero != NULL && *ultimo != NULL)
    {
      if (*primero == *ultimo)
	{
	  *primero = NULL;
	  *ultimo = NULL;
	}
      else
	*primero = (*primero)->siguiente;
    }
  else
    printf ("\nLa cola esta vacia");
  free (aux);
}

void
mostrar (struct cola **primero)
{
  struct cola *aux = *primero;
  if (*primero == NULL)
    {
      printf ("\nCola vacia");
    }
  else
    {
      while (aux != NULL)
	{
	  printf ("%d ->", aux->dato);
	  aux = aux->siguiente;
	}
      printf ("NULL\n");
    }
}
