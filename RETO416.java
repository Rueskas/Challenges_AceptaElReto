//TOP GAP
import java.util.*;

class Cumple2{
    int dia;
    int mes;
}
public class RETO416
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int input;
        String[] cadena;
        do
        {
            input = sc.nextInt();
            sc.nextLine();
           
            if (input != 0)
            {
                Cumple2[] cumpleanyos = new Cumple2[input];
                cadena = sc.nextLine().split(" ");
                boolean encontrado = false;
                for (int i = 0; i < input; i++)
                {
                    cumpleanyos[i] = new Cumple2();
                    cumpleanyos[i].dia = Integer.parseInt(cadena[i].split("/")[0]); 
                    cumpleanyos[i].mes = Integer.parseInt(cadena[i].split("/")[1]); 
                }
                
                for (int i = 0; i < input-1; i++)
                {
                    for (int j = i+1; j < input; j++)
                    {
                        if (cumpleanyos[i].dia == cumpleanyos[j].dia && 
                            cumpleanyos[i].mes == cumpleanyos[j].mes && encontrado == false)
                            {
                                System.out.println("SI");
                                encontrado = true;
                            }
                    }
                    
                }
                if(encontrado == false)
                    System.out.println("NO");
                
            }
        }while (input != 0);
        
        
    }
        
}
