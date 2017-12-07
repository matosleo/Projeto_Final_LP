/**
 * @file AveExotico.hpp
 * @brief      Declaração da classe AveExotico do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef AVE_EXOTICO_HPP
#define AVE_EXOTICO_HPP

#include "Animal_Classes.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	class AveExotico : public Ave , Exotico
	{
	public:
		AveExotico(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _tamanho_bico, int _envergadura, std::string _ibama, std::string _pais_origem )
			: Ave( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
					_batismo, _tamanho_bico, _envergadura )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		~AveExotico(){};
	};
}

#endif