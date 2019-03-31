//Sergio Ruescas
#include <iostream>
int main()
{
    int casos;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        int insecto, aracnido, crustaceo,escalopendra, anillo, total = 0;
        
        scanf("%d %d %d %d %d", &insecto, &aracnido, &crustaceo, &escalopendra, &anillo);
        
        total += insecto * 6;
        total += aracnido * 8;
        total += crustaceo * 10;
        total += anillo * escalopendra * 2;
        printf("%d\n",total);
    }
    
    return 0;
}
