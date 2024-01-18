package Racha;

public enum Nivel {
    UM("Canelada"),
    DOIS("Péba"),
    TRES("Meia-Bomba"),
    QUATRO("Titular do Ibis"),
    CINCO("Doutrinador de Mulas"),
    SEIS("Insta-win, O MONSTRO DO RACHA CHEGOU PARA ACABAR COM A DIVERSAO");

    private String descricao;

    Nivel(String descricao) {
        this.descricao = descricao;
    }

    public String getDescricao() {
        return descricao;
    }
}
