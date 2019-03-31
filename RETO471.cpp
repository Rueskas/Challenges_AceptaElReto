//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        int inicio, pinchazo;
        scanf("%d %d",&inicio,&pinchazo);
        
        if ((pinchazo - inicio > 180 && pinchazo - inicio <360) || (pinchazo - inicio < 0 && pinchazo - inicio > -180 ))
            printf("DESCENDENTE\n");
        
        else if ((pinchazo - inicio > 0 && pinchazo - inicio <180) || (pinchazo - inicio > -360 && pinchazo - inicio < -180 ))
            printf("ASCENDENTE\n");
        
        else
            printf("DA IGUAL\n");
    }
    return 0;
}
