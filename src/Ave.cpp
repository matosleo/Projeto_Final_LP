/**
 * @file Ave.hpp
 * @brief      Implementação da classe Ave do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Ave.hpp"

#include <iostream>
using namespace PetFera;

float Ave::get_tamanho_bico( void )
{
	return m_tamanho_bico;
}
float Ave::get_envergadura( void )
{
	return m_envergadura;
}

void Ave::set_tamanho_bico( int new_tamanho_bico )
{
	m_tamanho_bico = new_tamanho_bico;
}

void Ave::set_envergadura( int new_envergadura )
{
	m_envergadura = new_envergadura;
}

std::ostream& Ave::print( std::ostream & _os )
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
		<< "Tamanho do Bico: " << m_tamanho_bico << std::endl
		<< "Envergadura: " << m_envergadura << std::endl;

	return _os;
}

void Ave::printAnimal(void){
	std::cout << std::endl;
	std::cout << ">>>>> Ficha do animal <<<<<" << std::endl;
	std::cout << "ID:\t\t"     		<< this->get_id() << std::endl;
	std::cout << "Classe:\t\t"   	<< this->get_classe() << std::endl;
	std::cout << "Nome:\t\t"     	<< this->get_nome() << std::endl;
	std::cout << "Cientifico:\t"  	<< this->get_cientifico() << std::endl;
	std::cout << "Batismo:\t"    	<< this->get_batismo() << std::endl;
	std::cout << "Dieta:\t\t"    	<< this->get_dieta() << std::endl;
	std::cout << "Sexo:\t\t"    		<< this->get_sexo() << std::endl;
	std::cout << "Veterinario:\t"  	<< (this->get_veterinario()!=nullptr?this->get_veterinario()->get_nome():"") << std::endl;
	std::cout << "Tratador:\t"  		<< (this->get_tratador()!=nullptr?this->get_tratador()->get_nome():"") << std::endl;
	std::cout << "Bico:\t\t"  		<< this->get_tamanho_bico() << std::endl;
	std::cout << "Envergadura:\t"  	<< this->get_envergadura() << std::endl;
	std::cout << std::endl;
}