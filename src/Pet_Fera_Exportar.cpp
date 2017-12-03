/**
 * @file Pet_Fera_Exportar.cpp
 * @brief      Implementação de um programa auxiliar para o Pet_Fera que
 *             perminte filtrar e exportar os dados dos animais
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

#include <getopt.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>

bool termina_com(const std::string &str, const std::string &termino)
{
	return str.size() >= termino.size() and str.compare(str.size() - termino.size(), termino.size(), termino) == 0;
}

std::vector< std::string > separar ( const std::string& alvo, const char &delimitador )
{
	size_t start = alvo.find_first_not_of(delimitador);
	size_t end = start;

	std::vector< std::string > campos;

	while ( start != std::string::npos )
	{
		end = alvo.find(delimitador, start);

		campos.push_back(alvo.substr(start, end-start));
		
		start = alvo.find_first_not_of(delimitador, end);
	}
	return campos;
}

std::string buscar_codigo( std::fstream &local, const std::string &alvo, size_t funcao )
{
	if ( alvo == "0")
	{
		return "0";
	}
	
	std::vector< std::string > profissoes;
	profissoes.push_back( "Veterinario");
	profissoes.push_back( "Tratador");
	std::string linha;

	while( std::getline( local, linha ) )
	{
		std::vector< std::string > campos = separar( linha, ';' );
		
		if ( campos[1] == profissoes[funcao] and campos[2] == alvo )
		{
			return campos[0];
		}
	}
	return "-1";
}


std::fstream filtrar( std::fstream &alvo , const std::string filtro, size_t campo )
{
	std::string linha;
	std::fstream filtrado;
	while( std::getline( alvo, linha ) )
	{
		std::vector< std::string > campos = separar( linha, ';' );
		
		if ( campos[campo] == filtro )
		{
			filtrado << linha;
		}
	}
	return filtrado;
}

int main(int argc, char const *argv[])
{
	bool c_flag = false, v_flag = false, t_flag = false;
	int c;
	std::string classe, veterinario, tratador, arquivo_saida;
	opterr = 0;
	while ( (c = getopt (argc, argv, "c:v:t:" )) != -1)		// parece meio estranho esse getopt...
	{
		switch(c)
		{
			case 'c':
				c_flag = true;
				classe = optarg;
				break;
			case 'v':
				v_flag = true;
				veterinario = optarg;
				break;
			case 't':
				v_flag = true;
				tratador = optarg;
				break;
			case '?':
				if (optopt == 'c' or optopt == 'v' or optopt == 't')
				{
					std::cerr << "Erro: '-" << char(optopt) << "' necessita de um argumento.\n";
					return 1;
				} else if (isprint(optopt))
				{
					std::cerr << "Erro: '-" << char(optopt) << "' inválido.\n";
					return 1;
				} else {
					std::cerr << "Erro: '\\x" << optopt << "' caractere inválido\n" ;
					return 1;
				}	
			default:
				std::cerr << "Erro desconhecido. Programa abortado.\n" ;
				return 1;
		}
	}

	if (optind < argc)
	{
		arquivo_saida = argv[optind];
	}

	if ( argc < 2 or (not termina_com(arquivo_saida,".csv") ) )
	{
		std::cout << "\t--Modo de usar--" << std::endl
				  << "Opcional:		'-c' <Classe> - Indica a classe de animais a serem exportados." << std::endl
				  << "				Opções de Classe: Amphibia, Reptilia, Aves e Mammalia." << std::endl
				  << "Opcional:		'-v' <Veterinario> - indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados." << std::endl
				  << "              Indicar qual o nome do Veterinario" << std::endl // Seria melhor poder usar o código dele...
				  << "Opcional:		'-t' <Tratador> - indica que apenas animais tratados pelo tratador informado devem ser exportados" << std::endl
				  << "              Indicar qual o nome do Tratador" << std::endl // Seria melhor poder usar o código dele...
				  << "Obrigatório:	<Arquivo de Saida> - indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados" << std::endl
				  << "              Deve incluir a extensão .csv" << std::endl; // Facilita a diferenciar dos outros campos caso alguma entrada muito estranha seja colocada...
		return 1;
	}

	std::fstream dados_animais;
	dados_animais.open ("data/dados_animais.csv");

	if(dados_animais.bad())
	{
		std::cerr << "O arquivo com informações dos animais não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	std::fstream dados_funcionarios;
	dados_funcionarios.open ("data/dados_funcionarios.csv");

	if(dados_funcionarios.bad())
	{
		std::cerr << "O arquivo com informações dos funcionarios não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	std::fstream filtrado;
	filtrado.open (arquivo_saida);

	if(filtrado.bad())
	{
		std::cerr << "O arquivo de saida informado não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	filtrado = dados_animais;

	if ( c_flag )
	{
		filtrado = filtrar(filtrado, classe, 1 );
	}

	if ( v_flag )
	{
		filtrado = filtrar(filtrado, buscar_codigo(dados_funcionarios, veterinario, 0), 7 );
	}

	if ( t_flag )
	{
		filtrado = filtrar(filtrado, buscar_codigo(dados_funcionarios, tratador, 1), 8 );
	}
}