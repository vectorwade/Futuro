#ifndef estrutura
#define estrutura
#define quant_pes 100


struct Cadastro //Objeto de Variaveis que Cadastrar� o Usuario
{
    char nome[20];
    char Sobrenome[20];
    int Nacionalidade;
    char CPF[12];
    char RG[11]; //entre 6 e 9

    char EMAIL[64];
    int Usuario; //Aluno_Professor = Usu�rio;
    int Numero_da_Matricula; //Come�ando com 20000 a Matricula dos Alunos

};
struct Cadastro Pessoa[quant_pes];

struct Base
{
    int Usuario; //50

}Base;




#endif
