public class Report {   
   public static void main(String[] args) {
      long start = System.currentTimeMillis(); // 시작하는 시점 계산
      for (int a = 1; a <= 100; a++) {
      // 여기부터 첫줄
      for (int i = 0; i < a - 1; i++) {
         System.out.print(" ");
      }
      System.out.print("*\n");
      // 여기부터 중간
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
      // 여기부터 마지막줄
      if (a > 1) {
         for (int i = 0; i < 2 * a - 1; i++) {
            System.out.print("*");
         }
         System.out.println("\na = "+ a);
         System.out.println();
      }
      }
      long end = System.currentTimeMillis(); // 프로그램이 끝나는 시점 계산
      System.out.println("실행 시간 : " + (end - start) + "ms"); // 결과 출력
   }
   
}