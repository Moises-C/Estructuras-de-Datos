#include "listaenlazada.h"

void
inicializar ()
{
  struct Lista *lista = (struct Lista *) malloc (sizeof (struct Lista));
  if (lista != NULL)
    {
      lista = NULL;
      menu (lista);
      free (lista);
    }
  else
    printf ("\n Sin espacio");
}

void
menu (struct Lista *lista)
{
  int opcion;
  printf
    ("\tMENU\n\n1.Insertar al inicio\n2.Insertar al final\n3.Borrar primero \n4.Borrar otro elemento\n5.mostrar\n6.Salir\n: ");
  scanf ("%d", &opcion);
  switch (opcion)
    {
    case 1:
      system ("clear");
      lista = pedir (lista, opcion);
      menu (lista);
      break;
    case 2:
      system ("clear");
      lista = pedir (lista, opcion);
      menu (lista);
      break;
    case 3:
      lista = borrarprimero (lista);
      menu (lista);
      break;
    case 4:
      lista = borrarelemento (lista);
      menu (lista);
      system ("clear");
      break;
    case 5:
      system ("clear");
      mostrar (lista);
      menu (lista);
      break;
    case 6:
      system ("clear");
      printf ("Hasta pronto\n");
      break;
    default:
      printf ("\nFavor de ingresar una opcion valida\n");
      menu (lista);
      break;
    }
}

struct Lista *
pedir (struct Lista *lista, int opcion)
{
  int dato = 1;
  printf ("Si no desea ingresar mas datos, presione 0\n");
  while (dato != 0)
    {
      printf ("\nIngrese un dato: ");
      scanf ("%d", &dato);
      if (dato != 0)
	lista = insertar (lista, dato, opcion);
    }
  return lista;
}


struct Lista *
insertar (struct Lista *lista, int dato, int opcion)
{
  struct Lista *aux;
  struct Lista *listanueva = (struct Lista *) malloc (sizeof (struct Lista));
  if (listanueva != NULL)
    {
      listanueva->dato = dato;
      listanueva->siguiente = NULL;
      if (lista == NULL)	//Insertar dato si la lista esta vacia
	lista = listanueva;
      else
	{
	  if (opcion == 1)
	    {			//Insertar al inicio
	      listanueva->siguiente = lista;
	      lista = listanueva;
	    }
	  else
	    {			// Insertar al final
	      aux = lista;
	      while (aux->siguiente != NULL)
		aux = aux->siguiente;
	      aux->siguiente = listanueva;
	    }
	}
    }
  else
    printf ("\n Sin espacio");
  return lista;
  free (listanueva);
}


void
mostrar (struct Lista *lista)
{
  while (lista != NULL)
    {
      printf ("%d->", lista->dato);
      lista = lista->siguiente;
    }
  printf ("NULL\n");
}

struct Lista *
borrarprimero (struct Lista *lista)
{
  struct Lista *temporal = lista;
  if (lista != NULL)
    {
      lista = lista->siguiente;
      free (temporal);

    }
  else
    {
      printf ("\n Lista Vacia");
    }
  return lista;
}

struct Lista *
borrarelemento (struct Lista *lista)
{
  struct Lista *aux = lista;
  int dato;
  printf ("\nQue dato desea borrar: ");
  scanf ("%d", &dato);
  if (lista != NULL)
    {
      while ((aux->siguiente)->dato != dato)
	{
	  aux = aux->siguiente;
	}
      free (aux->siguiente);
      aux->siguiente = (aux->siguiente)->siguiente;
    }
  else
    printf ("\nLista llena");
  return lista;
}
