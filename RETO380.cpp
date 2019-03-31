//Rueskas
#include <iostream>
using namespace std;

int main()
{
    int gastos, casos,suma;
    scanf("%d",&casos);
    while (casos != 0)
    {
        suma = 0;
        for (int i = 0; i < casos; i++)
        {
            scanf("%d",&gastos);
            suma+=gastos;
        }
        printf("%d\n",suma);
        scanf("%d",&casos);
    }

    return 0;
}
