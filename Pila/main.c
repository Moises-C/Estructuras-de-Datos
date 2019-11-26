#include "pila.h"

int
main ()
{
  struct pila *Pila = NULL;
  agregar (&Pila, 1);
  agregar (&Pila, 2);
  agregar (&Pila, 3);
  mostrar (&Pila);
  quitar (&Pila);
  mostrar (&Pila);
  return 0;
}
