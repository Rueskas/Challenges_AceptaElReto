//TOP GAP TEAM
import java.util.*;

public class RETO344
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int casos, machos, hembras;
        String cadena;
        casos = sc.nextInt();
        sc.nextLine();
        for (int i = 0; i < casos; i++)
        {
            machos = hembras = 0;
            
            sc.nextInt();
            sc.nextLine();
            cadena = sc.nextLine();
            for (int j = 0; j < cadena.length(); j++)
            {
                if (cadena.charAt(j) == 'H')
                    hembras++;
                else if (cadena.charAt(j) == 'M')
                    machos++;   
            }
            if(machos == hembras)
                System.out.println("POSIBLE");
            else
                System.out.println("IMPOSIBLE");
        }
        
        
    }
        
}
