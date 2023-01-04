#include <iostream>

using namespace std;

int main()
{
    Carro p;

    p.Carro("Honda", "preto", 2019, 50000);

    printf("%f", p.ipva());

    return 0;
}

class Carro{
    public
    char marca[50], cor[20];
    int ano;
    float valor;

    //construtor
    Carro(marca, cor, ano, valor){
        marca = this.ano;
        cor = this.cor;
        ano = this.ano;
        valor = this.valor;
    }


    ipva(){
        float ipva;

        ipva = (0.05*valor) * ((0.1* valor) * 2022 - ano);

        return ipva;
    }


    //descontrutor
    Produto()



};
