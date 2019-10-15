import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        long col0 = 0,col1 = 0,col2 = 0;
        
        for(int i = 0; i < 3; i++){
            col0 += in.nextLong();
            col1 += in.nextLong();
            col2 += in.nextLong();
            
        }
        
        System.out.println("Coluna 0: "+col0);
        System.out.println("Coluna 1: "+col1);
        System.out.println("Coluna 2: "+col2);
    }
}
