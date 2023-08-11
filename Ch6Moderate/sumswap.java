package Ch6Moderate;

public class sumswap {
    static int sum(int[] array){
        int sum=0;
        for(int a: array){
            sum = a + sum;
        }
        return sum;
    }
    static int[] swap(int[] arrayA,int[] arrayB){
        int sumA= sum(arrayA);
        int sumB= sum(arrayB);
        for(int a: arrayA){
            for(int b: arrayB){
                if(sumA-a+b==sumB-b+a){
                    int[] val={a,b};
                    return val;
                }
            }
        }
        return null;

    }
    public static void main(String args[]){
        int[] arrayA={4,1,2,1,1,2}, arrayB={3,6,3,3};
        int[] val= swap(arrayA,arrayB);
        for(int a:val){
            System.out.println(a);
        }
        
    }
}
