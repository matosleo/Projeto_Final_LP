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
#include <iostream>
#include "Funcionario.hpp"

#include <memory>

#include <string>

//using F_pointer = std::shared_ptr< PetFera::Veterinario >;
//using F_pointer = std::shared_ptr< PetFera::Tratador >;

//typedef std::shared_ptr< PetFera::Veterinario >	F_pointer;
//typedef std::shared_ptr< PetFera::Tratador >	F_pointer;

typedef PetFera::Funcionario* F_pointer;

namespace PetFera
{
	class Animal
	{
	protected:

		int 		m_id;
		std::string m_classe;
		std::string m_tipo;
		std::string m_nome;
		std::string m_cientifico;
		char 		m_sexo;
		float 		m_tamanho;
		std::string m_dieta;
		F_pointer 	m_veterinario;
		F_pointer	m_tratador;
		std::string m_batismo;

	public:

		Animal(	int _id, std::string _classe, std::string _tipo, std::string _nome, std::string _cientifico, char _sexo, 
				float _tamanho, std::string _dieta, F_pointer _veterinario, F_pointer _tratador, std::string _batismo )
			: m_id( _id )
			, m_classe( _classe )
			, m_tipo( _tipo )
			, m_nome( _nome )
			, m_cientifico( _cientifico )
			, m_sexo( _sexo )
			, m_tamanho( _tamanho )
			, m_dieta( _dieta )
			, m_veterinario( _veterinario )
			, m_tratador( _tratador )
			, m_batismo( _batismo )
		{ /* Vazio */ }

		virtual ~Animal(){};

		int 		get_id( void );
		std::string get_classe( void );
//		std::string get_tipo( void );
		std::string get_nome( void );
		std::string get_cientifico( void );
		char 		get_sexo( void );
		float 		get_tamanho( void );
		std::string get_dieta( void );
		F_pointer	get_veterinario( void );
		F_pointer 	get_tratador( void );
		std::string get_batismo( void );

//		void set_id( int new_id );
//		void set_classe( std::string new_clasee );
		void set_nome( std::string new_nome );
//		void set_cientifico( void );
//		void set_sexo( void );
		void set_tamanho( float new_tamanho );
		void set_dieta( std::string new_dieta );
		void set_veterinario( F_pointer new_veterinario );
		void set_tratador( F_pointer new_tratador );
//		void set_batismo( void );

		virtual std::ostream& print( std::ostream & _os );

		inline friend std::ostream & operator << ( std::ostream & _os , Animal & _animal ) 
		{
			_animal.print( _os );
			return _os;
		}

	};

}
#endif