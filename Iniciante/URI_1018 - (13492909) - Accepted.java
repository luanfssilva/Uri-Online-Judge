import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int resto,n100,n50,n20,n10,n5,n2,n1;
	
		
		if(n>0 && n<1000000) {
			
			n100 = n/100;
			resto = n%100;
			n50 = resto / 50;
			resto %= 50;
			n20 = resto / 20;
			resto %= 20;
			n10 = (resto / 10);
			resto %= 10;
			n5 = (resto / 5);
			resto %= 5;
			n2 = (resto / 2);
			resto %= 2;
			n1 = (resto / 1);
			
			System.out.printf("%d%n",n);
			System.out.printf("%d nota(s) de R$ 100,00%n",n100);
			System.out.printf("%d nota(s) de R$ 50,00%n",n50);
			System.out.printf("%d nota(s) de R$ 20,00%n",n20);
			System.out.printf("%d nota(s) de R$ 10,00%n",n10);
			System.out.printf("%d nota(s) de R$ 5,00%n",n5);
			System.out.printf("%d nota(s) de R$ 2,00%n",n2);
			System.out.printf("%d nota(s) de R$ 1,00%n",n1);
		}
		
		sc.close(); 
	}
}