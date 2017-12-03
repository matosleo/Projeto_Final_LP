/**
 * @file Silvestre.cpp
 * @brief      Declaração da classe AnimalSilvestre e suas subclasses
 *             Nativo e Exotico, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef SILVESTRE_HPP
#define SILVESTRE_HPP

#include <string>

namespace PetFera
{

	class AnimalSilvestre
	{
	protected:
		std::string m_ibama;

	public:

		std::string get_ibama( void );

		AnimalSilvestre( std::string _ibama ) : m_ibama( _ibama )
		{	/*	Vazio	*/	}

		~AnimalSilvestre();
		
	};

	class Nativo : public AnimalSilvestre
	{
	protected:
		std::string m_uf_origem;
		std::string m_autorizacao;

	public:

		std::string get_uf_origem( void );
		std::string get_autorizacao( void );

		void set_autorizacao( std::string new_autorizacao );

		Nativo( std::string _ibama, std::string _uf_origem, std::string _autorizacao )
			: AnimalSilvestre( _ibama )
			, m_uf_origem( _uf_origem )
			, m_autorizacao( _autorizacao )
			{	/*	Vazio	*/	}

		~Nativo();
		
	};

	class Exotico : public AnimalSilvestre
	{
	protected:
		std::string m_pais_origem;

	public:

		std::string get_pais_origem( void );

		Exotico( std::string _ibama, std::string _pais_origem )
			: AnimalSilvestre( _ibama )
			, m_pais_origem( _pais_origem )
			{	/*	Vazio	*/	}

		~Exotico();
		
	};
}

#endif