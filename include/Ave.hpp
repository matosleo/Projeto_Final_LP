/**
 * @file Ave.hpp
 * @brief      Declaração da classe Ave do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef AVE_HPP
#define AVE_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	class Ave : public Animal
	{
	protected:
		float m_tamanho_bico;
		float m_envergadura;

	public:

		float get_tamanho_bico( void );
		float get_envergadura( void );

		void set_tamanho_bico( int new_tamanho_bico );
		void set_envergadura( int new_envergadura );

		Ave( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				float _tamanho_bico, float _envergadura ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_tamanho_bico( _tamanho_bico ), m_envergadura( _envergadura )
		{	/*	Vazio	*/	}

		virtual ~Ave(){};
		
		virtual std::ostream& print( std::ostream & _os );

		void printAnimal(void);
	};
}

#endif