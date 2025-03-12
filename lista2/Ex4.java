package lista2;

import java.util.Scanner;

public class Ex4 {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        double notaGA;
        double notaGB;

        System.out.print("Digite sua nota no grau A: ");
        notaGA = input.nextDouble();

        System.out.print("Digite sua nota no grau B: ");
        notaGB = input.nextDouble();

        double notaFinal = (notaGA*3.33 + notaGB*6.67)/10;

        if(notaFinal >= 6) {
            System.out.println("Sua nota final no semestre é "+notaFinal+". Parabéns! Você passou.");
        }
        else {
            System.out.println("Sua nota no semestre é "+notaFinal+". Vai precisar fazer Grau C! :(");
        }
    }
}
