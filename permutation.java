import java.util.Arrays;
public class permutation {
    static Boolean solution (String s, String t){
        return (if(sortString(s)==sortString(t)));
        
    }
    public static void main(String[] args){
        String s= "cat", t= "atc";
        System.out.println( solution ( s,  t));

    }
}
