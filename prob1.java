public class prob1{
    public static Boolean solution(String s){
        if(s.length()>128)
            return false;
        boolean[] x= new boolean[128];
        for(int i=0;i<s.length();i++){
            int value = s.charAt(i);
            if(x[value])
                return false;
            else
                x[value] = true;
            
        }
        return false;
        
    }
    public static void main(String main[]){
        String s= "AKOLA";
        System.out.println(solution(s));
    }
}