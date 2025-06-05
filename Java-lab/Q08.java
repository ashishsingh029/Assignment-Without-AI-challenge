import java.util.Scanner;
public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter string input: ");
        String input = in.next();
        StringBuffer sb = new StringBuffer(input);
        System.out.println("First Character: " + sb.charAt(0));
        System.out.println("Original StringBuffer length: " + sb.length());
        sb.setLength(5);
        System.out.println("Modified StringBuffer length: " + sb.length());
        sb.append('h');
        System.out.println("Modified StringBuffer: " + sb);
        sb.insert(1, 'a');
        System.out.println("Modified StringBuffer: " + sb);
        input = input.concat(" singh");
        System.out.println("Modified String: " + input);
        String first = "NewStr";
        String second = "NewStr";
        if(first.equals(second)) {
            System.out.println("Both are Equal");
        } else {
            System.out.println("Both are not equal");
        }
    }
}