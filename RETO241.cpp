//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        int petalos;
        scanf("%d",&petalos);
        
        if(petalos / 3 > 0 && petalos != 5)
        {
            printf("%d\n", petalos%3);
        }
        else
            printf("IMPOSIBLE\n");
    }
    return 0;
}
