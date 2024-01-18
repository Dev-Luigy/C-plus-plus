package Racha;

public class Racha {
    
    private int placar;
    private int data;
    private String local;
    private String nometime;

    public void setData(int data) {
        this.data = data;
    }
    
    public void setLocal(String local) {
        this.local = local;
    }

    public void setNometime(String nometime) {
        this.nometime = nometime;
    }

    public void setPlacar(int placar) {
        this.placar = placar;
    }

    public int getData() {
        return data;
    }

    public String getLocal() {
        return local;
    }

    public String getNometime() {
        return nometime;
    }

    public int getPlacar() {
        return placar;
    }


}
