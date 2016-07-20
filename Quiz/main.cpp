//
//  main.cpp
//  Quiz
//  Um programa para testar seus conhecimentos sobre Ciência da Computação
//
//  Created by Samuel Silva on 14/06/16.
//  Copyright (c) 2016 Samuel Silva. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Quiz{
public:
    int numero;
    string comando;
    string alternativa_correta;
    Quiz(int, string, string); // Protótipo da Função Construtora
};

int main() {
    // Instanciações
    Quiz questao1(1, "Como é possivel comparar numeros inteiros em C++?\na - compare()\nb - ==\nc - !=\nd - strcmp()\ne - >=", "b");
    Quiz questao2(2, "Pra que serve o std::cin?\na - Entrada de Dados\nb - Saída de dados\nc - Comparação\nd -Construtor\ne - Exibir erros", "a");
    Quiz questao3(3, "All of the following are true of functions except:\na - A function call must specify the name and arguments of the function. \nb - They define specific tasks that can be used at many points in a program. \nc - The definition of a function usually is visible to other functions. \nd - The implementation of a function is hidden from the caller.", "d");
    Quiz questao4(4, "Functions can:\na - Be used as building blocks to create new programs.\nb - Return a result to the caller function.\nc - Be reused any number of times.\nd - Do any of the above.", "d");
    Quiz questao5(5, "All math library functions:\na - Are global functions.\nb - Can only be called after creating a math object.\nc - Must be called by preceding the function name by cmath::.\nd - Return data type int.", "a");
    
    // Fim das Instanciações
    
    Quiz perguntas[5] = {questao1, questao2, questao3, questao4, questao5};
    int total = (sizeof(perguntas)/sizeof(*perguntas)) - 1;
    
    int i;
    for (i=0; i<=total; i++) {
        cout << perguntas[i].comando << endl;
        
        std::string resposta;
        cin >> resposta;
        
        if (perguntas[i].alternativa_correta.compare(resposta) == 0){
            cout << "Certo" << endl;
        }else{
            cout << "errado" << endl;
        }
    }

}
// Construtor
Quiz::Quiz(int num, string com, string alternativa){
    numero = num;
    comando = com;
    alternativa_correta = alternativa;
}
