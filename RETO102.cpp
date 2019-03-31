//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int n, num, cm, cmanterior;
    bool constante1 = false;
    do
    {
    cin>>n;
    if ( n == 0)
        break;
    cm = 0;
    cmanterior = 0;
    for (int i = 1 ; i <= n*n ; i++)
    {
        scanf("%d", &num);
        cm += num;
        cout<<cmanterior<<" "<<cm<<" "<<num<<endl;
        if (i == n)
        {
            cmanterior = cm;
            cm = 0;

        }
        if (cmanterior == cm)
        {
            cm = 0;
            constante1=true;
        }
        else
            constante1 = false;

    }
    if (constante1 == true)
    cout<<"DIABOLICO"<<endl;
    else 
        cout<<"NO"<<endl;
    } while (n != 0);
    return 0;
}
