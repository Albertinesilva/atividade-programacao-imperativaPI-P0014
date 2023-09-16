/*Parte em Grupos (até 5 pessoas por grupo):
Exercício 4: Organização de Código
• Em grupo, escolham uma funcionalidade simples para um programa (por exemplo, uma calculadora de operações matemáticas).
• Dividam o programa em diferentes funções, atribuindo a cada membro do grupo a responsabilidade por uma função específica.
• Juntem as funções criadas por cada membro e criem um programa completo que utilize todas elas.
• Usem os recursos do Git para dividir e juntar os códigos.*/

#include <iostream>
using namespace std;

int menu();

void limparTela();

void soma();
void subtracao();
void multiplicacao();
void divisao();

void calculadora(double &x, double &y);

int main()
{
    double x = 0, y = 0;

    calculadora(x, y);
}

void limparTela()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int menu()
{
    int opcao = 0;

    do
    {
        cout << "\n======CALCULADORA=====\n";
        cout << "[1] - SOMA\n[2] - SUBSTRAÇÃO\n[3] - MULTIPLICAÇÃO\n[4] - DIVISÃO\n[5] - SAIR\n";
        cout << "ENTRADA ->  ";
        cin >> opcao;
    } while (opcao < 0 || opcao > 5);

    return opcao;
}

void calculadora(double &x, double &y)
{
    int opcao = 0;
    do
    {
        switch (menu())
        {
        case 1:

            soma();

            break;

        case 2:

            subtracao();
            break;

        case 3:

            multiplicacao();
            break;
        case 4:

            divisao();

            break;

        case 5:

            opcao = 8;

        default:

            limparTela();
            cout << "\nObrigado por utilizar a nossa calculadora!...\n\n";

            break;
        }
    } while (opcao != 8);

}

void multiplicacao(){
    float x,y;
    cout << "Entre com o valor de do primeiro numero: " ;
    cin >> x;
    
    cout << "Entre com o valor de do segundo numero: " ;
    cin >> y;

    cout << "Multiplicação entre "<< x << " e " << y << " : " << x*y;
}

void divisao(){
    float x,y;
    cout << "Entre com o valor de do primeiro numero: " ;
    cin >> x;
    
    cout << "Entre com o valor de do segundo numero: " ;
    cin >> y;

    cout << "Divisão entre "<< x << " e " << y << " : " << x/y;
}

void soma(){
    float x,y;
    cout << "Entre com o valor de do primeiro numero: " ;
    cin >> x;
    
    cout << "Entre com o valor de do segundo numero: " ;
    cin >> y;

    cout << "Soma entre "<< x << " e " << y << " : " << x+y;
}

void subtração(){
    float x,y;
    cout << "Entre com o valor de do primeiro numero: " ;
    cin >> x;
    
    cout << "Entre com o valor de do segundo numero: " ;
    cin >> y;

    cout << "Subtração entre "<< x << " e " << y << " : " << x-y;
}
