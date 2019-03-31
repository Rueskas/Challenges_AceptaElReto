//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    long long int n, total;
    int casos;
    scanf("%d", &casos);
    for( int i = 0 ; i < casos ; i++)
    {
        cin>>n;
        total = (n + 1) * n/2;
        if(n != 0 && total % 3 == 0)
            printf("SI\n");
        else
            printf("NO\n");
    
    }
    return 0;
}


