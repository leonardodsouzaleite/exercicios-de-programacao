public class ex006 {
  public static void main(String[] args) {
    int vetor[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    a = 1;
    whila(a != 0);
    {
      a = 0;
      for (int i = 0; i < 9; i++) {
        int t1 = vetor[i];
        int t2 = vetor[i + 1];
        if (t1 > t2) {
          int temporario = t2;
          t2 = t1;
          t1 = temporario;
          a++;
        }
        vetor[i] = t1;
        vetor[i + 1] = t2;
      }
    }
  }
}
