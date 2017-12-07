/**
 * @file Animal_Classes.hpp
 * @brief      Implementação das classes Anfibio, Mamifero, Reptil e Ave do
 *             namespace PetFera, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       02/12/2017
 */

#include "Animal_Classes.hpp"

#include <iostream>
using namespace PetFera;

int Anfibio::get_total_mudas( void )
{
	return m_total_mudas;
}

std::string Anfibio::get_ultima_muda( void )
{
	return m_ultima_muda;
}

void Anfibio::set_total_mudas( int new_total )
{
	m_total_mudas = new_total;
}
void Anfibio::set_ultima_muda( std::string new_muda )
{
	m_ultima_muda = new_muda;
}

std::ostream& Anfibio::print( std::ostream & _os )
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
		<< "Número de mudas: " << m_total_mudas << std::endl
		<< "Data da última muda: " << m_ultima_muda << std::endl;

	return _os;
}

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

std::ostream& Reptil::print( std::ostream & _os )
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
		<< "Possui Veneno: " << ((m_venenoso) ? "Sim" :"Não") << std::endl
		<< "Tipo de Veneno: " << m_tipo_veneno << std::endl;

	return _os;
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
		<< "Veterinário responsável: " << m_veterinario->get_nome() << std::endl
		<< "Tratador responsável: " << m_tratador->get_nome() << std::endl
		<< "Nome de Batismo: " << m_batismo << std::endl
		<< "Tamanho do Bico: " << m_tamanho_bico << std::endl
		<< "Envergadura: " << m_envergadura << std::endl;

	return _os;
}

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
bool Reptil::is_venenoso( void )
{
	return m_venenoso;
}

std::string Reptil::get_tipo_veneno( void )
{
	return m_tipo_veneno;
}

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
