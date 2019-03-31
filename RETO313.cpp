//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int primero, ultimo, casos;
    scanf("%d", &casos);
    for (int i = 0; i < casos ; i++)
    {
        scanf("%d %d", &primero, &ultimo);
        
        if(ultimo + primero < 0)
            printf("NO\n");
        else
            printf("SI\n");
    }
    return 0;
}

