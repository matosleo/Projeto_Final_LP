/**
 * @file Anfibio.hpp
 * @brief      Implementação da classe Anfibio do namespace PetFera, seus
 *             atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       07/12/2017
 */

#include "Animal_Classes.hpp"


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
		<< "Veterinário responsável: " << ((m_veterinario == nullptr ) ? m_veterinario->get_nome() : "Não possui") << std::endl
		<< "Tratador responsável: " << ((m_tratador == nullptr ) ? m_tratador->get_nome() : "Não possui") << std::endl
		<< "Nome de Batismo: " << m_batismo << std::endl
		<< "Número de mudas: " << m_total_mudas << std::endl
		<< "Data da última muda: " << m_ultima_muda << std::endl;

	return _os;
}