/**
 * @file Funcionario.cpp
 * @brief      Implementação das classe Funcionario e suas subclasses
 *             Veterinario e Tratador, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#include "Funcionario.hpp"

using namespace PetFera;

int Funcionario::get_id ( void )
{
	return m_id;
}

std::string Funcionario::get_nome ( void )
{
	return m_nome;
}

std::string Funcionario::get_CPF ( void )
{
	return m_CPF;
}

short Funcionario::get_idade ( void )
{
	return m_idade;
}

short Funcionario::get_t_sangue ( void )
{
	return m_tipo_sangue;
}

short Funcionario::get_RH ( void )
{
	return m_fator_RH;
}

std::string Funcionario::get_espec ( void )
{
	return m_especialidade;
}
