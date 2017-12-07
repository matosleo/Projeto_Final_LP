/**
 * @file Reptil.hpp
 * @brief      Implementação da classe Reptil do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Animal_Classes.hpp"

#include <iostream>
using namespace PetFera;

bool Reptil::is_venenoso( void )
{
	return m_venenoso;
}

std::string Reptil::get_tipo_veneno( void )
{
	return m_tipo_veneno;
}

std::ostream& Reptil::print( std::ostream & _os )
{
	_os << "ID: " << m_id << std::endl
		<< "Classe: " << m_classe << std::endl
		<< "Nome: " << m_nome << std::endl
		<< "Nome Cientifico: " << m_cientifico << std::endl
		<< "Sexo: " << ((m_sexo == 'M') ? "Masculino": "Feminino") << std::endl
		<< "Tamanho: " << m_tamanho << std::endl
		<< "Principal componente da Dieta: " << m_dieta << std::endl
		<< "Veterinário responsável: " << ((m_veterinario == nullptr ) ? m_veterinario->get_nome() : "Não possui") << std::endl
		<< "Tratador responsável: " << ((m_tratador == nullptr ) ? m_tratador->get_nome() : "Não possui") << std::endl
		<< "Nome de Batismo: " << m_batismo << std::endl
		<< "Possui Veneno: " << ((m_venenoso) ? "Sim" :"Não") << std::endl
		<< "Tipo de Veneno: " << m_tipo_veneno << std::endl;

	return _os;
}