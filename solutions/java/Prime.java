class Prime {
    public static boolean isPrime(int p) {
        for (int i = 2; i < p; i++) {
            if (p % i == 0 && p != i) {
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        for (int i = 1; i < 101; i++) {
            System.out.println(i + " -> " + isPrime(i));
        }
    }
}