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

#include <memory>
#include <string>
#include <iostream>

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
		short 		m_tipo_sangue;		// A / B / AB / O
		short 		m_fator_RH;			// + / -
		std::string m_especialidade;

	public:

		Funcionario( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 short _tipo_sangue, short _fator_RH, std::string _especialidade )
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
		std::string get_funcao( void );
		std::string get_nome ( void );
		std::string get_CPF ( void );
		short get_idade ( void );
		short get_t_sangue ( void );
		short get_RH ( void );
		std::string get_espec ( void );

		void printFuncionario( void );

		void set_idade ( int _idade );
	/*
		
		std::string set_nome (  );
		std::string set_CPF (  );
		short set_idade (  );
		short set_t_sangue (  );
		short set_RH (  );
		std::string set_espec (  );
	*/
	};

	class Veterinario : public Funcionario
	{
	public:
		Veterinario( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 short _tipo_sangue, short _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
			{ /* Vazio */ }

		~Veterinario(){};
		
		void printFuncionario( void )
		{

			std::cout << std::endl;
			std::cout << ">>>>> Ficha do Funcionario <<<<<" << std::endl;
			std::cout << "ID:\t\t"     		<< this->get_id() << std::endl;
			std::cout << "Funcao:\t"    	<< this->get_funcao() << std::endl;
			std::cout << "Nome:\t\t"     	<< this->get_nome() << std::endl;
			std::cout << "CPF:\t"  	<< this->get_CPF() << std::endl;
			std::cout << "Idade:\t\t"    	<< this->get_idade() << std::endl;
			std::cout << "Tipo Sanguineo:\t\t"    		<< this->get_t_sangue() << std::endl;
			std::cout << "Fator RH:\t\t"  		<< this->get_RH() << std::endl;
			std::cout << "Especialidade:\t"  		<< this->get_espec() << std::endl;
			std::cout << std::endl;

		}

	};

	class Tratador : public Funcionario
	{
	public:
		Tratador( int _id, std::string _funcao, std::string _nome, std::string _CPF, short _idade,
					 short _tipo_sangue, short _fator_RH, std::string _especialidade )
			: Funcionario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade )
			{ /* Vazio */ }
			
		~Tratador(){};

		void printFuncionario( void )
		{

			std::cout << std::endl;
			std::cout << ">>>>> Ficha do Funcionario <<<<<" << std::endl;
			std::cout << "ID:\t\t"     		<< this->get_id() << std::endl;
			std::cout << "Funcao:\t"    	<< this->get_funcao() << std::endl;
			std::cout << "Nome:\t\t"     	<< this->get_nome() << std::endl;
			std::cout << "CPF:\t"  	<< this->get_CPF() << std::endl;
			std::cout << "Idade:\t\t"    	<< this->get_idade() << std::endl;
			std::cout << "Tipo Sanguineo:\t\t"    		<< this->get_t_sangue() << std::endl;
			std::cout << "Fator RH:\t\t"  		<< this->get_RH() << std::endl;
			std::cout << "Especialidade:\t"  		<< this->get_espec() << std::endl;
			std::cout << std::endl;

		}
		
	};
}

#endif
