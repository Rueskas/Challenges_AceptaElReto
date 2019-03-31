//Sergio Ruescas
#include <iostream>
using namespace std;

int main()
{
    int pares, impares, barra;
    string codigo, digito, pais;
    ios::sync_with_stdio(false);
    do
    {   
        pares = 0;
        impares = 0;
        digito = "";
        pais="";
        cin>>codigo;
        if (codigo == "0")
            break;
        if (codigo.length() < 8)
        while (codigo.length() < 8)
            codigo = "0" + codigo;
        if (codigo.length() > 8 && codigo.length() < 13)
        while (codigo.length() < 13)
            codigo = "0" + codigo;
        for (unsigned int i = 0 ; i <= codigo.length() - 1; i++)
        {
            digito = codigo[i];
            if (i == codigo.length())
            {
                barra += atoi(digito.c_str());
                break;
            }
            if ((i+1) % 2 == 0)
            {
                pares += atoi(digito.c_str());
            }
            else
            {
                impares += atoi(digito.c_str());
            }
        }
        if (codigo.length() == 8)
        {
            impares *= 3;
            barra = impares + pares;
            if (barra % 10 == 0)
                cout<< "SI\n";
            else
                cout<<"NO\n";
        }
        else if (codigo.length() == 13)
        {
            pares *= 3;
            barra = impares + pares;
            for (unsigned int i = 0 ; i < 3 ; i++)
            {
                digito = codigo[i];
                pais += digito;
                if (i == 1 && (pais == "70" || pais == "50"))
                    break;
                else if (i == 0 && pais == "0")
                    break;
            }
            if (barra % 10 == 0)
            {
                cout<< "SI ";
                    
                if (pais == "0") cout<<"EEUU\n";
                else  if (pais == "50") cout<<"Inglaterra\n";
                else  if (pais == "70") cout<<"Noruega\n";
                else if (pais == "380") cout<<"Bulgaria\n";
                else   if (pais == "539") cout<<"Irlanda\n";
                else if (pais == "560")  cout<<"Portugal\n";
                else  if (pais == "759") cout<<"Venezuela\n";
                else if (pais == "850") cout<<"Cuba\n";
                else if (pais == "890") cout<<"India\n";
                else cout<<"Desconocido\n";
            }
            else
                cout<<"NO\n";
        }
    } while (codigo != "0");
    return 0;
}
