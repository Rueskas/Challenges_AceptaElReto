//Sergio Ruescas
#include <iostream>
using namespace std;


int main()
{
    int cases, factorial;
    scanf("%d", &cases);
    
    for ( int i = 0 ; i < cases ; i++)
    {
        scanf("%d", &factorial);
        
        switch(factorial)
        {
            case 0:
            case 1:printf("%d\n", 1); break;
            case 2:printf("%d\n",2); break;
            case 3:printf("%d\n",6); break;
            case 4:printf("%d\n",4); break;
            default: printf("%d\n",0);break;
        }
        
    }
    
}

