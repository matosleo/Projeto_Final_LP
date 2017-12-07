/**
 * @file Pet_Fera_Exportar.hpp
 * @brief      Declaração e Implementação de funções auxilares para o Pet_Fera
 *             que permite filtrar e exportar os dados dos animais
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      06/12/2017
 * @date       06/12/2017
 */

#ifndef PETFERA_AUX_HPP
#define PETFERA_AUX_HPP

#include <string>
#include <fstream>
#include <vector>

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

std::string buscar_codigo( std::ifstream &local, const std::string &alvo, size_t funcao )
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
	return "-";
}

std::vector< std::string > filtrar( std::vector< std::string > &alvo, const std::string filtro, size_t campo )
{
	std::string linha;
	std::vector< std::string > retorno;
	if ( filtro == "" )
	{
		for ( std::vector< std::string >::iterator i = alvo.begin(); i != alvo.end(); ++i)
		{
			retorno.push_back(*i);
		}
	}
	else
	{
		for ( std::vector< std::string >::iterator i = alvo.begin(); i != alvo.end(); ++i)
		{
			std::vector< std::string > campos = separar( *i, ';' );
			if ( campos[campo] == filtro )
			{
				retorno.push_back(*i);
			}
		}		
	}
	return retorno;
}

#endif