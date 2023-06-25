
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <Interfaz\Interfaz.h>


int encontrar_usuario(char *usuario)
{
  *usuario = getenv("USERPROFILE");

  if (usuario == NULL)
  {
    printf("No se pudo obtener el directorio del usuario.");
    return 1;
  }
}


int verificar_direccion(FILE *archivo, char direccion[],char usuario)
{
  if (archivo == NULL)
  {
    sprintf(direccion, "%s\\OneDrive\\Escritorio\\Preguntas.txt", usuario);
  }

  if (archivo == NULL)
  {
    sprintf(direccion, "%s\\Escritorio\\Preguntas.txt", usuario);
  }

  if (archivo == NULL)
  {
    sprintf(direccion, "%s\\Desktop\\Preguntas.txt", usuario);
  }

  if (archivo == NULL)
  {
    printf("No se pudo crear el archivo.\n");
    return 1;
  }
}