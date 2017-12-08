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

/**
 * @brief      Classe que simula parte do cadastro de um pet shop
 */
class Pet_Fera_Cadastro
{
protected:
	std::map< int, Anfibio* > m_tabela_anfibio;
	std::map< int, Mamifero* > m_tabela_mamifero;
	std::map< int, Reptil* > m_tabela_reptil;
	std::map< int, Ave* > m_tabela_ave;
	std::map< int, Funcionario* > m_tabela_funcionario;

public:

	/**
	 * @brief      { function_description }
	 */
	Pet_Fera_Cadastro();

	/**
	 * @brief      Destroys the object.
	 */
	~Pet_Fera_Cadastro();

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _classe  The classe
	 * @param[in]  _tipo    The tipo
	 */
	void cadastrar_anfibio( std::string _classe, std::string _tipo );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _classe  The classe
	 * @param[in]  _tipo    The tipo
	 */
	void cadastrar_mamifero( std::string _classe, std::string _tipo );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _classe  The classe
	 * @param[in]  _tipo    The tipo
	 */
	void cadastrar_reptil( std::string _classe, std::string _tipo );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _classe  The classe
	 * @param[in]  _tipo    The tipo
	 */
	void cadastrar_ave( std::string _classe, std::string _tipo );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _funcao  The funcao
	 */
	void cadastrar_funcionario( std::string _funcao );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void consultar_animais( int _id );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void consultar_animais_funcionario( int _id );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void consultar_funcionarios( int _id );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void remover_funcionario( int _id );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void remover_animal( int _id );

	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void alterar_dados_animais( int _id );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param[in]  _id   The identifier
	 */
	void alterar_dados_funcionarios( int _id );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param      dados_animais  The dados animais
	 */
	void importar_dados_animais( std::ifstream& dados_animais );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param      dados_funcionarios  The dados funcionarios
	 */
	void importar_dados_funcionarios( std::ifstream& dados_funcionarios );

	/**
	 * @brief      Returns a string representation of the object.
	 *
	 * @param[in]  target  The target
	 *
	 * @tparam     T       { description }
	 *
	 * @return     String representation of the object.
	 */
	template < typename T >
	std::string to_string( T target );

	/**
	 * @brief      { function_description }
	 *
	 * @param      dados_animais  The dados animais
	 */
	void exportar_dados_animais( std::ofstream& dados_animais );
	
	/**
	 * @brief      { function_description }
	 *
	 * @param      dados_funcionarios  The dados funcionarios
	 */
	void exportar_dados_funcionarios( std::ofstream& dados_funcionarios );

	/**
	 * @brief      { function_description }
	 *
	 * @return     { description_of_the_return_value }
	 */
	unsigned int quantidade_animais_cadastrados( void );
	
	/**
	 * @brief      { function_description }
	 *
	 * @return     { description_of_the_return_value }
	 */
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif