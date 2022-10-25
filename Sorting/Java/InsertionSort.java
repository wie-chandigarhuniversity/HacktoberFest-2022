package Sorting.Java;
import java.util.Arrays;

public class InsertionSort {
    void insertionSort(int arr[]){
        int size = arr.length;

        for(int i = 1; i < size; i++){
            int k = arr[i];
            int j = i - 1;


            //The above code will compare k(key) with each element on the left side of itself until an element
            //smaller than that is found.

            while(j >= 0 && k < arr[j]){
                arr[j+1] = arr[j];
                --j;
            }

            //Place k after the element which is smmaller than k

            arr[j+1] = k;

        }
    }

    //MAIN DRIVER CODE
    public static void main(String[] args) {
        int[] arr = {5,4,2,1,6,7,9};
        InsertionSort sort = new InsertionSort();

        sort.insertionSort(arr);
        System.out.println("Sorted Array: ");
        System.out.println(Arrays.toString(arr));
    }
}
