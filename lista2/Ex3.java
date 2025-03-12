package lista2;

import java.util.Scanner;

public class Ex3 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double precoQuilo = 40.00;
        double pesoPrato;

        System.out.print("Digite o peso do prato do cliente: ");
        pesoPrato = input.nextDouble();

        System.out.print("O prato custará R$"+precoQuilo*pesoPrato);
    }
}
