public class BinarySearchFloor {
    public static void main(String[] args) {
        int arr[] = {-5,-1,0,12,15,17,20,22,24,26,27,35,64,98};
        int target = 13;
        int ans = floor(arr, target);
        System.out.println(ans);

    }
    static int floor(int[] arr, int target){
        int start = 0;
        int end = arr.length-1;
        //boolean isAsc =
        while(start <= end)
        {
            int mid= start +(end - start)/2;
            if(target < arr[mid]){
                end = mid-1;
            } else if(target > arr[mid]){
                start = mid + 1;
            }else{
                return mid;
            }
        }
        return end;
    }
}
