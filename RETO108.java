//Rueskas
import java.util.*;

public class RETO108
{
    public static void main(String[] args)
    {   
        Scanner sc = new Scanner(System.in);
         Map<String, Double> data = new HashMap<>();
        data.put("D", 0.);
        data.put("A", 0.);
        data.put("M", 0.);
        data.put("I", 0.);
        data.put("C", 0.);
        String input;
        String[] split;
        int count = 0, countComidas = 0;
        Double max, min, average = 0., averageComida = 0., actual;
        String maxCat, minCat;
        while(sc.hasNextLine())
        {
            input = sc.nextLine();
            if(input.equals("N 0"))
            {
                max = data.get("D");
                min = data.get("D");
                minCat = maxCat = "D";
                if(!average.equals(0.) && count != 0)
                {
                    average = average/count;
                }
                
                if(!averageComida.equals(0.) && countComidas != 0)
                {
                    averageComida = averageComida/countComidas;
                }
                
                for(String key : data.keySet())
                {
                    if(data.get(key) > max) {
                        max = data.get(key);
                        maxCat = key;
                    }
                    else if(data.get(key) < min){
                        min = data.get(key);
                        minCat = key;
                    }
                }
                
                for(String key : data.keySet())
                {
                    if(data.get(key).equals(max) && !(key.equals(maxCat))) {
                        maxCat = "EMPATE";
                    }
                    if(data.get(key).equals(min) && !(key.equals(minCat))){
                        minCat = "EMPATE";
                    }
                    
                }
                
                switch(maxCat)
                {
                    case "D" : System.out.print("DESAYUNOS#"); break;
                    case "A" : System.out.print("COMIDAS#"); break;
                    case "M" : System.out.print("MERIENDAS#"); break;
                    case "I" : System.out.print("CENAS#"); break;
                    case "C" : System.out.print("COPAS#"); break;
                    default : System.out.print("EMPATE#"); break;
                }
                
                switch(minCat)
                {
                    case "D" : System.out.print("DESAYUNOS#"); break;
                    case "A" : System.out.print("COMIDAS#"); break;
                    case "M" : System.out.print("MERIENDAS#"); break;
                    case "I" : System.out.print("CENAS#"); break;
                    case "C" : System.out.print("COPAS#"); break;
                    default : System.out.print("EMPATE#"); break;
                }
                
                System.out.printf("%s\n",(averageComida>average)?"SI":"NO");
                
                data.clear();
                data.put("D", 0.);
                data.put("A", 0.);
                data.put("M", 0.);
                data.put("I", 0.);
                data.put("C", 0.);
                countComidas = 0;
                averageComida = 0.;
                count = 0;
                average = 0.;
                
            }
            else
            {
                split = input.split(" ");
                
                //JAVA 8
                //data.replace(split[0], data.get(split[0]), 
                //        data.get(split[0])+ Double.parseDouble(split[1]));
                
                actual = data.get(split[0]);
                data.remove(split[0]);
                data.put(split[0], actual+Double.parseDouble(split[1]));
                
                if(split[0].equals("A")){
                    countComidas++;
                    averageComida += Double.parseDouble(split[1]);
                }
                count++;
                average += Double.parseDouble(split[1]);
            }
        }
    }
}
