package lista2;

import java.util.Scanner;

public class Ex5 {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);

        double precoLitro;
        double valorCompra;

        System.out.print("Digite o preço do litro da gasolina:");
        precoLitro = input.nextDouble();

        System.out.print("Digite o valor que o cliente quer pagar:");
        valorCompra = input.nextDouble();

        System.out.println("Serão abastecidos "+valorCompra/precoLitro+" litros de combustível.");
    }
}
