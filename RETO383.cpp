//Rueskas
//Pos 10
//0.0092 Sec
#include <iostream>
using namespace std;

int main()
{
    int cases, pages, min, reach;
    scanf("%d", &cases);
    for (int i = 0; i < cases; i++)
    {
        scanf("%d", &pages);
        int jumps[pages];
        for (int j = 0; j < pages; j++)
        {
            scanf("%d", &jumps[j]);
        }
        
        min = jumps[pages - 1];
        reach = jumps[pages-2] - jumps[pages - 1];
        
        for (int z = pages-2; z >= 0 ; z--)
        {
            if(jumps[z] < min)
                min = jumps[z];
            else if (jumps[z] - min > reach)
                reach = jumps[z] - min;
        }
        
        printf("%d\n", reach);
    }
    return 0;
}
