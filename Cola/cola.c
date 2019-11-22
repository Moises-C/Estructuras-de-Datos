#include "cola.h"

void
insertar (struct cola **primero, struct cola **ultimo)
{
  struct cola *colanueva = (struct cola *) malloc (sizeof (struct cola));
  printf ("\nIngrese un dato: ");
  scanf ("%d", &colanueva->dato);
  if (*primero == NULL)
    {
      *primero = colanueva;
      (*primero)->siguiente = NULL;
      *ultimo = colanueva;
    }
  else
    {
      (*ultimo)->siguiente = colanueva;
      colanueva->siguiente = NULL;
      *ultimo = colanueva;
    }
}

void
eliminar (struct cola **primero)
{
  struct cola *aux = *primero;
  int dato;
  printf ("¿\nQue elemento deseas borrar?");
  scanf ("%d", &dato);
  if (*primero != NULL)
    {
      if (aux->dato == dato)
	{
	  *primero = (*primero)->siguiente;
	  free (aux);
	}
      else
	{
	  while ((aux->siguiente)->dato != dato)
	    {
	      aux = aux->siguiente;
	    }
	  free (aux->siguiente);
	  aux->siguiente = (aux->siguiente)->siguiente;
	}
    }
  else
    printf ("\nLista vacia");
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
    }
}
