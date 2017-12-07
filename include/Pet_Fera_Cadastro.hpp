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

#include <fstream>
#include <map>
#include <vector>
#include <tuple>
#include <iostream>
#include "Pet_Fera_Exportar.hpp"
#include "Animal.hpp"
#include "Animal_Classes.hpp"
#include "Animais_Silvestres.hpp"

class Pet_Fera_Cadastro
{
	std::map< int, Anfibio* > m_tabela_anfibio;
	std::map< int, Mamifero* > m_tabela_mamifero;
	std::map< int, Reptil* > m_tabela_reptil;
	std::map< int, Ave* > m_tabela_ave;
	//std::map< int, Funcionario > * m_tabela_funcionarios;
	std::map< int, Veterinario* > m_tabela_veterinario;
	std::map< int, Tratador* > m_tabela_tratador;
public:
	Pet_Fera_Cadastro();
	~Pet_Fera_Cadastro();

	bool cadastrar_anfibio( std::string _classe, std::string _tipo );
	bool cadastrar_mamifero( std::string _classe, std::string _tipo );
	bool cadastrar_reptil( std::string _classe, std::string _tipo );
	bool cadastrar_ave( std::string _classe, std::string _tipo );

	bool cadastrar_funcionario( std::string _funcao );

	bool consultar_animais( int _id, std::string _classe );
	bool consultar_animais_funcionario( int _id, std::string _funcao );
	bool consultar_funcionarios( int _id, std::string _funcao );

	bool remover_funcionario( int _id, std::string _funcao );
	bool remover_animal( int _id, std::string _classe );

	bool alterar_dados_animais( int _id, std::string _classe );
	bool alterar_dados_funcionarios( int _id, std::string _funcao );
	
	bool importar_dados_animais( std::ifstream& dados_animais );
	bool importar_dados_funcionarios();

	bool exportar_dados_animais();
	bool exportar_dados_funcionarios();

	unsigned int quantidade_animais_cadastrados( void );
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif