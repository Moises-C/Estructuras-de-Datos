#include "pila.h"

int
main ()
{
  struct pila *ultimo = NULL;
  agregar (&ultimo);
  agregar (&ultimo);
  agregar (&ultimo);
  mostrar (&ultimo);
  quitar (&ultimo);
  mostrar (&ultimo);
  free (ultimo);
  return 0;
}
