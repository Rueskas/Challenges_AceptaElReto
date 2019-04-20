//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int pieces, length;
    scanf("%d",&pieces);
    while(pieces != 0)
    {
        for (int i = 1; i <= pieces; i++)
        {
            if (pieces % i == 0 && pieces/i - i>= 0)
            {
                length = pieces/i;
            }
            else if (pieces/i - i< 0)
            {
                break;
            }
        }
        printf("%d\n", length);
        
        scanf("%d",&pieces);
    }
    return 0;
}

