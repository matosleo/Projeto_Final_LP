/**
 * @file AveExotico.hpp
 * @brief      Declaração da classe AveExotico do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef AVE_EXOTICO_HPP
#define AVE_EXOTICO_HPP

#include "Ave.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	/**
	 * @brief      Class for ave exotico.
	 */
	class AveExotico : public Ave , public Exotico
	{
	public:

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id            The identifier
		 * @param[in]  _classe        The classe
		 * @param[in]  _tipo          The tipo
		 * @param[in]  _nome          The nome
		 * @param[in]  _cientifico    The cientifico
		 * @param[in]  _sexo          The sexo
		 * @param[in]  _tamanho       The tamanho
		 * @param[in]  _dieta         The dieta
		 * @param[in]  _veterinario   The veterinario
		 * @param[in]  _tratador      The tratador
		 * @param[in]  _batismo       The batismo
		 * @param[in]  _tamanho_bico  The tamanho bico
		 * @param[in]  _envergadura   The envergadura
		 * @param[in]  _ibama         The ibama
		 * @param[in]  _pais_origem   The pais origem
		 */
		AveExotico(int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				int _tamanho_bico, int _envergadura, std::string _ibama, std::string _pais_origem )
			: Ave( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
					_batismo, _tamanho_bico, _envergadura )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		~AveExotico(){};

		/**
		 * @brief      { function_description }
		 */
		void printAnimal(void);
	};
}

#endif