#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrar(int,int,char []);
int main()
{
    char frase[500];
    int x=0,contador=1,inicio=0,fin;

    printf("Ingrese una frase: ");
    gets(frase);
    fflush(stdin);

    while(frase[x]!='\0')
    {
        if(frase[x]==' ')
        {
            if(frase[x+1]==' ')
            if(frase[x]==' ') x++;
              contador++;
              mostrar(inicio,fin=x-1,frase);
              inicio=x+1;
        }
        x++;
    }
    mostrar(inicio,fin=x-1,frase);
    printf(" \n La cantidad de palabras ingresadas en la frase son :%d\n",contador);
    return 0;
}
void mostrar(int i,int f,char v[])
{
  int x;
  for(x=i;x<=f;x++)
        printf("%c",v[x]);
  printf("\n");
}
;
