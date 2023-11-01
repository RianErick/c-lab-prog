import java.util.Scanner;

public class A5 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    
    System.out.print("Informe o primeiro número: ");
    int numero1 = scanner.nextInt();
    
    System.out.print("Informe o segundo número: ");
    int numero2 = scanner.nextInt();
    
    System.out.print("Informe o terceiro número: ");
    int numero3 = scanner.nextInt();
    
    int soma = somatoria(numero1, numero2, numero3);
    
    System.out.println("A soma de " + numero1 + " + " + numero2 + " + " + numero3 + " é: " + soma);
    
    scanner.close();
    }
    
    public static int somatoria(int numero1, int numero2, int numero3) {
      return numero1 + numero2 + numero3;
    }
}

