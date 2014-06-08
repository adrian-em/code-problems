class Multiples3And5 {
    public static void main(String[] args) {
        long sum = 0;
        for (int i = 0;i < 1000;i++) {
            if (i % 3 == 0 || i % 5 == 0) {
                sum += i;
            }
        }
        System.out.println(sum);
    }
}