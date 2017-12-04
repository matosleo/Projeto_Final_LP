#include <iostream>
#include "Animais_Silvestres.hpp"
#include "Animal.hpp"
#include "Animal_Classes.hpp"
#include "Funcionario.hpp"
#include "Silvestre.hpp"
#include "Pet_Fera_Cadastro.hpp"


int main(int argc, char const *argv[])
{
	
	unsigned int opcao;
	std::string familia_animal;
	std::string tipo_animal;
	Pet_Fera_Cadastro pet_cadastro;

	do
	{

		std::cout << "Por favor digite uma das opcoes abaixo:" << std::endl
					<< "1 - Cadastrar animal a ser comercializado" << std::endl
					<< "2 - Remover animal do banco de dados" << std::endl
					<< "3 - Alterar dados cadastrais de um animal" << std::endl
					<< "4 - Consultar dados de animais" << std::endl
					<< "5 - Consultar dados de animais sob responsabilidade de um Veterinario ou Tratador" << std::endl
					<< "6 - Cadastrar Tratador" << std::endl
					<< "7 - Cadastrar Veterinario" << std::endl
					<< "8 - Remover Tratador do banco de dados" << std::endl
					<< "9 - Remover Veterinario do banco de dados" << std::endl
					<< "10 - Alterar dados cadastrais de um Veterinario" << std::endl
					<< "11 - Alterar dados cadastrais de um Tratador" << std::endl
					<< "12 - Consultar dados de um Veterinario" << std::endl
					<< "13 - Consultar dados de um Tratador" << std::endl
					<< "0 - Sair" << std::endl;
		std::cin >> opcao;

		if( opcao < 0 and opcao > 13 )
			std::cout << "\nOpcao digitada invalida! Por favor digite uma opcao valida." << std::endl << std::endl;
		else
			switch ( opcao )
			{

				case 1:
					std::cout << "Qual a classe do animal que deseja cadastrar (Anfibio, Mamifero, Reptil ou Ave):" << std::endl;
					std::cin >> familia_animal;
					std::cout << "Qual o tipo do animal que deseja cadastrar (Domestico, Exotico ou Nativo):" << std::endl;
					std::cin >> tipo_animal;

					if( familia_animal.compare( "Anfibio" ) == 0 )
						if( pet_cadastro.cadastrar_anfibio( familia_animal, tipo_animal ) )
							std::cout << "Anfibio cadastrado com sucesso!" << std::endl;

				break;

				case 2:
					//pet_cadastro.excluir_conta();
				break;

				case 3:
					//pet_cadastro.emissao_saldo();
				break;

				case 4:
					//pet_cadastro.emissao_extrato();
				break;

				case 5:
					//pet_cadastro.saque();
				break;

				case 6:
					//pet_cadastro.deposito();
				break;

				case 7:
					//pet_cadastro.transferencia();
				break;

				default:
				break;
			}


	} while ( opcao != 0 );

	std::cout << "Obrigado por utilizar nossos servicos!" << std::endl;

	return 0;
}