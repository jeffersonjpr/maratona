import java.util.HashMap;
import java.util.Map;

//https://www.codewars.com/kata/interactive-dictionary/java

public class Dictionary{
    //criando mapa hash parar guardar as definições
    Map<String,String> dicio = new HashMap<>();
    
    /*
    public Dictionary(){
        // your code
    }
    */
    
    //inserindo na tabela hash
    public void newEntry(String key, String value){
        dicio.put(key, value);
    }

    //verificando se a palavra ja foi definida
    public String look(String key){
        if( dicio.containsKey(key) ){
            return dicio.get(key);
        }
        else{
            return "Cant find entry for " + key;
        }
    }
}
