public class Loop {
   public static void main(String[] args) {
      long start = System.currentTimeMillis(); // 시작하는 시점 계산
      int n = 1;

      for (int a = 1; a <= 2000; a++) {
         // 여기부터 첫줄
         for (int i = 0; i < a - 1; i++) {
            n = n + i;
         }
         n = n + a;
         // 여기부터 중간
         // 중간줄 규칙 : 라인 -> i -> k
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
      long end = System.currentTimeMillis(); // 프로그램이 끝나는 시점 계산
      System.out.println("실행 시간 : " + (end - start) + "ms"); // 결과 출력
   }
}