/**
 * @file Funcionario.hpp
 * @brief      Declaração das classe Funcionario e suas subclasses
 *             Veterinario e Tratador, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <memory>
#include <string>

namespace PetFera
{
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
		virtual ~Funcionario(){};
		
		int get_id ( void );
		std::string get_nome ( void );
		std::string get_funcao ( void );
		std::string get_CPF ( void );
		short get_idade ( void );
		std::string get_t_sangue ( void );
		char get_RH ( void );
		std::string get_espec ( void );

		void set_idade ( short _idade );

		void printFuncionario( void );
	};

	class Veterinario : public Funcionario
	{
	public:
		Veterinario( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 std::string _tipo_sangue, char _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }

		~Veterinario(){};
		
	};

	class Tratador : public Funcionario
	{
	public:
		Tratador( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 std::string _tipo_sangue, char _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
		{ /* Vazio */ }
			
		~Tratador(){};
		
	};
}

#endif
