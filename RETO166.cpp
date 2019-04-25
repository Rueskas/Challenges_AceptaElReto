//Rueskas
#include <iostream>
using namespace std;

int main()
{
    int channel1, channel2;
    do
    {
        scanf("%d %d",&channel1, &channel2);
        if(channel1 != 0)
        {
            if(channel1 < channel2)
            {
                int aux = channel2;
                channel2 = channel1;
                channel1 = aux;
            }
            
            if(channel1 - channel2 <= 49)
            {
                printf("%d\n", channel1 - channel2);
            }
            else
            {
                printf("%d\n", 99 - (channel1 - channel2));
            }
        }
    } while (channel1 != 0);
    return 0;
}

