//TopGap

#include <iostream>
using namespace std;

int main()
{
    int desnivel, casos;
    
    while(scanf("%d%d",&desnivel,&casos) == 2)
    {
        int masBaja, anterior,  actual = 0;
        bool apto = true;

        for (int i = 0; i < casos; i++)
        {
            if ( i == 0)
            {
                scanf("%d", &masBaja);
                anterior = masBaja;
            }
            else
            {
                scanf("%d", &actual);
                if (actual <= anterior )
                {
                    if ( anterior - masBaja > desnivel)
                    {
                        apto = false;
                    }
                    masBaja = actual;
                }
                if (i == casos - 1)
                {
                    if ( actual - masBaja > desnivel)
                    {
                        apto = false;
                    }
                }
                anterior = actual;
            }
        }
        
        if (apto)
            printf("APTA\n");
        else
            printf("NO APTA\n");
    }
        
    
    return 0;
}
