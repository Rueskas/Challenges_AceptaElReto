//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos, n1, n2;
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        scanf("%d %d",&n1,&n2);

        (n1 != 25 || n2 != 12)? printf("NO\n") : printf("SI\n");
    }
    return 0;
}
