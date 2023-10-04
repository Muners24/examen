#include <stdio.h>
#include <stdlib.h>

int perfectNum(int n);

#define N 50
int main()
{  
    //contador-aumulador-divisiores
    int n,rep;
    do
    {
        do
        {
            system("cls");
            //leemos y validamos el rango
            printf("Ingresa el rango para encontrar numeros perfectos: ");
            scanf("%d",&n);
            if(n<=0)
            {
                printf("\nNumero invalido\n");
                system("pause");
            } 
        }while(n<=0);

        if(perfectNum(n)==0)
        {
            printf("\nNo hay numeros perfectos en ese rango\n");
        }

        printf("\n\nIngresa cualquier numero para repetir");
        printf("\n0 para salir\n");
        scanf("%d",&rep);
    }while(rep!=0);
    printf("\nSaliendo del programa\n");
    system("pause");
    return 0;
}

int perfectNum(int n)
{
    int i,j,k,perfect,cprft=0,div[N];
        for(i=1;i<=n;i++)
        {
            //inicializamos el acumulador del numero perfecto en 0
            perfect=0;
            //el indice k se usa para guardar los divisores
            k=0;
            for(j=1;j<i;j++)
            {
                //busca divisores
                if(i%j==0)
                {
                    //si j es divisor lo acumula
                    //guarda el divisor
                    perfect+=j;
                    div[k]=j;
                    k++;
                }
            }
            //verifica que cumpla definicion de numero perfecto
            if(perfect==i)
            {
                //Acumula el contador de numeros perfectos
                cprft++;
                //Imprime el numero perfecto
                printf("\nNumero perfecto: ");
                printf(" %d\n",i);
                //Imprime sus divisores
                printf("Sus divisores son: ");
                for(j=0;j<k;j++)
                {
                    printf(" %d",div[j]);
                }    
            }
        }
    return cprft;
}