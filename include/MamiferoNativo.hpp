/**
 * @file MamiferoNativo.hpp
 * @brief      Declaração da classe MamiferoNativo do
 *             namespace PetFera, seus atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef MAMIFERO_NATIVO_HPP
#define MAMIFERO_NATIVO_HPP

#include "Mamifero.hpp"
#include "Silvestre.hpp"
#include <sstream>
#include <vector>

using namespace PetFera;

namespace PetFera
{

	/**
	 * @brief      Class for mamifero nativo.
	 */
	class MamiferoNativo : public Mamifero , public Nativo
	{
	public:

		/**
		 * @brief      { function_description }
		 *
		 * @param[in]  _id           The identifier
		 * @param[in]  _classe       The classe
		 * @param[in]  _tipo         The tipo
		 * @param[in]  _nome         The nome
		 * @param[in]  _cientifico   The cientifico
		 * @param[in]  _sexo         The sexo
		 * @param[in]  _tamanho      The tamanho
		 * @param[in]  _dieta        The dieta
		 * @param[in]  _veterinario  The veterinario
		 * @param[in]  _tratador     The tratador
		 * @param[in]  _batismo      The batismo
		 * @param[in]  _cor_pelo     The cor pelo
		 * @param[in]  _ibama        The ibama
		 * @param[in]  _uf_origem    The uf origem
		 * @param[in]  _autorizacao  The autorizacao
		 */
		MamiferoNativo( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo,
				std::string _cor_pelo, std::string _ibama, std::string _uf_origem, std::string _autorizacao )
			: Mamifero( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
						, _batismo, _cor_pelo )
			, Nativo( _ibama, _uf_origem, _autorizacao )
			{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		~MamiferoNativo(){};

		/**
		 * @brief      { function_description }
		 */
		void printAnimal(void);
		
	};
}
#endif