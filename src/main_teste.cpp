#include <iostream>
#include "Animal.hpp"
#include "Ave.hpp"
#include "Anfibio.hpp"
#include "Mamifero.hpp"
#include "Reptil.hpp"
#include "Funcionario.hpp"
#include "Silvestre.hpp"
#include "Pet_Fera_Cadastro.hpp"

int main(int argc, char const *argv[])
{
	int opcao;
	int _id;
	std::string funcao_funcionario;
	std::string familia_animal;
	std::string tipo_animal;
	Pet_Fera_Cadastro pet_cadastro;

	std::ifstream dados_animais;
	dados_animais.open ("data/dados_animais.csv");

	if(dados_animais.bad())
	{
		std::cerr << "O arquivo com informações dos animais não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}
	pet_cadastro.importar_dados_animais( dados_animais );

	do
	{
		std::cout << "Por favor digite uma das opcoes abaixo:" << std::endl
					<< "1 - Cadastrar animal a ser comercializado" << std::endl
					<< "2 - Cadastrar Funcionario" << std::endl
					<< "3 - Remover animal do banco de dados" << std::endl
					<< "4 - Alterar dados cadastrais de um animal" << std::endl
					<< "5 - Consultar dados de animais" << std::endl
					<< "6 - Consultar dados de animais sob responsabilidade de um Veterinario ou Tratador" << std::endl
					<< "7 - Remover Funcionario do banco de dados" << std::endl
					<< "8 - Alterar dados cadastrais de um Funcionario" << std::endl
					<< "9 - Consultar dados de um Funcionario" << std::endl
					<< "0 - Sair" << std::endl;
		std::cin >> opcao;

		if( opcao < 0 or opcao > 9 )
			std::cout << "\nOpcao digitada invalida! Por favor digite uma opcao valida." << std::endl << std::endl;
		else
			switch ( opcao )
			{

				case 1:

					std::cout << "Digite a classe do animal que deseja cadastrar (Anfibio, Mamifero, Reptil ou Ave):" << std::endl;
					std::cin >> familia_animal;
					std::cout << "Digite o tipo do animal que deseja cadastrar (Domestico, Exotico ou Nativo):" << std::endl;
					std::cin >> tipo_animal;

					if( familia_animal.compare( "Amphibia" ) == 0 )
					{
						if( pet_cadastro.cadastrar_anfibio( familia_animal, tipo_animal ) )
							std::cout << "Anfibio cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Mammalia" ) == 0 )
					{
						if( pet_cadastro.cadastrar_mamifero( familia_animal, tipo_animal ) )
							std::cout << "Mamifero cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Reptilia" ) == 0 )
					{
						if( pet_cadastro.cadastrar_reptil( familia_animal, tipo_animal ) )
							std::cout << "Reptil cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Aves" ) == 0 )
					{
						if( pet_cadastro.cadastrar_ave( familia_animal, tipo_animal ) )
							std::cout << "Ave cadastrado com sucesso!" << std::endl;
					}

				break;

				case 2:

					std::cout << "Digite a funcao do Funcionario que deseja cadastrar (Veterinario ou Tratador):" << std::endl;
					std::cin >> funcao_funcionario;

					if( pet_cadastro.cadastrar_funcionario( funcao_funcionario ) )
						std::cout << "Funcionario cadastrado com sucesso!" << std::endl;

				break;

				case 3:
					
					std::cout << "Digite o ID do animal a ser removido:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a classe do animal que deseja remover (Anfibio, Mamifero, Reptil ou Ave):" << std::endl;
					std::cin >> familia_animal;

						if( pet_cadastro.remover_animal( _id, familia_animal ) )
							std::cout << "Animal removido com sucesso!" << std::endl;
					

				break;

				case 4:
					
					std::cout << "Digite o ID do animal que deseja alterar os dados:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a classe do animal que deseja alterar os dados (Anfibio, Mamifero, Reptil ou Ave):" << std::endl;
					std::cin >> familia_animal;

					if( pet_cadastro.alterar_dados_animais( _id, familia_animal ) )
						std::cout << "Dados alterados com sucesso!" << std::endl;

				break;

				case 5:

					std::cout << "Digite o ID do animal que deseja consultar:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a classe do animal que deseja consultar (Amphibia, Mammalia, Reptilia ou Aves):" << std::endl;
		
					std::cin.ignore();
					std::getline(std::cin, familia_animal);

					std::cout << "===			FLAG CASE 5			===" << std::endl;

					if( pet_cadastro.consultar_animais( _id, familia_animal ) )
						std::cout << "Dados consultados com sucesso!" << std::endl;

					/*	Falta Codigo	*/
					
				break;

				case 6:

					std::cout << "Digite o ID do funcionario:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a funcao do Funcionario que deseja consultar (Veterinario ou Tratador):" << std::endl;
					std::cin >> funcao_funcionario;

					if( pet_cadastro.consultar_animais_funcionario( _id, funcao_funcionario ) );
						std::cout << "Dados consultados com sucesso!" << std::endl;
					/*	Falta Codigo	*/
					
				break;

				case 7:

					std::cout << "Digite o ID do funcionario a ser removido:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a funcao do Funcionario que deseja remover (Veterinario ou Tratador):" << std::endl;
					std::cin >> funcao_funcionario;

					if( pet_cadastro.remover_funcionario( _id, funcao_funcionario ) );
						std::cout << "Funcionario removido com sucesso!" << std::endl;
					/*	Falta Codigo	*/
					
				break;

				case 8:
					std::cout << "Digite o ID do funcionario que deseja alterar os dados:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a funcao do Funcionario que deseja alterar os dados (Veterinario ou Tratador):" << std::endl;
					std::cin >> funcao_funcionario;

					if( pet_cadastro.alterar_dados_funcionarios( _id, funcao_funcionario ) )
						std::cout << "Dados alterados com sucesso!" << std::endl;

				break;

				case 9:

					std::cout << "Digite o ID do funcionario que deseja consultar:" << std::endl;
					std::cin >> _id;
					std::cout << "Digite a funcao do Funcionario que deseja consultar (Veterinario ou Tratador):" << std::endl;
					std::cin >> funcao_funcionario;

					if( pet_cadastro.consultar_funcionarios( _id, funcao_funcionario ) )
						std::cout << "Dados consultados com sucesso!" << std::endl;

				break;

				default:
				break;
			}


	} while ( opcao != 0 );

	std::cout << "Obrigado por utilizar nossos servicos!" << std::endl;

	return 0;
}