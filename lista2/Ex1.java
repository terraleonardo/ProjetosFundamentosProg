package lista2;

import java.util.Scanner;

public class Ex1 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int tempoMin;

        System.out.print("Digite o tempo em minutos: ");
        tempoMin = input.nextInt();

        System.out.println(tempoMin+" minuto(s) equivale(m) a "+tempoMin*60+" segundos");
    }
}