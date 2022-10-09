import java.util.Scanner;

public class App {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		String symbol;
		int qtdPlayers;
		
		System.out.println("SEJA BEM-VINDO AO JOGO DA VELHA EM JAVA\n Digite a Quantidade de Jogadores:");
		
		qtdPlayers = scan.nextInt();
		scan.nextLine();
		
		
		
			if(qtdPlayers == 2) {
				while(true) {
					System.out.println("Jogador 1 Digite o seu Símbolo (X ou O)");
					symbol = scan.nextLine();
					Player p1 = new Player(symbol);
					
					if(p1.getSymbol().equals("X")) {
						Player p2 = new Player("O");
						break;
					}
					else if(p1.getSymbol().equals("O")) {
						Player p2 = new Player("X");
						break;
					}
					else {
						System.out.println("Digite um Símbolo Válido");
					}
				}
						
			}
			else {
				while(true) {
					System.out.println("Jogador 1 Digite o seu Símbolo (X ou O)");
					symbol = scan.nextLine();
					Player p1 = new Player(symbol);
					if(p1.getSymbol().equals("X") || p1.getSymbol().equals("O")) {
						break;
					}
					else {
						System.out.println("Digite um Símbolo Válido");
					}
				}
			}
		
		
		Game game = new Game();
		
//		while(true) {
//			
//		}
//		
		
	}

}
