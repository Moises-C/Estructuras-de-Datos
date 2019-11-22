#include "cola.h"

int
main ()
{
  struct cola *primero = NULL;
  struct cola *ultimo = NULL;
  insertar (&primero, &ultimo);
  insertar (&primero, &ultimo);
  insertar (&primero, &ultimo);
  mostrar (&primero);
  eliminar (&primero);
  mostrar (&primero);
  return 0;
}
