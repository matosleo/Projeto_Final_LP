/**
 * @file Animal_Classes.hpp
 * @brief      Declaração das classes Anfibio, Mamifero, Reptil e Ave do
 *             namespace PetFera, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef ANIMAL_CLASSES_HPP
#define ANIMAL_CLASSES_HPP

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
		
	};

	class Mamifero : public Animal
	{
	protected:
		std::string m_cor_pelo;

	public:

		std::string get_cor_pelo( void );
	//	std::string set_cor_pelo( std::string new_muda );

		Mamifero( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				std::string _cor_pelo ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_cor_pelo( _cor_pelo )
			{	/*	Vazio	*/	}

		~Mamifero(){};
		
	};

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

		~Reptil(){};
		
	};

	class Ave : public Animal
	{
	protected:
		int m_tamanho_bico;
		int m_envergadura;

	public:

		int get_tamanho_bico( void );
		int get_envergadura( void );

		void set_tamanho_bico( int new_tamanho_bico );
		void set_envergadura( int new_envergadura );

		Ave( int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo,
				int _tamanho_bico, int _envergadura ) 
			: Animal( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
			, m_tamanho_bico( _tamanho_bico ), m_envergadura( _envergadura )
			{	/*	Vazio	*/	}

		~Ave(){};
		
	};

}

#endif