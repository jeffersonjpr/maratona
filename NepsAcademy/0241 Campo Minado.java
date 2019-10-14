import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, x;
        int vetor[];
        n = in.nextInt();
        vetor = new int[(n + 2)];
        for(int i = 1; i < n + 1; i++){
            x = in.nextInt();
            if(x == 1){
                vetor[i-1] += 1;
                vetor[i] += 1;
                vetor[i+1] += 1;
            }
        }
        for(int i = 1; i < n + 1; i++){
            System.out.println("" + vetor[i]);
        }
    }
    
}
