/**
 * @file AnfibioExotico.hpp
 * @brief      Declaração da classe AnfibioExotico do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef ANFIBIO_EXOTICO_HPP
#define ANFIBIO_EXOTICO_HPP

#include "Anfibio.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{
	/**
	 * @brief      Classe para anfibio exotico.
	 */
	class AnfibioExotico : public Anfibio , public Exotico
	{
	public:

		/**
		 * @brief      Construtor da classe
		 *
		 * @param[in]  _id           O identifier
		 * @param[in]  _classe       A classe
		 * @param[in]  _tipo         O tipo
		 * @param[in]  _nome         O nome
		 * @param[in]  _cientifico   O nome cientifico
		 * @param[in]  _sexo         O sexo
		 * @param[in]  _tamanho      O tamanho
		 * @param[in]  _dieta        A dieta
		 * @param[in]  _veterinario  O veterinario
		 * @param[in]  _tratador     O tratador
		 * @param[in]  _batismo      O nome de batismo
		 * @param[in]  _total_mudas  O total mudas
		 * @param[in]  _ultima_muda  A ultima muda
		 * @param[in]  _ibama        O ibama
		 * @param[in]  _pais_origem  O pais origem
		 */
		AnfibioExotico( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				int _total_mudas, std::string _ultima_muda, std::string _ibama, std::string _pais_origem )
			: Anfibio( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _total_mudas, _ultima_muda )
			, Exotico( _ibama, _pais_origem )
			{	/*	Vazio	*/	}

		/**
		 * @brief      Destrutor da classe
		 */
		~AnfibioExotico(){};

		/**
		 * @brief      Imprime os dados do animal
		 */
		void printAnimal(void);
	};
}

#endif