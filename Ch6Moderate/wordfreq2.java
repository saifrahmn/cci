package Ch6Moderate;

import java.util.HashMap;

public class wordfreq2 {
    static HashMap<String, Integer> wordFrequency(String[] Book){
        HashMap<String, Integer> table= new HashMap<String, Integer>();
        for(String w: Book){
            String word= w.trim().toLowerCase();
            if(word != ""){
                if(!table.containsKey(word)){
                    table.put(word, 1);
                }
                else{
                    table.put(word, table.get(word)+1);
                }
            }
        }
        return table;
    }
    static int counter(HashMap<String,Integer> table, String word){
        word=word.trim().toLowerCase();
        if(table.containsKey(word)){
            return table.get(word);
        }
        return 0;
    }
    public static void main(String[] args){
        String[] book = { "Hello", "world", "hello", "java", "world", "hello" };
        HashMap<String, Integer> wordFreqTable = wordFrequency(book);

        // Example usage of counter
        String targetWord = "hello";
        int frequency = counter(wordFreqTable, targetWord);
        System.out.println("Frequency of the word '" + targetWord + "': " + frequency);
    }
    
}
