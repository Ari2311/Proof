#include <stdio.h>
#include <stdlib.h>


     int opcion,opcion2, reg, i;
   struct datos
    {
      char nombre[60];
      int  edad;
      char ciudad[20];
  }persona[20]; // Array de struct con datos para 3 personas.
         
void Agregar(int i, char * nombre, int edad, char * ciudad);
void Mostrar(void);
void Buscar(void);

int main(void)
         {
do{
     puts("¿Qué deseas hacer?\n");
     puts("\t 1.-Agregar Registros\n");
     puts("\t 2.- Mostrar Registros\n");
     puts("\t 3-. Buscar Registros\n");
     scanf("%d", &opcion);
     fflush(stdin);
             
     if(opcion>3){
            }
     else if (opcion==1){
         printf("\n¿Cuántos registros deseas hacer?:");
         scanf("%d", &reg);
         getchar();
     }
             
     switch(opcion)
     {
         case 1:
             Agregar(i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
             break;
        case 2:
            Mostrar();
             break;
         case 3:
                 Buscar();
             break;
             default:
            printf("OPCIÓN NO VALIDA ");
            exit(0);
             }
}while(opcion<4);
    }//Sale break

             
 void Agregar(int i, char * nombre, int edad, char * ciudad)
{
     
     for (i=0; i<reg; i++){
         puts("Nombre:");
             fflush(stdin);
             fgets(persona[i].nombre, 60 , stdin);
                puts("Edad:");
                scanf("%d", &persona[i].edad);
                getchar();
                puts("Ciudad:");
             fflush(stdin);
             fgets(persona[i].ciudad, 20 , stdin);
     }
     
     for (i=0; i<reg; i++)
        {
          printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s",i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
       }
}
    void Mostrar()
{
    
    for(i=0; i<reg; i++){
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s", i+1, persona[i].nombre, persona[i].edad, persona[i].ciudad);
}
    return;
        }

void Buscar()
{
             printf("\nIntroduce cuál es el número de registro que buscas: ");
             scanf("%d", &i);
        printf("Registro:%d\n\tNombre:%s\tEdad:%d\n\tCiudad:%s", i, persona[i-1].nombre, persona[i-1].edad, persona[i-1].ciudad);
    getchar();
}


