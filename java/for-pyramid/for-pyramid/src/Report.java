public class Report {   
   public static void main(String[] args) {
      long start = System.currentTimeMillis(); // �����ϴ� ���� ���
      for (int a = 1; a <= 100; a++) {
      // ������� ù��
      for (int i = 0; i < a - 1; i++) {
         System.out.print(" ");
      }
      System.out.print("*\n");
      // ������� �߰�
      for (int i = 0; i < a - 2; i++) {
         for (int k = 2; k < a - i; k++) {
            System.out.print(" ");
         }
         System.out.print("*");
         for (int k = 0; k < 2 * i + 1; k++) {
            System.out.print(" ");
         }
         System.out.print("*\n");
      }
      // ������� ��������
      if (a > 1) {
         for (int i = 0; i < 2 * a - 1; i++) {
            System.out.print("*");
         }
         System.out.println("\na = "+ a);
         System.out.println();
      }
      }
      long end = System.currentTimeMillis(); // ���α׷��� ������ ���� ���
      System.out.println("���� �ð� : " + (end - start) + "ms"); // ��� ���
   }
   
}