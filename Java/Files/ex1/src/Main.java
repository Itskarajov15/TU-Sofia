import java.io.*;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        File file = new File("output.txt");

        try {
            if (file.createNewFile()) {
                System.out.println("File created: " + file.getName());
            } else {
                System.out.println("Files are not created.");
            }
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        try {
            FileWriter writer = new FileWriter("output.txt");
            writer.write(input);
            writer.close();
        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }

        try {
            File secondFile = new File("secondOutput.txt");
            Scanner myReader = new Scanner(file);
            FileWriter writer = new FileWriter("secondOutput.txt");

            StringBuilder sb = new StringBuilder(myReader.nextLine()).reverse();
            writer.write(sb.toString());
            writer.close();

        } catch (IOException e) {
            System.out.println("An error occurred.");
            e.printStackTrace();
        }
    }
}