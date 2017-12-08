/**
 * @file Silvestre.cpp
 * @brief      Declaração da classe AnimalSilvestre e suas subclasses
 *             Nativo e Exotico, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       08/12/2017
 */

#ifndef SILVESTRE_HPP
#define SILVESTRE_HPP

#include <string>

namespace PetFera
{

	/**
	 * @brief      Classe para animal silvestre.
	 */
	class AnimalSilvestre
	{
	protected:
		std::string m_ibama;

	public:

		/**
		 * @brief      Gets the ibama.
		 *
		 * @return     The ibama.
		 */
		std::string get_ibama( void );

		/**
		 * @brief      Construtor do AnimalSilvestre
		 *
		 * @param[in]  _ibama  The ibama
		 */
		AnimalSilvestre( std::string _ibama ) : m_ibama( _ibama )
		{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~AnimalSilvestre(){};
		
	};

	/**
	 * @brief      Classe para nativo.
	 */
	class Nativo : public AnimalSilvestre
	{
	protected:
		std::string m_uf_origem;
		std::string m_autorizacao;

	public:

		/**
		 * @brief      Gets the uf origem.
		 *
		 * @return     The uf origem.
		 */
		std::string get_uf_origem( void );

		/**
		 * @brief      Gets the autorizacao.
		 *
		 * @return     The autorizacao.
		 */
		std::string get_autorizacao( void );

		/**
		 * @brief      Sets the autorizacao.
		 *
		 * @param[in]  new_autorizacao  The new autorizacao
		 */
		void set_autorizacao( std::string new_autorizacao );

		/**
		 * @brief      Construtor do Nativo
		 *
		 * @param[in]  _ibama        The ibama
		 * @param[in]  _uf_origem    The uf origem
		 * @param[in]  _autorizacao  The autorizacao
		 */
		Nativo( std::string _ibama, std::string _uf_origem, std::string _autorizacao )
			: AnimalSilvestre( _ibama )
			, m_uf_origem( _uf_origem )
			, m_autorizacao( _autorizacao )
			{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Nativo(){};
		
	};

	/**
	 * @brief      Classe para exotico.
	 */
	class Exotico : public AnimalSilvestre
	{
	protected:
		std::string m_pais_origem;

	public:

		/**
		 * @brief      Gets the pais origem.
		 *
		 * @return     The pais origem.
		 */
		std::string get_pais_origem( void );

		/**
		 * @brief      Construtor para o Exotico
		 *
		 * @param[in]  _ibama        The ibama
		 * @param[in]  _pais_origem  The pais origem
		 */
		Exotico( std::string _ibama, std::string _pais_origem )
			: AnimalSilvestre( _ibama )
			, m_pais_origem( _pais_origem )
			{	/*	Vazio	*/	}

		/**
		 * @brief      Destroys the object.
		 */
		virtual ~Exotico(){};
		
	};
}

#endif