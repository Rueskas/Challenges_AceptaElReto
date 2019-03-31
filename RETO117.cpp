//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int casos;
    char name[100], soy[5];
    scanf("%d",&casos);
    for (int i = 0; i < casos ; i++)
    {
        scanf("%s %s",soy, name);
        printf("Hola, %s.\n",name);
    }
    return 0;
}
