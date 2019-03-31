//TOP GAP TEAM
#include <iostream>
using namespace std;

int main()
{
    int alto, ancho, count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &ancho, &alto);
        int multi = ancho * alto;
        if ( multi % 2 == 0)
        {
            multi /= 2;
            printf("%d %d\n", multi, multi);
        }
        else
        {
            multi /= 2;
            printf("%d %d\n", multi+1, multi);
        }
    }
    return 0;
}
