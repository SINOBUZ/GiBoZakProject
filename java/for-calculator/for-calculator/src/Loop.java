public class Loop {
   public static void main(String[] args) {
      long start = System.currentTimeMillis(); // �����ϴ� ���� ���
      int n = 1;

      for (int a = 1; a <= 2000; a++) {
         // ������� ù��
         for (int i = 0; i < a - 1; i++) {
            n = n + i;
         }
         n = n + a;
         // ������� �߰�
         // �߰��� ��Ģ : ���� -> i -> k
         for (int i = 0; i < a - 2; i++) {
            for (int k = 2; k < a - 1; k++) {
               n = n + k;
            }
            n = n + i;

            for (int k = 2; k < a - 1; k++) {
               n = n + k;
            }
            n = n + i;
         }
         if (a > 1) {
            for (int i = 0; i < 2 * a - 1; i++) {
               n = n + i;
            }
            n = n + a;
         }
      }
      System.out.println("a = " + n + "\n");
      long end = System.currentTimeMillis(); // ���α׷��� ������ ���� ���
      System.out.println("���� �ð� : " + (end - start) + "ms"); // ��� ���
   }
}