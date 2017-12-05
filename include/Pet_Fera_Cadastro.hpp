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
#include <iostream>
#include "Animal.hpp"
#include "Animal_Classes.hpp"
#include "Animais_Silvestres.hpp"

class Pet_Fera_Cadastro
{
	std::map< int, Anfibio > m_tabela_animais;
	std::map< int, Funcionario > m_tabela_funcionarios;

public:
	Pet_Fera_Cadastro();
	~Pet_Fera_Cadastro();

	std::string cadastro_comum( std::string _classe, std::string _tipo );
	std::string cadastro_nativo( std::string & dados );
	std::string cadastro_exotico( std::string & dados );

	bool cadastrar_anfibio( std::string _classe, std::string _tipo );
	bool cadastrar_mamifero( std::string _classe, std::string _tipo );
	bool cadastrar_reptil( std::string _classe, std::string _tipo );
	bool cadastrar_ave( std::string _classe, std::string _tipo );

	bool cadastrar_funcionario( std::string _funcao );

	bool remover_veterinario( int _id );
	bool remover_tratador( int _id );
	bool remover_anfibio( int _id );
	bool remover_mamifero( int _id );
	bool remover_reptil( int _id );
	bool remover_ave( int _id );

	bool alterar_anfibio();
	bool alterar_mamifero();
	bool alterar_reptil();
	bool alterar_ave();
	
	bool importar_dados_animais();
	bool importar_dados_funcionarios();

	bool exportar_dados_animais();
	bool exportar_dados_funcionarios();

	unsigned int quantidade_animais_cadastrados( void );
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif