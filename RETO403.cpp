//TOP GAP TEAM
#include <iostream>
using namespace std;

int main()
{
    int number, count, number2;
    scanf("%d", &count);
    const int min = 4050;
    const int max = 10800;
    for (int i = 0; i < count; i++)
    {
        cin>>number>>number2;
        
        if ( min * number2 <= number && max * number2 >= number)
            printf("SI\n");
        else
             printf("NO\n");
    }
    return 0;
}
