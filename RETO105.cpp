//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int diamenor, diamayor;
    double mayor, menor, entrada, media;
    int dia = 1;
    do
    {
    
        cin >> entrada;
        media += entrada;
        if (entrada == -1 && dia == 1)
            break;
        if (dia == 1)
        {
            mayor = entrada;
            menor = entrada;
            diamayor = 1;
            diamenor = 1;
            dia++;
            continue;
        }
        if (entrada == mayor)
            diamayor = 8;
        if (entrada == menor)
            diamenor = 8;
        if (entrada > mayor)
        {
            mayor = entrada;
            diamayor = dia;
        }
        if (entrada < menor)
        {
            menor = entrada;
            diamenor = dia;
        }
        if (dia == 6)
        { 
                    switch(diamayor)
                    {
                        case 1 : cout << "MARTES "; break;
                        case 2 : cout << "MIERCOLES "; break;
                        case 3 : cout << "JUEVES "; break;
                        case 4 : cout << "VIERNES "; break;
                        case 5 : cout << "SABADO " ; break;
                        case 6 : cout << "DOMINGO "; break;
                        default: cout<<"EMPATE ";break;
                    }

                    switch(diamenor)
                    {
                        case 1 : cout << "MARTES "   ; break;
                        case 2 : cout << "MIERCOLES "; break;
                        case 3 : cout << "JUEVES "   ; break;
                        case 4 : cout << "VIERNES "  ; break;
                        case 5 : cout << "SABADO "   ; break;
                        case 6 : cout << "DOMINGO "  ; break;
                        default: cout<<"EMPATE ";break;
                    }
            if (media / 6 < entrada)
                cout<<"SI"<<endl;
            else
                cout<<"NO\n";
                
            media = 0;
            dia = 0;
        }
        dia++;
    } while (entrada != -1 || dia != 1);
    return 0;
}
