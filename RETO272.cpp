//Sergio Ruescas
#include <iostream>
using namespace std;

void ToBase6(int number)
{
    int divisor, resto;
    if ( number < 6 )
    {
        printf("%d", number);
    }
    else
    {
        divisor = number / 6;
        resto = number%6;
        
        ToBase6(divisor);
        
        printf("%d", resto);
    }
    
    
}

int main()
{
    int number, count;
    scanf("%d",&count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d",&number);
        ToBase6(number);
        printf("\n");
    }
    
    return 0;
}
