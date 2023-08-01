package Ch8RecursionAndDyanamic;

public class sumSwap {
    static int sum(int[] a){
        int sum=0;
        for(int i=0;i<a.length;i++){
            sum = sum + a[i];
        }
        return sum;
    }
    static int[] Swap(int[] a,int[] b){
        int sumA=sum(a),sumB=sum(b);
        for(int one:b){
            for(int two:a){
                if(sumA-two+one==sumB-one+two){
                    int[] arr = {one,two};
                    return arr;
                }
            }
        }
        return null;

    }
    public static void main(String args[]){
        int[] a = {4,1,2,1,1,2};
        int[] b = {3,6,3,3};
        int[] c = Swap(a,b);
        for(int i=0;i<2;i++){
            System.out.println(c[i]);
        }
    }
}
