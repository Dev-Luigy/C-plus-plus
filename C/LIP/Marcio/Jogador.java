package Racha;

public class Jogador {
    private static int proximoId = 1;
    private int id;
    private int pontuacao;
    private String nome;
    private String apelido;
    private String posicao;
    private Nivel nivel;

    public Jogador(String nome, String apelido, int pontuacao, Nivel nivel) {
        this.id = proximoId++;
        this.apelido = apelido;
        this.nome = nome;
        this.pontuacao = pontuacao;
        this.nivel = nivel;
    }
    
    public int getId() {
        return id;
    }
    
    public String getApelido() {
        return apelido;
    }

    public void setApelido(String apelido) {
        this.apelido = apelido;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getPontuacao() {
        return pontuacao;
    }

    public void setPontuacao(int pontuacao) {
        this.pontuacao = pontuacao;
    }

    public String getPosicao() {
        return posicao;
    }

    public void setPosicao(String posicao) {
        this.posicao = posicao;
    }
    
    public Nivel getNivel() {
        return nivel;
    }
    
    public void setNivel(Nivel nivel) {
        this.nivel = nivel;
    }

    // Método toString()

    @Override
    public String toString() {
        return "Jogador{id=" + id + ", pontuacao=" + pontuacao + ", nome='" + nome + "', apelido='" + apelido + "', posicao='" + posicao + "', nivel='" + nivel.getDescricao() + "'}";
    }
}