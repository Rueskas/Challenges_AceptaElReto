//TOP GAP TEAM
#include <iostream>
using namespace std;

int main()
{
    int total, posicion, mas, result, diferencia;
    do
    {
        scanf("%d %d %d", &total, &posicion, &mas);
        if (total == 0)
            return 0;
        result = posicion + mas;
        if (result <= total)
            printf("%d\n", result);
        else if ( result > total)
        {
            diferencia = total - posicion;
            mas -= diferencia;
            total -= mas;
            printf("%d\n", total);
        }

        
    }   while ( total != 0 );
    return 0;
}
