/**
 * @file Reptil.hpp
 * @brief      Declaração da classe Reptil do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef REPTIL_HPP
#define REPTIL_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	/**
	 * @brief      Class for reptil.
	 */
	class Reptil : public Animal
	{
	protected:
		bool 		m_venenoso;
		std::string m_tipo_veneno;

	public:

		/**
		 * @brief      Determines if venenoso.
		 *
		 * @return     True if venenoso, False otherwise.
		 */
		bool is_venenoso( void );

		/**
		 * @brief      Gets the tipo veneno.
		 *
		 * @return     The tipo veneno.
		 */
		std::string get_tipo_veneno( void );

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
		 * @param[in]  _venenoso     The venenoso
		 * @param[in]  _tipo_veneno  The tipo veneno
		 */
		Reptil( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				bool _venenoso = false, std::string _tipo_veneno = "")
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_venenoso( _venenoso ), m_tipo_veneno( _tipo_veneno )
		{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Reptil(){};
		
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