#ifndef modulo_usuario
#define modulo_usuario


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estrutura.h"
#include "modulo_usuario.h"
#define quant_pes 100



void Cadastro_Do_Usuario(struct Cadastro Pessoa[quant_pes], int *cont_pessoas, int *num_matricula,struct Base base, int *quant_Usuario);


void Consutar_Usuario( struct Cadastro Pessoa[quant_pes], int *cont_pessoas);


void Alterar_Dados_Do_Usuario(struct Cadastro Pessoa[quant_pes],int *cont_pessoas);

void Remover_Usuario(struct Cadastro Pessoa[quant_pes], int *cont_pessoas, struct Base base);

void main_Usuarios(int *cont_pessoas, int *cont_cadastro);



#endif
