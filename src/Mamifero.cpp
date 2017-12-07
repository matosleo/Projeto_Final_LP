/**
 * @file Mamifero.hpp
 * @brief      Implementação da classe Mamifero do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Mamifero.hpp"

#include <iostream>
using namespace PetFera;

std::string Mamifero::get_cor_pelo( void )
{
	return m_cor_pelo;
}
/*
std::string Mamifero::set_cor_pelo( std::string new_cor )
{
	m_cor_pelo = new_cor;
}
*/
std::ostream& Mamifero::print( std::ostream & _os )
{
	_os << "ID: " << m_id << std::endl
		<< "Classe: " << m_classe << std::endl
		<< "Nome: " << m_nome << std::endl
		<< "Nome Cientifico: " << m_cientifico << std::endl
		<< "Sexo: " << ((m_sexo == 'M') ? "Masculino": "Feminino") << std::endl
		<< "Tamanho: " << m_tamanho << std::endl
		<< "Principal componente da Dieta: " << m_dieta << std::endl
		<< "Veterinário responsável: " << m_veterinario->get_nome() << std::endl
		<< "Tratador responsável: " << m_tratador->get_nome() << std::endl
		<< "Nome de Batismo: " << m_batismo << std::endl
		<< "Cor do Pelo: " << m_cor_pelo << std::endl;

	return _os;
}