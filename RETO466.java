//TOP GAP TEAM
import java.util.*;

public class RETO466
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner (System.in);
        
        int casos = sc.nextInt();
        sc.nextLine();
        
        for (int i = 0; i < casos; i++)
        {
            String[] linea = sc.nextLine().split(" ");
            
            String a = linea[0];
            String b = linea[1];
            
            String resultado = "";
            
            int menor = (a.length() < b.length() ? a.length() : b.length());
            
            int mayor = (a.length() > b.length() ? a.length() : b.length());
            
            int acarreo = 0;
            
            for(int j = 0; j< menor; j++)
            {
                int calculo = Integer.parseInt(a.charAt(a.length() - j - 1) + "") 
                    * Integer.parseInt(b.charAt(b.length() - j - 1) + "");
                    
                calculo += acarreo;
  
                acarreo = calculo / 10;
                if(j != menor-1)
                    resultado = calculo%10 + resultado;
                else
                    resultado = calculo + resultado;
            }
            
            for (int k = resultado.length(); k < mayor; k++)
            {
                    System.out.print("0");
            }
            System.out.println(resultado);
        }
    }
}
