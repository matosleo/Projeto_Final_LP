/**
 * @file Animal.hpp
 * @brief      Declaração da classe Animal do namespace PetFera, seus atributos
 *             e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Funcionario.hpp"

#include <memory>

#include <string>

typedef PetFera::Funcionario* F_pointer;

namespace PetFera
{
	/**
	 * @brief      Classe para Animal.
	 */
	class Animal
	{
	protected:

		int 		m_id;
		std::string m_classe;
		std::string m_tipo;
		std::string m_nome;
		std::string m_cientifico;
		char 		m_sexo;
		float 		m_tamanho;
		std::string m_dieta;
		F_pointer 	m_veterinario;
		F_pointer	m_tratador;
		std::string m_batismo;

	public:

		/**
		 * @brief      Construtor de um Animal
		 *
		 * @param[in]  _id           O identifier
		 * @param[in]  _classe       A classe
		 * @param[in]  _tipo         O tipo
		 * @param[in]  _nome         O nome
		 * @param[in]  _cientifico   O nome cientifico
		 * @param[in]  _sexo         O sexo
		 * @param[in]  _tamanho      O tamanho
		 * @param[in]  _dieta        A dieta
		 * @param[in]  _veterinario  O veterinario
		 * @param[in]  _tratador     O tratador
		 * @param[in]  _batismo      O nome de batismo
		 */
		Animal(	int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo )
			: m_id( _id )
			, m_classe( _classe )
			, m_tipo( _tipo )
			, m_nome( _nome )
			, m_cientifico( _cientifico )
			, m_sexo( _sexo )
			, m_tamanho( _tamanho )
			, m_dieta( _dieta )
			, m_veterinario( _veterinario )
			, m_tratador( _tratador )
			, m_batismo( _batismo )
		{ /* Vazio */ }

		/**
		 * @brief      Destrutor da Classe Animal
		 */
		virtual ~Animal(){};

		/**
		 * @brief      Retorna o identifier.
		 *
		 * @return     o identifier.
		 */
		int 		get_id( void );
		
		/**
		 * @brief      Retorna a classe.
		 *
		 * @return     a classe.
		 */
		std::string get_classe( void );
		
		/**
		 * @brief      Retorna o tipo.
		 *
		 * @return     o tipo.
		 */
		std::string get_tipo( void );
		
		/**
		 * @brief      Retorna o nome.
		 *
		 * @return     o nome.
		 */
		std::string get_nome( void );
		
		/**
		 * @brief      Retorna o nome cientifico.
		 *
		 * @return     o nome cientifico.
		 */
		std::string get_cientifico( void );
		
		/**
		 * @brief      Retorna o sexo.
		 *
		 * @return     o sexo.
		 */
		char 		get_sexo( void );
		
		/**
		 * @brief      Retorna o tamanho.
		 *
		 * @return     o tamanho.
		 */
		float 		get_tamanho( void );
		
		/**
		 * @brief      Retorna a dieta.
		 *
		 * @return     a dieta.
		 */
		std::string get_dieta( void );
		
		/**
		 * @brief      Retorna o veterinario.
		 *
		 * @return     o veterinario.
		 */
		F_pointer	get_veterinario( void );
		
		/**
		 * @brief      Retorna o tratador.
		 *
		 * @return     o tratador.
		 */
		F_pointer 	get_tratador( void );
		
		/**
		 * @brief      Retorna o nome de batismo.
		 *
		 * @return     o nome de  batismo.
		 */
		std::string get_batismo( void );

		/**
		 * @brief      Altera o nome.
		 *
		 * @param[in]  new_nome  O novo nome
		 */
		void set_nome( std::string new_nome );
		
		/**
		 * @brief      Altera o tamanho.
		 *
		 * @param[in]  new_tamanho  O novo tamanho
		 */
		void set_tamanho( float new_tamanho );
		
		/**
		 * @brief      Altera a dieta.
		 *
		 * @param[in]  new_dieta  A nova dieta
		 */
		void set_dieta( std::string new_dieta );
		
		/**
		 * @brief      Altera o veterinario.
		 *
		 * @param[in]  new_veterinario  O novo veterinario
		 */
		void set_veterinario( F_pointer new_veterinario );
		
		/**
		 * @brief      Altera o tratador.
		 *
		 * @param[in]  new_tratador  O novo tratador
		 */
		void set_tratador( F_pointer new_tratador );

		/**
		 * @brief      Imprime os dados de um animal no ostram alvo
		 *
		 * @param      _os   o ostream alvo
		 *
		 * @return     O ostram já formatado com os devidos dados
		 */
		virtual std::ostream& print( std::ostream & _os );

		/**
		 * @brief      Sobrecarga do operador <<
		 *
		 * @param      _os   o ostream alvo
		 *
		 * @return     O ostram já formatado com os devidos dados
		 */
		inline friend std::ostream & operator << ( std::ostream & _os , Animal & _animal ) 
		{
			_animal.print( _os );
			return _os;
		}

	};

}
#endif