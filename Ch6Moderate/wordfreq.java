package Ch6Moderate;

public class wordfreq {
    public static int counter(String[] book, String word){
        int count =0;
        word = word.trim().toLowerCase();
        for(String w : book){
            if(w.trim().toLowerCase().equals(word)){
                count ++;
            }
        }

        return count;

    }
    public static void main(String[] args){
        String word= "name";
        String[] book = {"the" , "name" , "is" , "what","the","name","is","understood","by","the","name"};
        System.out.println(counter(book,word)); 
    }
}
