#include "pila.h"

void
agregar (struct pila **ultimo)
{
  struct pila *nuevapila = (struct pila *) malloc (sizeof (struct pila));
  printf ("\nIngrese un dato: ");
  scanf ("%d", &nuevapila->dato);
  nuevapila->siguiente = *ultimo;
  if (ultimo == NULL)
    *ultimo = nuevapila;
  else
    *ultimo = nuevapila;
}


void
quitar (struct pila **ultimo)
{
  struct pila *aux = (struct pila *) malloc (sizeof (struct pila));
  aux = *ultimo;
  struct pila *anterior = (struct pila *) malloc (sizeof (struct pila));
  anterior = NULL;
  int quedato = 0, buscado = 0;
  printf (" \nDato a eliminar: ");
  scanf ("%d", &quedato);
  if (*ultimo != NULL)
    {
      while (aux != NULL && buscado != 1)
	{
	  if (aux->dato == quedato)
	    {
	      if (aux == *ultimo)
		{
		  *ultimo = (*ultimo)->siguiente;
		}
	      else
		{
		  anterior->siguiente = aux->siguiente;
		}
	      buscado = 1;
	    }
	  anterior = aux;
	  aux = aux->siguiente;
	}
      if (buscado == 0)
	{
	  printf ("\n sin resultado\n\n");
	}
      else
	{
	  free (anterior);
	}
    }
  else
    {
      printf ("\n La pila se encuentra vacia\n\n");
    }
}

void
mostrar (struct pila **ultimo)
{
  struct pila *aux = *ultimo;
  while (aux != NULL)
    {
      printf (" %d ->", aux->dato);
      aux = aux->siguiente;
    }

}
