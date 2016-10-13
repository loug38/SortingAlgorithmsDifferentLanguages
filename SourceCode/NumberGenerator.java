import java.io.*;
import java.util.*;

class NumberGenerator{
	public static void main(String[] args){
		try{
			PrintWriter pw = new PrintWriter("numbers.txt"); 
			int number = 0;
			Random rand = new Random();
			for(int i = 0; i < 10000; i++){
				number = rand.nextInt(99) + 1;
				pw.print(number + ",");
				pw.flush();
			}
			pw.print("\n");
		} catch (FileNotFoundException e){
			e.printStackTrace();
		}
	}
}