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
	int _id;
	std::string especialidade_funcionario;
	std::string familia_animal;
	std::string tipo_animal;
	Pet_Fera_Cadastro pet_cadastro;

	do
	{

		std::cout << "Por favor digite uma das opcoes abaixo:" << std::endl
					<< "1 - Cadastrar animal a ser comercializado" << std::endl
					<< "2 - Cadastrar Funcionario" << std::endl
					<< "3 - Remover animal do banco de dados" << std::endl
					<< "4 - Alterar dados cadastrais de um animal" << std::endl
					<< "5 - Consultar dados de animais" << std::endl
					<< "6 - Consultar dados de animais sob responsabilidade de um Veterinario ou Tratador" << std::endl
					<< "7 - Remover Tratador do banco de dados" << std::endl
					<< "8 - Remover Veterinario do banco de dados" << std::endl
					<< "9 - Alterar dados cadastrais de um Veterinario" << std::endl
					<< "10 - Alterar dados cadastrais de um Tratador" << std::endl
					<< "11 - Consultar dados de um Veterinario" << std::endl
					<< "12 - Consultar dados de um Tratador" << std::endl
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
					{
						if( pet_cadastro.cadastrar_anfibio( familia_animal, tipo_animal ) )
							std::cout << "Anfibio cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Mamifero" ) == 0 )
					{
						if( pet_cadastro.cadastrar_mamifero( familia_animal, tipo_animal ) )
							std::cout << "Mamifero cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Reptil" ) == 0 )
					{
						if( pet_cadastro.cadastrar_reptil( familia_animal, tipo_animal ) )
							std::cout << "Reptil cadastrado com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Ave" ) == 0 )
					{
						if( pet_cadastro.cadastrar_ave( familia_animal, tipo_animal ) )
							std::cout << "Ave cadastrado com sucesso!" << std::endl;
					}

				break;

				case 2:

					std::cout << "Qual a especialidade do Funcionario que deseja cadastrar (Veterinario ou Tratador):" << std::endl;
					std::cin >> especialidade_funcionario;

					if( especialidade_funcionario.compare( "Veterinario" ) == 0 )
						pet_cadastro.cadastrar_veterinario( especialidade_funcionario );
					else if( especialidade_funcionario.compare( "Tratador" ) == 0 )
						pet_cadastro.cadastrar_tratador( especialidade_funcionario );

				break;

				case 3:
					
					std::cout << "Qual a classe do animal que deseja remover (Anfibio, Mamifero, Reptil ou Ave):" << std::endl;
					std::cin >> familia_animal;
					std::cout << "Qual o ID do animal a ser removido:" << std::endl;
					std::cin >> _id;

					if( familia_animal.compare( "Anfibio" ) == 0 )
					{
						if( pet_cadastro.remover_anfibio( _id ) )
							std::cout << "Anfibio removido com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Mamifero" ) == 0 )
					{
						if( pet_cadastro.remover_mamifero( _id ) )
							std::cout << "Mamifero removido com sucesso!" << std::endl;
					}
					else if( familia_animal.compare( "Reptil" ) == 0 )
					{
						if( pet_cadastro.remover_reptil( _id ) )
							std::cout << "Reptil removido com sucesso!" << std::endl;
					}					
					else if( familia_animal.compare( "Ave" ) == 0 )
					{
						if( pet_cadastro.remover_ave( _id ) )
							std::cout << "Ave removido com sucesso!" << std::endl;
					}

				break;

				case 4:
					
					/*	Falta Codigo	*/

				break;

				case 5:

					/*	Falta Codigo	*/
					
				break;

				case 6:

					/*	Falta Codigo	*/
					
				break;

				case 7:

					/*	Falta Codigo	*/
					
				break;

				default:
				break;
			}


	} while ( opcao != 0 );

	std::cout << "Obrigado por utilizar nossos servicos!" << std::endl;

	return 0;
}