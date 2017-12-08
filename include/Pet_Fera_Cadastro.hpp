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
#include "Ave.hpp"
#include "Anfibio.hpp"
#include "Mamifero.hpp"
#include "Reptil.hpp"
#include "AnfibioExotico.hpp"
#include "AnfibioNativo.hpp"
#include "MamiferoExotico.hpp"
#include "MamiferoNativo.hpp"
#include "ReptilExotico.hpp"
#include "ReptilNativo.hpp"
#include "AveExotico.hpp"
#include "AveNativo.hpp"

class Pet_Fera_Cadastro
{
	std::map< int, Anfibio* > m_tabela_anfibio;
	std::map< int, Mamifero* > m_tabela_mamifero;
	std::map< int, Reptil* > m_tabela_reptil;
	std::map< int, Ave* > m_tabela_ave;
	std::map< int, Funcionario* > m_tabela_funcionario;
	//std::map< int, Veterinario* > m_tabela_veterinario;
	//std::map< int, Tratador* > m_tabela_tratador;
public:
	Pet_Fera_Cadastro();
	~Pet_Fera_Cadastro();

	void cadastrar_anfibio( std::string _classe, std::string _tipo );
	void cadastrar_mamifero( std::string _classe, std::string _tipo );
	void cadastrar_reptil( std::string _classe, std::string _tipo );
	void cadastrar_ave( std::string _classe, std::string _tipo );

	void cadastrar_funcionario( std::string _funcao );

	void consultar_animais( int _id );
	void consultar_animais_funcionario( int _id );
	void consultar_funcionarios( int _id );

	void remover_funcionario( int _id );
	void remover_animal( int _id );

	void alterar_dados_animais( int _id );
	void alterar_dados_funcionarios( int _id );
	
	bool importar_dados_animais( std::ifstream& dados_animais );
	bool importar_dados_funcionarios();

	bool exportar_dados_animais();
	bool exportar_dados_funcionarios();

	unsigned int quantidade_animais_cadastrados( void );
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif