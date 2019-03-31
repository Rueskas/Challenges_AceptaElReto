//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos, anyo;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {

        scanf("%d",&anyo);
        
        if ( anyo % 4 == 0)
        {
            if (anyo % 100 == 0)
            {
                if ( anyo % 400 == 0 )
                {
                    printf("29\n");
                    continue;
                }
            printf("28\n");
            continue;
            }
        printf("29\n");
        continue;
        }
        printf("28\n");
    }
    return 0;
}
