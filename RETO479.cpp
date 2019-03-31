//TOP GAP TEAM
#include <iostream>
using namespace std;
#define gc getchar_unlocked

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}
int main()
{
    int filas, columnas, casos;
    int x, y;
    string direccion;
    
    scanint(filas);
    scanint(columnas);
    while(filas != 0 || columnas != 0)
    {
        char mapa[filas][columnas];
        
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                mapa[i][j] = getchar();
                if(mapa[i][j] == '\n')
                    mapa[i][j] = getchar();
            }
        }
        
        scanint(casos);
        
        for(;casos > 0; casos--)
        {
            scanint(x);
            scanint(y);
            cin >> direccion;
            x--;y--;
            if(direccion == "ARRIBA")
            {
                for (int i = x;;)
                {
                    x--;
                    if(x < 0)
                    {
                        printf("NINGUNO\n");
                        break;
                    }
                    else if(mapa[x][y] == 'X')
                    {
                        printf("%d\n", i-x);
                        break;
                    }
                }
            }
            else if(direccion == "ABAJO")
            {
                for (int i = x;;)
                {
                    x++;
                    if(x == filas)
                    {
                        printf("NINGUNO\n");
                        break;
                    }
                    else if(mapa[x][y] == 'X')
                    {
                        printf("%d\n", x-i);
                        break;
                    }
                }
            }
            else if(direccion == "DERECHA")
            {
                for (int i = y;;)
                {
                    y++;
                    if(y == columnas)
                    {
                        printf("NINGUNO\n");
                        break;
                    }
                    else if(mapa[x][y] == 'X')
                    {
                        printf("%d\n", y-i);
                        break;
                    }
                }
            }
            else if(direccion == "IZQUIERDA")
            {
                for (int i = y;;)
                {
                    y--;
                    if(y < 0)
                    {
                        printf("NINGUNO\n");
                        break;
                    }
                    else if(mapa[x][y] == 'X')
                    {
                        printf("%d\n", i-y);
                        break;
                    }
                }
            }
        }
        printf("---\n");
        scanint(filas);
        scanint(columnas);
    }
    return 0;
}
