/**
 * @file Anfibio.hpp
 * @brief      Declaração da classe Anfibio do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef ANFIBIO_HPP
#define ANFIBIO_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	/**
	 * @brief      Classe para anfibio.
	 */
	class Anfibio : public Animal
	{
	protected:
		int 		m_total_mudas;
		std::string m_ultima_muda;

	public:

		/**
		 * @brief      Retorna o total mudas.
		 *
		 * @return     O total mudas.
		 */
		int get_total_mudas( void );
		
		/**
		 * @brief      Retorna o ultima muda.
		 *
		 * @return     O ultima muda.
		 */
		std::string get_ultima_muda( void );

		/**
		 * @brief      Altera o total mudas.
		 *
		 * @param[in]  new_total  O novo total
		 */
		void set_total_mudas( int new_total );
		
		/**
		 * @brief      Altera a ultima muda.
		 *
		 * @param[in]  new_muda  O nova muda
		 */
		void set_ultima_muda( std::string new_muda );

		/**
		 * @brief      Construtor do Anfibio
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
		 * @param[in]  _total_mudas  O total mudas
		 * @param[in]  _ultima_muda  A ultima muda
		 */
		Anfibio( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				int _total_mudas = 0, std::string _ultima_muda = "0" ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_total_mudas( _total_mudas ), m_ultima_muda( _ultima_muda )
		{	/*	Vazio	*/	}

		/**
		 * @brief      Destrutor da Classe
		 */
		virtual ~Anfibio(){};

		/**
		 * @brief      Imprime os dados do Anfibio
		 *
		 * @param      _os   O Ostream alvo
		 *
		 * @return     { description_of_the_return_value }
		 */
		virtual std::ostream& print( std::ostream & _os );

		/**
		 * @brief      Imprime os dados do anfibio
		 */
		void printAnimal(void);

	};
}

#endif