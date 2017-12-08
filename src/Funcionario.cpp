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

std::string Funcionario::get_funcao( void )
{

	return m_funcao;

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

void Funcionario::set_idade ( int _idade )
{

	m_idade = _idade;

}

void Funcionario::printFuncionario( void )
{

	std::cout << std::endl;
	std::cout << ">>>>> Ficha do Funcionario <<<<<" << std::endl;
	std::cout << "ID:\t\t"     		<< this->get_id() << std::endl;
	std::cout << "Funcao:\t"    	<< this->get_funcao() << std::endl;
	std::cout << "Nome:\t\t"     	<< this->get_nome() << std::endl;
	std::cout << "CPF:\t"  			<< this->get_CPF() << std::endl;
	std::cout << "Idade:\t\t"    	<< this->get_idade() << std::endl;
	std::cout << "Tipo Sanguineo:\t\t"    		<< this->get_t_sangue() << std::endl;
	std::cout << "Fator RH:\t\t"  		<< this->get_RH() << std::endl;
	std::cout << "Especialidade:\t"  		<< this->get_espec() << std::endl;
	std::cout << std::endl;

}