
public class BinarySearchCeiling {
    public static void main(String[] args) {
        int[] arr = {-5,-1,0,12,15,17,20,22,24,26,27,35,64,98};
        int target = 18;
        int ans = ceilingBS(arr, target);
        System.out.println(ans);
// find the smallest no. that is>= to the target element
    }
    static int ceilingBS(int[] arr, int target){
        // but if target element is greater than the greatest no. of the array
        if(target > arr[arr.length-1]){
            return -1;
        }
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
        return start;
    }
}
