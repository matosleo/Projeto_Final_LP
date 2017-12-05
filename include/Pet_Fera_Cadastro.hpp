/**
 * @file Pet_Fera_Cadastro.cpp
 * @brief      Declaração da classe Pet_Fera_Cadastro, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */


#ifndef PET_FERA_HPP
#define PET_FERA_HPP

#include <map>
#include <vector>
//#include <tuple>
#include <iostream>
#include "Animal.hpp"
#include "Animal_Classes.hpp"
#include "Animais_Silvestres.hpp"

class Pet_Fera_Cadastro
{
	std::map< int, Animal > * m_tabela_animais;
	std::map< int, Funcionario > * m_tabela_funcionarios;

public:
	Pet_Fera_Cadastro();
	~Pet_Fera_Cadastro();

	std::string cadastro_comum( std::string _classe, std::string _tipo );
	std::string cadastro_nativo( std::string & dados );
	std::string cadastro_exotico( std::string & dados );

	std::vector< std::string > separar ( const std::string& alvo, const char &delimitador );

	/*std::tuple< int, std::string, std::string, std::string,	std::string, char, float, std::string, V_pointer, T_pointer, std::string >
	converte_cadastro_comum( const std::string & dados_comuns );

	std::tuple< std::string, std::string, std::string >
	converte_cadastro_nativo( const std::string & dados_comuns );

	std::tuple< std::string, std::string >
	converte_cadastro_exotico( const std::string & dados_comuns );
*/
	bool cadastrar_anfibio( std::string _classe, std::string _tipo );
	bool cadastrar_mamifero( std::string _classe, std::string _tipo );
	bool cadastrar_reptil( std::string _classe, std::string _tipo );
	bool cadastrar_ave( std::string _classe, std::string _tipo );

	bool cadastrar_funcionario( std::string _funcao );
	bool remover_funcionario( int _id );

	bool remover_animal( int _id );

	bool alterar_dados_animais( int _id );
	bool alterar_dados_funcionarios( int _id );

	bool consultar_animais( int _id );
	bool consultar_animais_funcionario( int _id );
	bool consultar_funcionarios( int _id );
	
	bool importar_dados_animais();
	bool importar_dados_funcionarios();

	bool exportar_dados_animais();
	bool exportar_dados_funcionarios();

	unsigned int quantidade_animais_cadastrados( void );
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif