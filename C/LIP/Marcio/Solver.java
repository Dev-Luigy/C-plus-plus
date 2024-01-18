package Racha;
import Jogador;
import Time;
import Racha;
import java.util.List;
import java.util.Scanner;

public class Solver {
    public static void main(String[] args){
        List<Jogador> list_jogadores = new List<Jogador>();
        List<Racha> list_rachas = new List<Racha>();
        List<Time> list_times = new List<Time>();

        Scanner scanner = new Scanner(System.in);
        int opcao = 0;
        
        while (opcao != 3) {
            exibirMenu();
            opcao = scanner.nextInt();
            scanner.nextLine(); // Limpa o buffer de entrada
            
            switch (opcao) {
                case 1:
                    cadastrarJogador(scanner, list_jogadores);
                    break;
                case 2:
                    System.out.println("Opção 2 selecionada: Listar jogadores cadastrados");
                    listarJogadoresCadastrados(list_jogadores);
                    break;
                case 3:
                    System.out.println("Encerrando o programa...");
                    break;
                default:
                    System.out.println("Opção inválida! Tente novamente.");
                    break;
            }
        }
        
        scanner.close();
    }
    private static void exibirMenu() {
        System.out.println("===== MENU =====");
        System.out.println("1. Cadastrar jogador");
        System.out.println("2. Listar jogadores cadastrados");
        System.out.println("3. Listar jogadores cadastrados");
        System.out.println("3. Sair");
        System.out.print("Escolha uma opção: ");
    }
    private static void listarJogadoresCadastrados(List<Jogador> list_jogadores){
        for (Jogador jogador : list_jogadores){
            System.out.println(jogador);
        }
        
    }
    private static void cadastrarJogador(Scanner scanner, List<Jogador> list_jogadores) {
        System.out.print("Digite o nome do jogador: ");
        String nome = scanner.nextLine();

        System.out.print("Digite o apelido do jogador: ");
        String apelido = scanner.nextLine();

        System.out.print("Digite a pontuação do jogador: ");
        int pontuacao = scanner.nextInt();
        scanner.nextLine(); // Limpa o buffer de entrada

        System.out.println("Escolha o nível do jogador:");

        int nivelIndex = 1;
        for (Nivel nivel : Nivel.values()) {
            System.out.println(nivelIndex + ". " + nivel.getDescricao());
            nivelIndex++;
        }

        System.out.print("Opção: ");
        int nivelOpcao = scanner.nextInt();
        scanner.nextLine();

        if (nivelOpcao < 1 || nivelOpcao > Nivel.values().length) {
            System.out.println("Opção inválida! Nível do jogador definido como Nível 1 (Canelada).");
            nivelOpcao = 1;
        }

        Nivel nivel = Nivel.values()[nivelOpcao - 1];

        Jogador jogador = new Jogador(nome, apelido, pontuacao, nivel);
        list_jogadores.add(jogador);

        System.out.println("Jogador cadastrado com sucesso: " + jogador);
        System.out.println();
    }
}
