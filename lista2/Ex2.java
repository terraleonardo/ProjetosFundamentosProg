package lista2;

import java.util.Scanner;

public class Ex2 {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        float cotacaoDolar;
        float qtdDolar;

        System.out.print("Digite a cotação atual do dólar para reais: ");
        cotacaoDolar = input.nextFloat();

        System.out.println("$1 USD equivale a R$"+cotacaoDolar+" BRL. Quantos dólares você gostaria de comprar?");
        qtdDolar = input.nextFloat();

        System.out.println("Para comprar $"+qtdDolar+" USD, serão cobrados R$"+cotacaoDolar*qtdDolar+" BRL.");
    }
}
