/**
 * @file Mamifero.hpp
 * @brief      Declaração da classe Mamifero do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef MAMIFERO_HPP
#define MAMIFERO_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	class Mamifero : public Animal
	{
	protected:
		std::string m_cor_pelo;

	public:

		std::string get_cor_pelo( void );
	//	std::string set_cor_pelo( std::string new_cor );

		Mamifero( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				std::string _cor_pelo ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_cor_pelo( _cor_pelo )
		{	/*	Vazio	*/	}

		virtual ~Mamifero(){};
		
		virtual std::ostream& print( std::ostream & _os );
	};
}

#endif