import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int peca,numPeca;
		float vlrPeca, vlrTotal;
		
		peca = sc.nextInt();
		numPeca = sc.nextInt();
		vlrPeca = sc.nextFloat();
		
		vlrTotal = vlrPeca * numPeca; 
		
		peca = sc.nextInt();
		numPeca = sc.nextInt();
		vlrPeca = sc.nextFloat();
		
		vlrTotal += vlrPeca * numPeca;
				
		System.out.printf("VALOR A PAGAR: R$ %.2f\n", vlrTotal);
		
		sc.close();
	}
}