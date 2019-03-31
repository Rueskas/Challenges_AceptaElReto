//Sergio Ruescas
#include <iostream>
int main()
{
    int casos;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        int anchura, altura, total = 0;
        
        scanf("%d %d", &anchura, &altura);
        total += anchura * (altura+1);
        total += altura * (anchura+1);
        printf("%d\n",total);
    }
    
    return 0;
}
