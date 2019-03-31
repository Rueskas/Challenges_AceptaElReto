//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    string horaactual, hora, minuto;
    int horas, minutos, horatotal, minutototal, suma, cn = 60, vc = 23;
    cin>>horaactual;
    while (horaactual != "00:00")
    {
        hora = horaactual[0];
        hora += horaactual[1];
        minuto = horaactual[3];
        minuto += horaactual[4];
        
        horas = atoi(hora.c_str());
        minutos = atoi(minuto.c_str());
        
        horatotal = vc - horas;
        horatotal *= 60;
        
        minutototal = cn - minutos;
        suma = minutototal + horatotal;
        printf("%d\n",suma);
        cin>>horaactual;
    }

    return 0;
}

