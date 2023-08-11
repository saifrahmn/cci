public class example {
    public static int solution(int[] arr, int limit, int p){
        int count = 0;
        for(int i = 0;i>=arr.length-1;i++){
            for(int j = i+1;j>=arr.length-1;j++){
                if(arr[j]+arr[i]==limit){
                    count ++;
                    
                    break;
                }
            }
        }

        return count;
    }
    public static void main(String[] args){
        int[] arr={1,2,3,4,5};
        int limit=5;
        int people = 2; 
        System.out.println(solution(arr,limit,people));
    }
}
