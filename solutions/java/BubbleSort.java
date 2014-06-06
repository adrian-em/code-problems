import java.util.Arrays;
class BubbleSort {
    public static void bubbleSort(int[] arr) {
        int isSorted=0;
        while (isSorted==0) {
            isSorted=1;
            for (int i = 0; i < arr.length-1; i++) {
                if (arr[i] > arr[i+1]) {
                    int t = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = t;
                    isSorted=0;
                }
            }
        }
    }
    public static void main(String[] args) {
        int[] arr = new int[]{3, 1, 5, 4, 20, 7, 6, 10, 9};
        System.out.println(Arrays.toString(arr));
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));
    }
}