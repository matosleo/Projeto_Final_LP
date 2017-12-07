/**
 * @file MamiferoExotico.hpp
 * @brief      Declaração da classe MamiferoExotico do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef MAMIFERO_EXOTICO_HPP
#define MAMIFERO_EXOTICO_HPP

#include "Mamifero.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	class MamiferoExotico : public Mamifero , Exotico
	{
	public:
		MamiferoExotico( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				std::string _cor_pelo, std::string _ibama, std::string _pais_origem )
			: Mamifero( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _cor_pelo )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		~MamiferoExotico(){};
		
	};
}
#endif