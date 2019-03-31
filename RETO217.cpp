//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int numero;
    scanf("%d", &numero);
    
    while (numero != 0)
    {
            if (numero % 2 == 0)
                printf("DERECHA\n");
            else 
                printf("IZQUIERDA\n");              
            scanf("%d", &numero);
    } 
}
