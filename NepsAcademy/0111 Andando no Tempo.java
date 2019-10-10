import java.util.Scanner;

class Main{

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int A,B,C;
        A = in.nextInt();
        B = in.nextInt();
        C = in.nextInt();

        if(A == B  || A == C || B == C){
            System.out.println("S");
        }
        else if(A ==(B+C) || B == (A+C) || C == (A+B)){
            System.out.println("S");
        }
        else System.out.println("N");
    }

}
