import java.io.IOException;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {

		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double salario = sc.nextDouble();
		double imposto = 0.0;
		
		if(salario <= 2000) {
			System.out.println("Isento");
		
		}else {
			imposto = calcImposto(salario);
			System.out.printf("R$ %.2f\n",imposto);
		}
		
		sc.close(); 
	}
	
	
	public static double calcImposto(double salario) {
		double resultado = 0.0;
		double diferenca;
		
		salario -= 2000.00;
		
		diferenca = salario - 2500.00;
		if(diferenca >= 0) {
			resultado = diferenca * 0.28;
			salario -= diferenca;
		}
			
		diferenca = salario - 1000.01;
		if(diferenca >= 0){
			resultado += (salario - 1000.00) * 0.18;
		}
			
		diferenca = (1000.00 - salario);
		if(diferenca >= 0)
			resultado += salario * 0.08;
		else
			resultado += (salario - Math.abs(diferenca)) * 0.08; 
		return resultado;
	}
}