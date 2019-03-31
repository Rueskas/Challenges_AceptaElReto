//Rueskas
// Seconds to HH:MM:SS
//Pos13 0.02 Sec
#include <iostream>
using namespace std;

int main()
{

    int time, h, m, s, casos;
    scanf("%d",&casos);

    for (int i = 0 ; i < casos; i++)
    {
        scanf("%d",&time);

        m = time / 60;
        s = time % 60;
        h = m / 60;
        m = m % 60;
        
        printf("%02d:%02d:%02d\n", h,m,s);
    }
}
