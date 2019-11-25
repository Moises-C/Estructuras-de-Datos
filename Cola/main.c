#include "cola.h"

int
main ()
{
  struct cola *primero = NULL;
  struct cola *ultimo = NULL;
  insertar (&primero, &ultimo, 1);
  insertar (&primero, &ultimo, 2);
  insertar (&primero, &ultimo, 3);
  mostrar (&primero);
  eliminar (&primero, &ultimo);
  eliminar (&primero, &ultimo);
  mostrar (&primero);
  return 0;
}
