/**
 * @file Mamifero.hpp
 * @brief      Declaração da classe Mamifero do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	/**
	 * @brief      Class for mamifero.
	 */
	class Mamifero : public Animal
	{
	protected:
		std::string m_cor_pelo;

	public:

		/**
		 * @brief      Gets the cor pelo.
		 *
		 * @return     The cor pelo.
		 */
		std::string get_cor_pelo( void );

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id           The identifier
		 * @param[in]  _classe       The classe
		 * @param[in]  _tipo         The tipo
		 * @param[in]  _nome         The nome
		 * @param[in]  _cientifico   The cientifico
		 * @param[in]  _sexo         The sexo
		 * @param[in]  _tamanho      The tamanho
		 * @param[in]  _dieta        The dieta
		 * @param[in]  _veterinario  The veterinario
		 * @param[in]  _tratador     The tratador
		 * @param[in]  _batismo      The batismo
		 * @param[in]  _cor_pelo     The cor pelo
		 */
		Mamifero( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				std::string _cor_pelo ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_cor_pelo( _cor_pelo )
		{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Mamifero(){};
		
		/**
		 * @brief      { function_description }
		 *
		 * @param      _os   The operating system
		 *
		 * @return     { description_of_the_return_value }
		 */
		virtual std::ostream& print( std::ostream & _os );

		/**
		 * @brief      { function_description }
		 */
		void printAnimal(void);
	};
}

#endif