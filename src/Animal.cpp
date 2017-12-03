/**
 * @file Animal.hpp
 * @brief      Implementação da classe Animal do namespace PetFera, seus
 *             atributos e métodos.
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#include "Animal.hpp"

using namespace PetFera;

int Animal::get_id( void )
{
	return m_id;
}
std::string Animal::get_classe( void )
{
	return m_classe;
}
std::string Animal::get_nome( void )
{
	return m_nome;
}
std::string Animal::get_cientifico( void )
{
	return m_cientifico;
}
char Animal::get_sexo( void )
{
	return m_sexo;
}
float Animal::get_tamanho( void )
{
	return m_tamanho;
}
std::string Animal::get_dieta( void )
{
	return m_dieta;
}
V_pointer Animal::get_veterinario( void )
{
	return m_veterinario;
}
T_pointer Animal::get_tratador( void )
{
	return m_tratador;
}
std::string Animal::get_batismo( void )
{
	return m_batismo;
}


/*
void Animal::set_id( int new_id )
{
	m_id = new_id;
}

void Animal::set_classe( std::string new_classe )
{
	m_classe = new_classe;
}*/

void Animal::set_nome( std::string new_nome )
{
	m_nome = new_nome;
}

void Animal::set_cientifico( std::string new_cientifico )
{
	m_cientifico = new_cientifico;
}
/*
void Animal::set_sexo( char new_sexo )
{
	m_sexo = new_sexo;
}
*/
void Animal::set_tamanho( float new_tamanho )
{
	m_tamanho = new_tamanho;
}

void Animal::set_dieta( std::string new_dieta )
{
	m_dieta = new_dieta;
}

void Animal::set_veterinario( V_pointer new_veterinario )
{
	m_veterinario = new_veterinario;
}

void Animal::set_tratador( T_pointer new_tratador )
{
	m_tratador = new_tratador;
}
/*
void Animal::set_batismo( std::string new_batismo )
{
	m_batismo = new_batismo;
}
*/