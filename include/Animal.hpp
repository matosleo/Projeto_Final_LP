/**
 * @file Animal.hpp
 * @brief      Declaração da classe Animal do namespace PetFera, seus atributos
 *             e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <memory>

typedef std::shared_ptr< Veterinario >	V_pointer;
typedef std::shared_ptr< Tratador >		T_pointer;

namespace PetFera
{
	class Animal
	{
	protected:
		int 		m_id;
		std::string m_classe;
		std::string m_nome;
		std::string m_cientifico;
		char 		m_sexo;
		float 		m_tamanho;
		std::string m_dieta;
		V_pointer 	m_veterinario;
		T_pointer	m_tratador;
		std::string m_batismo;

	public:

		Animal(	int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, V_pointer _veterinario, T_pointer _tratador, std::string _batismo )
			: m_id( _id )
			, m_classe( _classe )
			, m_nome( _nome )
			, m_cientifico( _cientifico )
			, m_sexo( _sexo )
			, m_tamanho( _tamanho )
			, m_dieta( _dieta )
			, m_veterinario( _veterinario )
			, m_tratador( _tratador )
			, m_batismo( _batismo )
		{ /* Vazio */ }

		virtual ~Animal();

		int 		get_id( void );
		std::string get_classe( void );
		std::string get_nome( void );
		std::string get_cientifico( void );
		char 		get_sexo( void );
		float 		get_tamanho( void );
		std::string get_dieta( void );
		V_pointer	get_veterinario( void );
		T_pointer 	get_tratador( void );
		std::string get_batismo( void );

//		void set_id( int new_id );
//		void set_classe( void );
		void set_nome( std::string new_nome );
//		void set_cientifico( void );
//		void set_sexo( void );
		void set_tamanho( float new_tamanho );
		void set_dieta( std::string new_dieta );
		void set_veterinario( V_pointer new_veterinario );
		void set_tratador( T_pointer new_tratador );
//		void set_batismo( void );

	};

}
#endif