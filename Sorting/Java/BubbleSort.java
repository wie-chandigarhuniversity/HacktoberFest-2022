package Sorting.Java;

public class BubbleSort {

    void bubbleSort(int arr[]){
        int n = arr.length;

        for(int i =0; i< n-1; i++){
            for(int j = 0; j< n-i-1; j++){
                if (arr[j] > arr[j+1]){
                    //This will swap arr[j+1] and arr[j]

                    int temp_val = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp_val;
                }
            }
        }
    }


    //TO PRINT THE ARRAY

    void arrPrint(int arr[]){
        int n = arr.length;
        for(int i = 0; i<n; ++i){
            System.out.println(arr[i]+" ");
        }
        System.out.println();
    }

    //MAIN DRIVER CODE

    public static void main(String[] args) {
        BubbleSort obj = new BubbleSort();
        int arr[] = {54,43,35,22,12,15,69};
        obj.bubbleSort(arr);
        System.out.print("Sorted Array: ");
        obj.arrPrint(arr);

    }
}

//THIS CODE WAS CONTRIBUTED BY UTKARSH PANDEY
