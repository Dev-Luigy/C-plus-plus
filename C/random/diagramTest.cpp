#include <iostream>
#include <list>

using namespace std;

class Login {
private:
    string login;
    string senha;
    string e_Mail;

public:
    string getLogin(){
        return login;
    }

    string getSenha(){
        return senha;
    }

    Login(string login, string senha){
        this->login = login;
        this->senha = senha;
    }
};

class Usuario {
private:
    string nome;
    string cpf;
    int identificador;
    Login login;
    bool isLogged;

public:
    Usuario(string nome, string cpf, int identificador, string login1, string senha, Login login(login1, senha)) {
        this->nome = nome;
        this->cpf = cpf;
        this->identificador = identificador;
        this->isLogged = false;
        this->login = *(new Login (login, senha));
    }

    string getnome(){
        return nome;
    }

    void enviarReclamacaoRU(){

    }

    string consultarStatus(){
        return isLogged ? "Online" : "Offline";
    }
};

class DB{
    private:
    list <Login> dbLogins;
    list <Usuario> dbUsuarios;

    public:
    bool buscarLogin(Login login){
        for (auto i : dbLogins){
            if (i.getLogin() == login.getLogin() && i.getSenha() == login.getSenha())
                return true;
        }
        return false;
    }

    void adicionarLogin(Login login){
        dbLogins.push_back(login);
    }

    void removerLogin(Login login){
        dbLogins.remove(login);
    }
};

int main() {
    Usuario *User = nullptr;
    DB bank;

    int choise;
    do{
        cin >> choise;

        switch(choise){
            case 1:
            cout << "Criar um novo login";
            break;
            case 2:
            cout << "Entrar em um login existente";
            break;
        }
    }while (choise);


    return 0;
}