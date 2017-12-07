/**
 * @file AnfibioExotico.hpp
 * @brief      Declaração da classe AnfibioExotico do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef ANFIBIO_EXOTICO_HPP
#define ANFIBIO_EXOTICO_HPP

#include "Animal_Classes.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	class AnfibioExotico : public Anfibio , Exotico
	{
	public:
		AnfibioExotico( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _total_mudas, std::string _ultima_muda, std::string _ibama, std::string _pais_origem )
			: Anfibio( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _total_mudas, _ultima_muda )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		~AnfibioExotico(){};
	};
}

#endif