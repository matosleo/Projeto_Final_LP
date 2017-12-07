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
//#include <tuple>
using namespace PetFera;

Pet_Fera_Cadastro::Pet_Fera_Cadastro()
{

}

Pet_Fera_Cadastro::~Pet_Fera_Cadastro()
{

}

std::string Pet_Fera_Cadastro::cadastro_nativo( std::string & dados )
{
	std::string _ibama;
	std::string _uf_origem;
	std::string _autorizacao;

	std::cout << "\nID do Ibama: ";
	std::getline( std::cin, _ibama );
	std::cout << "\nEstado de Origem: ";
	std::getline( std::cin, _uf_origem );
	std::cout << "\nAutorizacao do Ibama: ";
	std::getline( std::cin, _autorizacao );

	dados.append( _ibama.append( ";" ) );
	dados.append( _uf_origem.append( ";" ) );
	dados.append( _autorizacao.append( ";" ) );

	return dados;

}

std::string Pet_Fera_Cadastro::cadastro_exotico( std::string & dados )
{

	std::string _ibama;
	std::string _pais_origem;

	std::cout << "\nID do Ibama: ";
	std::getline( std::cin, _ibama );
	std::cout << "\nPais de Origem: ";
	std::getline( std::cin, _pais_origem );

	dados.append( _ibama.append( ";" ) );
	dados.append( _pais_origem.append( ";" ) );

	return dados;

}
/*
std::tuple< int, std::string, std::string, std::string, std::string, char, float, std::string, V_pointer, T_pointer, std::string >
Pet_Fera_Cadastro::converte_cadastro_comum( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	int 		_id;
	std::string _classe = campos_registro[1];
	std::string _tipo = campos_registro[2];
	std::string _nome = campos_registro[3];
	std::string _cientifico = campos_registro[4];
	char 		_sexo = campos_registro[5];
	float 		_tamanho;
	std::string _dieta = campos_registro[7];
	V_pointer 	_veterinario = nullptr;
	T_pointer	_tratador = nullptr;
	std::string _batismo = campos_registro[10];

	std::stringstream temp = campos_registro[0];
	temp >> _id;

	temp = campos_registro[6];
	temp >> _tamanho;

	return std::make_tuple( _id, _classe, _tipo, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo );

}

std::tuple< std::string, std::string, std::string >
Pet_Fera_Cadastro::converte_cadastro_nativo( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	std::string _ibama = campos_registro[11];
	std::string _uf_origem = campos_registro[12];
	std::string _autorizacao = campos_registro[13];

	return std::make_tuple( _ibama, _uf_origem, _autorizacao );

}

std::tuple< std::string, std::string >
Pet_Fera_Cadastro::converte_cadastro_exotico( const std::string & dados_comuns )
{

	std::vector< std::string > campos_separados = separar( dados_comuns, ';' );

	std::string _ibama = campos_registro[11];
	std::string _pais_origem = campos_registro[14];
	

	return std::make_tuple( _ibama, _pais_origem );

}
*/
bool Pet_Fera_Cadastro::cadastrar_anfibio( std::string _classe, std::string _tipo )
{


	
	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	int			_total_mudas;
	std::string _ultima_muda;
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
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nTotal de mudas: ";
	std::cin >> _total_mudas;
	std::cout << "\nData da ultima muda (DD/MM/AAAA): ";
	std::cin >> _ultima_muda;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		//std::tuple< int, std::string, std::string, std::string, std::string, char, float, std::string, V_pointer, T_pointer, std::string >
		//td = converte_cadastro_comum( dados_comuns );

		Anfibio * anfibio_domestico = new Anfibio( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda);

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_domestico ) );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nEstado de Origem: ";
		std::cin >> _uf_origem;
		std::cout << "\nAutorizacao do Ibama: ";
		std::cin >> _autorizacao;

		Anfibio * anfibio_nativo = new AnfibioNativo( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda
													, _ibama, _uf_origem, _autorizacao );

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_nativo ) );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		std::cout << "\nID do Ibama: ";
		std::cin >> _ibama;
		std::cout << "\nPais de Origem: ";
		std::cin >> _pais_origem;

		Anfibio * anfibio_exotico = new AnfibioExotico( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _total_mudas, _ultima_muda
													, _ibama, _pais_origem );

		m_tabela_anfibio.insert( std::pair<int, Anfibio*> ( _id, anfibio_exotico ) );		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;

}

