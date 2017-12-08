/**
 * @file Funcionario.hpp
 * @brief      Declaração das classe Funcionario e suas subclasses
 *             Veterinario e Tratador, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <memory>
#include <string>

namespace PetFera
{
	/**
	 * @brief      Class for funcionario.
	 */
	class Funcionario
	{
	protected:
		int 		m_id;
		std::string m_funcao;
		std::string m_nome;
		std::string m_CPF;
		short 		m_idade;
		std::string	m_tipo_sangue;		// A / B / AB / O
		char 		m_fator_RH;			// + / -
		std::string m_especialidade;

	public:

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id             The identifier
		 * @param[in]  _funcao         The funcao
		 * @param[in]  _nome           The nome
		 * @param[in]  _CPF            The cpf
		 * @param[in]  _idade          The idade
		 * @param[in]  _tipo_sangue    The tipo sangue
		 * @param[in]  _fator_RH       The fator rh
		 * @param[in]  _especialidade  The especialidade
		 */
		Funcionario( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 std::string _tipo_sangue, char _fator_RH, std::string _especialidade )
			: m_id 				(_id)
			, m_funcao 			(_funcao)
			, m_nome 			(_nome) 
			, m_CPF 			(_CPF)
			, m_idade 			(_idade)
			, m_tipo_sangue 	(_tipo_sangue)
			, m_fator_RH 		(_fator_RH)
			, m_especialidade 	(_especialidade)
		{ /* Vazio */ }

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Funcionario(){};
		
		/**
		 * @brief      Gets the identifier.
		 *
		 * @return     The identifier.
		 */
		int get_id ( void );
		
		/**
		 * @brief      Gets the nome.
		 *
		 * @return     The nome.
		 */
		std::string get_nome ( void );
		
		/**
		 * @brief      Gets the funcao.
		 *
		 * @return     The funcao.
		 */
		std::string get_funcao ( void );
		
		/**
		 * @brief      Gets the cpf.
		 *
		 * @return     The cpf.
		 */
		std::string get_CPF ( void );
		
		/**
		 * @brief      Gets the idade.
		 *
		 * @return     The idade.
		 */
		short get_idade ( void );
		
		/**
		 * @brief      Gets the t sangue.
		 *
		 * @return     The t sangue.
		 */
		std::string get_t_sangue ( void );
		
		/**
		 * @brief      Gets the rh.
		 *
		 * @return     The rh.
		 */
		char get_RH ( void );
		
		/**
		 * @brief      Gets the espec.
		 *
		 * @return     The espec.
		 */
		std::string get_espec ( void );

		/**
		 * @brief      Sets the idade.
		 *
		 * @param[in]  _idade  The idade
		 */
		void set_idade ( short _idade );

		/**
		 * @brief      { function_description }
		 */
		void printFuncionario( void );
	};

	/**
	 * @brief      Class for veterinario.
	 */
	class Veterinario : public Funcionario
	{
	public:

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id             The identifier
		 * @param[in]  _funcao         The funcao
		 * @param[in]  _nome           The nome
		 * @param[in]  _CPF            The cpf
		 * @param[in]  _idade          The idade
		 * @param[in]  _tipo_sangue    The tipo sangue
		 * @param[in]  _fator_RH       The fator rh
		 * @param[in]  _especialidade  The especialidade
		 */
		Veterinario( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 std::string _tipo_sangue, char _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }

		/**
		 * @brief      Destroys the object.
		 */
		~Veterinario(){};
		
	};

	/**
	 * @brief      Class for tratador.
	 */
	class Tratador : public Funcionario
	{
	public:

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id             The identifier
		 * @param[in]  _funcao         The funcao
		 * @param[in]  _nome           The nome
		 * @param[in]  _CPF            The cpf
		 * @param[in]  _idade          The idade
		 * @param[in]  _tipo_sangue    The tipo sangue
		 * @param[in]  _fator_RH       The fator rh
		 * @param[in]  _especialidade  The especialidade
		 */
		Tratador( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 std::string _tipo_sangue, char _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }
			
		/**
		 * @brief      Destroys the object.
		 */
		~Tratador(){};
		
	};
}

#endif
