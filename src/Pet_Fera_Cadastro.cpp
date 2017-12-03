/**
 * @file Pet_Fera_Cadastro.cpp
 * @brief      Implementação da classe Pet_Fera_Cadastro, seus atributos e métodos
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

#include "Pet_Fera_Cadastro.hpp"
#include "main_teste.cpp"
#include "Animal.hpp"

Pet_Fera_Cadastro::Pet_Fera_Cadastro()
{

}

Pet_Fera_Cadastro::~Pet_Fera_Cadastro()
{

}

bool Pet_Fera_Cadastro::cadastrar_veterinario()
{

}

bool Pet_Fera_Cadastro::cadastrar_tratador()
{

}

bool Pet_Fera_Cadastro::cadastrar_anfibio( std::string _classe, std::string _tipo )
{
	int 		_total_mudas;
	std::string _ultima_muda;
	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	V_pointer 	_veterinario;
	T_pointer	_tratador;
	std::string _batismo;
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;
	std::string _pais_origem;

	std::cout << "Numero de Identificacao do Animal (ID): ";
	std::cin >> _id;
	std::cout << "\nNome: ";
	std::cin >> _nome;
	std::cout << "\nNome Cientifico: ";
	std::cin >> _cientifico;
	std::cout << "\nSexo: ";
	std::cin >> _sexo;
	std::cout << "\nTamanho: ";
	std::cin >> _tamanho;
	std::cout << "\nDieta: ";
	std::cin >> _dieta;
	std::cout << "\nID do Veterinario responsavel: ";
	std::cin >> _veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;
	std::cout << "\nTotal de mudas: ";
	std::cin >> _total_mudas;
	std::cout << "\nData da ultima muda (DD/MM/AAAA): ";
	std::cin >> _ultima_muda;

	if( compare( _tipo, "Domestico" ) == 0 )
	{

		PetFera::Anfibio new_anfibio = new Anfibio( _id, _classe, _nome, _cientifico, 
													_sexo, _tamanho, _dieta, _veterinario,
													_tratador, _batismo, _total_mudas, _ultima_muda );

		auto it = m_tabela_animais.find( _id );
		if( it != m_tabela_animais.end() )
			std::cout << "Animal existente no cadastro!"  << std::endl;
		else
			m_tabela_animais.emplace( _id, new_anfibio );

		delete( new_anfibio );
	
	} else if( compare( _tipo, "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		PetFera::AnfibioNativo new_anfibio = new AnfibioNativo( _id, _classe, _nome, _cientifico, 
																_sexo, _tamanho, _dieta, _veterinario,
																_tratador, _batismo, _total_mudas, _ultima_muda,
																_ibama, _uf_origem, _autorizacao );

		auto it = m_tabela_animais.find( _id );
		if( it != m_tabela_animais.end() )
			std::cout << "Animal existente no cadastro!"  << std::endl;
		else
			m_tabela_animais.emplace( _id, new_anfibio );

		delete( new_anfibio );

	} else if( compare( _tipo, "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;

		PetFera::AnfibioNativo new_anfibio = new AnfibioExotico( _id, _classe, _nome, _cientifico, 
																_sexo, _tamanho, _dieta, _veterinario,
																_tratador, _batismo, _total_mudas, _ultima_muda,
																_ibama, _pais_origem );

		auto it = m_tabela_animais.find( _id );
		if( it != m_tabela_animais.end() )
			std::cout << "Animal existente no cadastro!"  << std::endl;
		else
			m_tabela_animais.emplace( _id, new_anfibio );

		delete( new_anfibio );

	}

}

bool Pet_Fera_Cadastro::cadastrar_mamifero( std::string _classe, std::string _tipo )
{

}

bool Pet_Fera_Cadastro::cadastrar_reptil( std::string _classe, std::string _tipo )
{

}

bool Pet_Fera_Cadastro::cadastrar_ave( std::string _classe, std::string _tipo )
{

}

bool Pet_Fera_Cadastro::remover_veterinario()
{

}

bool Pet_Fera_Cadastro::remover_tratador()
{

}

bool Pet_Fera_Cadastro::remover_anfibio()
{

}

bool Pet_Fera_Cadastro::remover_mamifero()
{

}

bool Pet_Fera_Cadastro::remover_reptil()
{

}

bool Pet_Fera_Cadastro::remover_ave()
{

}

bool Pet_Fera_Cadastro::alterar_anfibio()
{

}

bool Pet_Fera_Cadastro::alterar_mamifero()
{

}

bool Pet_Fera_Cadastro::alterar_reptil()
{

}

bool Pet_Fera_Cadastro::alterar_ave()
{

}

bool Pet_Fera_Cadastro::importar_dados_animais()
{

}

bool Pet_Fera_Cadastro::importar_dados_funcionarios()
{

}

bool Pet_Fera_Cadastro::exportar_dados_animais()
{

}

bool Pet_Fera_Cadastro::exportar_dados_funcionarios()
{

}

unsigned int Pet_Fera_Cadastro::quantidade_animais_cadastrados( void )
{

}

unsigned int Pet_Fera_Cadastro::quantidade_funcionarios_cadastrados( void )
{

}