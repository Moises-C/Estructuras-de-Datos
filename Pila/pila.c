#include "pila.h"

void
agregar (struct pila **Pila, int dato)
{
  struct pila *nuevapila = (struct pila *) malloc (sizeof (struct pila));
  if (nuevapila != NULL)
    {
      nuevapila->dato = dato;
      nuevapila->siguiente = *Pila;
      *Pila = nuevapila;
    }
  else
    printf ("\nLa pila esta vacia");
}


void
quitar (struct pila **Pila)
{

  struct pila *aux = *Pila;
  int dato = aux->dato;
  *Pila = aux->siguiente;
  free (aux);
}

void
mostrar (struct pila **Pila)
{
  struct pila *aux = *Pila;
  if (*Pila != NULL)
    {
      while (aux != NULL)
	{
	  printf (" %d ->", aux->dato);
	  aux = aux->siguiente;
	}
      printf ("NULL\n");
    }
  else
    printf ("\n La pila esta vacia");

}
