import java.util.Scanner;

/**
 * Main
 */
public class Main {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    String nome = sc.nextLine();
    Double fixo = sc.nextDouble();
    Double venda = sc.nextDouble();

    Double total = fixo + (venda * 0.15);

    System.out.printf("TOTAL = R$ %.2f\n", total);
  }
}
