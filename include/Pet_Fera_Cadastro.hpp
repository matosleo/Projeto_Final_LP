/**
 * @file Pet_Fera_Cadastro.cpp
 * @brief      Declaração da classe Pet_Fera_Cadastro, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      30/11/2017
 * @date       03/12/2017
 */

#ifndef PET_FERA_HPP
#define PET_FERA_HPP

#include <map>

class Pet_Fera_Cadastro
{
	std::map * m_tabela_animais;
	std::map * m_tabela_funcionarios;

public:
	Pet_Fera_Cadastro();
	~Pet_Fera_Cadastro();

	bool cadastrar_veterinario();
	bool cadastrar_tratador();
	bool cadastrar_anfibio();
	bool cadastrar_mamifero();
	bool cadastrar_reptil();
	bool cadastrar_ave();

	bool remover_veterinario();
	bool remover_tratador();
	bool remover_anfibio();
	bool remover_mamifero();
	bool remover_reptil();
	bool remover_ave();

	bool alterar_anfibio();
	bool alterar_mamifero();
	bool alterar_reptil();
	bool alterar_ave();
	
	bool importar_dados_animais();
	bool importar_dados_funcionarios();

	bool exportar_dados_animais();
	bool exportar_dados_funcionarios();

	unsigned int quantidade_animais_cadastrados( void );
	unsigned int quantidade_funcionarios_cadastrados( void );

};

#endif