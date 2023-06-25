
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


#include <Logica\Datos.h>
#include <Interfaz\Interfaz.h>


int main()
{
  char usuario;


  encontrar_usuario(&usuario);


  char direccion[100];


  sprintf(direccion, "%s\\OneDrive\\Desktop\\Preguntas.txt", usuario);


  FILE *archivo = fopen(direccion, "w");

  verificar_direccion(&archivo, direccion,usuario);

  fclose(archivo);


  char *motivo[] = {"color", "animal", "forma de agua"};
  char *rasgo[] = {"tu persepcion sobre ti mismo", "sobre lo que buscas en tu pareja", "lo que buscas en la sexualidad"};
  pseudo p[3];


  archivo = fopen(direccion, "wt");


  int i;


  for (i = 0; i < 3; i++)
  {
    fflush(stdin);
    system("cls");
    printf("Introduzca su %s favorito.\n", motivo[i]);
    fgets(p[i].motivo, sizeof(p[i].motivo), stdin);
    printf("Introduzca 3 motivos profundos por el cual sea su %s favorito\n", motivo[i]);
    printf("1=");
    fgets(p[i].dato1, sizeof(p[i].dato1), stdin);
    printf("2=");
    fgets(p[i].dato2, sizeof(p[i].dato2), stdin);
    printf("3=");
    fgets(p[i].dato3, sizeof(p[i].dato3), stdin);
  }


  fprintf(archivo, "Datos curiosos sobre ti:\n\n");


  for (i = 0; i < 3; i++)
  {
    fflush(stdin);
    fprintf(archivo, "\nTu %s favorito habla sobre %s\n", motivo[i], rasgo[i]);
    fprintf(archivo, "Vuelve a leer lo que escribiste e interioriza:\n");
    fprintf(archivo, "1=%s", p[i].dato1);
    fprintf(archivo, "2=%s", p[i].dato2);
    fprintf(archivo, "3=%s", p[i].dato3);
    printf("\n");
  }


  fclose(archivo);


  printf("Ahora revisa tu escritorio y busca el .txt llamado preguntas :)\n\n\n");
  system("pause");


  return 0;
}
