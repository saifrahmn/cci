package Ch8RecursionAndDyanamic;

public class sumSwap2 {
    static int sum(int[] array){
        int sum =0;
        for(int a:array){
            sum=sum+a;
        }
        return sum;
    }

    static Integer target(int[] arrayA,int[] arrayB){
        int sumA=sum(arrayA);
        int sumB=sum(arrayB);
        if((sumA-sumB)%2!=0){
            return null;
        }
        return (sumA-sumB)/2;
    }

    static int[] sumSwap(int[] arrayA,int[] arrayB){
        Integer target = target(arrayA,arrayB);
        if(target==null){return null;}
        for(int a:arrayA){
            for(int b:arrayB){
                if(target==a-b){
                    int[] val={a,b};
                    return val;
                }
            }
        }
        return null;
    }

    public static void main(String args[]){
        int[] a= {4,1,2,1,1,2};
        int[] b={3,6,3,3};
        int[] c=sumSwap(a,b);
        for(int val:c){
            System.out.println(val);
        }
    }
}
