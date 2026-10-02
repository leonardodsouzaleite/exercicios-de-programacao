import java.util.Scanner;

public class Main {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    float a = input.nextFloat();
    float b = input.nextFloat();

    float media = (float) ((a * 3.5 + b * 7.5) / 11);

    System.out.printf("MEDIA = %.5f\n", media);

  }
}
