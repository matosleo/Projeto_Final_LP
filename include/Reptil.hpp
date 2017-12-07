/**
 * @file Reptil.hpp
 * @brief      Declaração da classe Reptil do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef REPTIL_HPP
#define REPTIL_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	class Reptil : public Animal
	{
	protected:
		bool 		m_venenoso;
		std::string m_tipo_veneno;

	public:

		bool is_venenoso( void );
		std::string get_tipo_veneno( void );

		Reptil( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				bool _venenoso = false, std::string _tipo_veneno = "")
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_venenoso( _venenoso ), m_tipo_veneno( _tipo_veneno )
		{	/*	Vazio	*/	}

		virtual ~Reptil(){};
		
		virtual std::ostream& print( std::ostream & _os );
	};
}

#endif