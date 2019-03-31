//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos, n1, n2;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        scanf("%d-%d",&n1,&n2);

        if (n2 % 2 == 0 && n1 == n2+1)
            printf("SI\n");
        else if (n1 % 2 == 0 && n2 == n1+1)
            printf("SI\n");
        else
            printf("NO\n");
    }
    return 0;
}
