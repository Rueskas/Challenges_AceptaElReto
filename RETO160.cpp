// Sergio Ruescas

#include <iostream>
using namespace std;

int main()
{
    int size, number;
    scanf("%d", &size);
    while (size != 0)
    {
        int matriz[size][size], sumUp = 0, sumDown = 0, start, start2;
        
        for ( int i = 0 ; i < size ; i++ )
        {
            for ( int j = 0; j < size ; j++ )
            {
                scanf("%d", &number);
                matriz[i][j] = number;
            }
        }
        
        for ( int i = 0 ; i < size ; i++ )
        {
            for ( start = i + 1 ; start < size ; start++ )
             sumUp += matriz[i][start];
            if ( i != 0)
            {
                for ( start2 = i - 1 ; start2 >= 0 ; start2--)
                    sumDown += matriz[i][start2];
            }
        }

        if (sumUp == 0 || sumDown == 0)
            printf("SI\n");
        else
            printf("NO\n");
        scanf("%d", &size);
        
    }
    return 0;
   
}
