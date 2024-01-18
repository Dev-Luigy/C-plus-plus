package Racha;

public class Time {
    
    private int numjogadores;
    private int goleiro;
    private int linha;

    public void setGoleiro(int goleiro) {
        this.goleiro = goleiro;
    }

    public void setLinha(int linha) {
        this.linha = linha;
    }

    public void setNumjogadores(int numjogadores) {
        this.numjogadores = numjogadores;
    }

    public int getGoleiro() {
        return goleiro;
    }

    public int getLinha() {
        return linha;
    }

    public int getNumjogadores() {
        return numjogadores;
    }
}
