//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos, acuario, grande, menos, suma;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        suma = 0;
        scanf("%d %d %d",&acuario,&grande, &menos);        
      	for (int j = 0; j < acuario ; j++)
        {
            suma = suma+ grande;
            grande = grande- menos;
        }
        printf("%d\n", suma);
    }
    return 0;
}
