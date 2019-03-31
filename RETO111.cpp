//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    string elemento;
    string configuracion[19] =
        {"1s", "2s", "2p", "3s", "3p", "4s", "3d",
            "4p" , "5s", "4d", "5p", "6s", "4f", "5d", 
                            "6p", "7s", "5f", "6d", "7p"};
    int valor[19] = {2,2,6,2,6,2,10,6,2,10,6,2,14,10,6,2,14,10,6};
    int Z, suma, posicion;
    cin>>elemento;
    if (elemento != "Exit")
        scanf("%d", &Z);
        

    while (elemento != "Exit")
    {
        if(Z == 0)
        {
            cout<<"1s0"<<endl;
        }
        else
        {
            suma = 0;
            posicion = 0;
            for (int i = 0 ;  suma < Z ; i++)
            {
                suma += valor[i];
                posicion++;
            }
            
            if (suma > Z)
            {
                suma = 0;
                for (int i = 0 ; i < posicion-1; i++)
                {
                    suma += valor[i];
                    cout<<configuracion[i]<<valor[i]<<" ";
                }
                Z -= suma;
                cout<<configuracion[posicion-1]<<Z<<endl;
            }
            else
            {
                for (int i = 0 ; i < posicion-1 ; i++)
                    cout<<configuracion[i]<<valor[i]<<" ";
                cout<<configuracion[posicion-1]<<valor[posicion-1]<<endl;;
            
            }
        }
    cin>>elemento;
    if (elemento != "Exit")
        scanf("%d", &Z);
    } 
    return 0;
}
