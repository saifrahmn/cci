import java.util.ArrayList;

public class ques {
    public static int[] solution(int[] arr){
        int len=arr.length-1;
        Boolean[] val = new Boolean[len];
        ArrayList<Integer> arr_new = new ArrayList<Integer>();
        for (int i=0;i<=len;i++){
            int v=arr[i];
            if(val[v]){
                for(int j=0;j<=len;j++){
                    if(arr[j]==v){
                        arr[j].remove;
                    }

                }
            else{
                
            }
            }
        }
    }
    public static void main(String[] args){
        int[] arr={6,1,6,3,3};
        System.out.println("" +solution(arr));
    }
}
