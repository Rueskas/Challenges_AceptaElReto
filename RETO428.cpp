//TOP GAP TEAM
#include <iostream>
using namespace std;

int main()
{
    int number, count;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &number);
        int cuatros = 0;
        do 
        {
            
            if( number % 5 == 4 )
                cuatros++;
            number /= 5;
            
            
        } while (number > 0);
        
        if (cuatros > 1)
            printf("SI\n");
        else
            printf("NO\n");
    }
    
        
    
    return 0;
}
