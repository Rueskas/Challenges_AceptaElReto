//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int can;
    char c;
    do
    {
        cin>>can>>c;
        int esp = can;
        int draw = can;
        for ( int i = 0 ; i < can ; i++)
        {
            for ( int j = 1 ; j < esp ; j++ )
                printf(" ");
            for ( int j = 1 ; j <= draw ; j++ )
                printf("%c", c);
            esp--;
            draw = draw + 2;
            printf("\n");
        }
        for ( int i = 0 ; i < can ; i++)
        {
            draw = draw - 2;
            esp++;
            if (i >=1)
            {
                for ( int j = 1 ; j < esp ; j++ )
                    printf(" ");
                for ( int j = 1 ; j <= draw ; j++ )
                    printf("%c", c);
    
    
                printf("\n");
            }
        }
    } while (can != 0 && c != 0);
    return 0;
}
