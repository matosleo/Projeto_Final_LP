/**
 * @file ReptilExotico.hpp
 * @brief      Declaração da classe ReptilExotico do namespace PetFera, seus
 *             atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef REPTIL_EXOTICO_HPP
#define REPTIL_EXOTICO_HPP

#include "Reptil.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	class ReptilExotico : public Reptil , Exotico
	{
	public:
		ReptilExotico(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				bool _venenoso, std::string _tipo_veneno, std::string _ibama, std::string _pais_origem )
			: Reptil( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, 
						_batismo, _venenoso, _tipo_veneno )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		~ReptilExotico(){};

		void printAnimal(void);
		
	};
}
#endif