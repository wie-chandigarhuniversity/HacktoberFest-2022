import java.util.Scanner;

public class Token {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // for the input String
        String inputString = scanner.nextLine();

        // Split the string into tokens based on English alphabetic letters
        String[] tokens = inputString.split("[^A-Za-z]+");

        String outputString = "";
        for (String token : tokens) {
            outputString += token + " ";
            //System.out.println(token);
        }

        // Printing the number of tokens
        System.out.println(tokens.length + " " + outputString);

        scanner.close();
    }
}