bool Pet_Fera_Cadastro::cadastrar_mamifero( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	std::string _cor_pelo;

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
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nCor do pelo do animal: ";
	std::cin >> _cor_pelo;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];
	
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{

		Mamifero * mamifero_domestico = new Mamifero( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _cor_pelo);

		m_tabela_mamifero.insert( std::pair<int, Mamifero*> ( _id, mamifero_domestico ) );

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_reptil( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	std::string	_venenoso;
	std::string _tipo_veneno;
	bool possui_veneno = false;

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
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;	
	std::cout << "\nAnimal venenoso ( sim ou nao ): ";
	std::cin >> _venenoso;

	if( _venenoso.compare( "sim" ) == 0 )
	{
		
		std::cout << "\nTipo do veneno: ";
		std::cin >> _tipo_veneno;
		possui_veneno = true;

	} else
	{
		_tipo_veneno = "nenhum";
		
	}

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];
	

	if( _tipo.compare( "Domestico" ) == 0 )
	{


		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

		Reptil * reptil_domestico = new Reptil( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, possui_veneno, _tipo_veneno);

		m_tabela_reptil.insert( std::pair<int, Reptil*> ( _id, reptil_domestico ) );

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_ave( std::string _classe, std::string _tipo )
{

	int 		_id;
	std::string _nome;
	std::string _cientifico;
	char 		_sexo;
	float 		_tamanho;
	std::string _dieta;
	int 		_id_veterinario;
	int			_id_tratador;
	std::string _batismo;
	float		_tamanho_bico;
	float 		_envergadura;

	
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
	std::cin >> _id_veterinario;
	std::cout << "\nID do Tratador responsavel: ";
	std::cin >> _id_tratador;
	std::cout << "\nNome de batismo: ";
	std::cin >> _batismo;
	std::cout << "\nTamanho do bico do animal: ";
	std::cin >> _tamanho_bico;
	std::cout << "\nEnvergadura do animal: ";
	std::cin >> _envergadura;

	Tratador * tratador_resp;
	Veterinario * veterinario_resp;

	/*	Assumir que todo animal a ser cadastrado tem que ter um tratador e um veterinario associado	*/

	if( m_tabela_tratador.find( _id_tratador ) != m_tabela_tratador.end() )
		tratador_resp = m_tabela_tratador[ _id_tratador ];

	if( m_tabela_veterinario.find( _id_veterinario ) != m_tabela_veterinario.end() )
		veterinario_resp = m_tabela_veterinario[ _id_veterinario ];

	if( _tipo.compare( "Domestico" ) == 0 )
	{

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

		Ave * ave_domestico = new Ave( _id, _classe, _tipo, _nome, _cientifico
													, _sexo, _tamanho, _dieta, veterinario_resp
													, tratador_resp, _batismo, _tamanho_bico, _envergadura);

		m_tabela_ave.insert( std::pair<int, Ave*> ( _id, ave_domestico ) );

	
	} else if( _tipo.compare( "Nativo" ) == 0 )
	{

		

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	} else if( _tipo.compare( "Exotico" ) == 0 )
	{

		/*	Precisa tratar a string dados_comuns, instanciar o objeto e adicionalo no map	*/

	}

	return true;
}

bool Pet_Fera_Cadastro::cadastrar_funcionario( std::string _funcao )
{

	int 		_id;
	std::string _nome;
	std::string _CPF;
	short 		_idade;
	short 		_tipo_sangue;		// A / B / AB / O
	short 		_fator_RH;			// + / -
	std::string _especialidade;

	std::cout << "Numero de Identificacao do Funcionario (ID): ";
	std::cin >> _id;
	std::cout << "\nNome do Funcionario: ";
	std::cin >> _nome;
	std::cout << "\nCPF do Funcionario: ";
	std::cin >> _CPF;
	std::cout << "\nIdade do Funcionario: ";
	std::cin >> _idade;
	std::cout << "\nTipo sanguineo do Funcionario: ";
	std::cin >> _tipo_sangue;
	std::cout << "\nFator RH do tipo sanguineo: ";
	std::cin >> _fator_RH;
	std::cout << "\nEspecialidade: " << std::endl;
	std::cin >> _especialidade;

	/*		Construir o Funcionario	e adicionalo no map 	*/

	if( _funcao.compare( "Tratador" ) == 0  )
	{

		Tratador * novo_tratador = new Tratador( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade );
		m_tabela_tratador.insert( std::pair<int, Tratador*> ( _id, novo_tratador ) );

	} else if ( _funcao.compare( "Veterinario" ) == 0  )
	{

		Veterinario * novo_veterinario = new Veterinario( _id, _funcao, _nome, _CPF, _idade, _tipo_sangue, _fator_RH, _especialidade );
		m_tabela_veterinario.insert( std::pair<int, Veterinario*> ( _id, novo_veterinario ) );

	}

	return true;
}

bool Pet_Fera_Cadastro::remover_funcionario( int _id )
{

	return true;
}

bool Pet_Fera_Cadastro::remover_animal( int _id )
{

	/*	Falta implementar a remoção	*/

	return true;
}

bool Pet_Fera_Cadastro::alterar_dados_animais( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::alterar_dados_funcionarios( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_animais( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_animais_funcionario( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::consultar_funcionarios( int _id )
{

	return true;

}

bool Pet_Fera_Cadastro::importar_dados_animais()
{
	return true;
}

bool Pet_Fera_Cadastro::importar_dados_funcionarios()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_animais()
{
	return true;
}

bool Pet_Fera_Cadastro::exportar_dados_funcionarios()
{
	return true;
}

unsigned int Pet_Fera_Cadastro::quantidade_animais_cadastrados( void )
{

	return ( m_tabela_anfibio.size() + m_tabela_mamifero.size() + m_tabela_reptil.size() + m_tabela_ave.size() );

}

unsigned int Pet_Fera_Cadastro::quantidade_funcionarios_cadastrados( void )
{
	return m_tabela_veterinario.size() + m_tabela_tratador.size();
}