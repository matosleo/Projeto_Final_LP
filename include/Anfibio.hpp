/**
 * @file Anfibio.hpp
 * @brief      Declaração da classe Anfibio do namespace PetFera, seus atributos
 *             e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef ANFIBIO_HPP
#define ANFIBIO_HPP

#include "Animal.hpp"

using namespace PetFera;

namespace PetFera
{
	class Anfibio : public Animal
	{
	protected:
		int 		m_total_mudas;
		std::string m_ultima_muda;

	public:

		int get_total_mudas( void );
		std::string get_ultima_muda( void );

		void set_total_mudas( int new_total );
		void set_ultima_muda( std::string new_muda );

		Anfibio( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _total_mudas = 0, std::string _ultima_muda = "0" ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_total_mudas( _total_mudas ), m_ultima_muda( _ultima_muda )
		{	/*	Vazio	*/	}

		virtual ~Anfibio(){};

		virtual std::ostream& print( std::ostream & _os );
	};
}

#endif